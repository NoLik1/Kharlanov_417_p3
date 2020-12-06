#include<locale.h>
#include<iomanip> 
#include<bitset>
#include<iostream>

class matrix {
private:
    
    int row_count;
    int col_count;
    int row_count2;
    int col_count2;
    int row_count3;
    int col_count3;
    int **array ;
    int **array2 ;
    int **array3 ;
   
    public:
    matrix (int& row_count,int& col_count,int& row_count2,int& col_count2,int& row_count3,int& col_count3) {
        this->row_count=row_count;
        this->col_count=col_count;
        this->row_count2=row_count2;
        this->col_count2=col_count2;
        this->row_count3=row_count3;
        this->col_count3=col_count3;
        int **array = new int* [row_count];
        for(int row = 0;row < row_count; row++) {
            array[row] = new int [col_count] ;
        }
        
        int **array2 = new int* [row_count2];
       
        for (int row = 0;row < row_count2; row++) {
            array2[row] = new int [col_count2] ;
        }
        int **array3 = new int* [row_count3];
        for (int row = 0;row < row_count3; row++) {
            array3[row] = new int [col_count3] ;
        }
        
    }    void input_dinamic(int**& array, int& row_count, int& col_count) // создание функции по вводу динамического массива с экрана
    {
        this->array=array;
        this->row_count=row_count;
        this->col_count=col_count;
        std::cin >> row_count;
        std::cin >> col_count;



        array = new int* [row_count];
        for (int row = 0; row < row_count; row++) {
            array[row] = new int[col_count];
        }



        for (int row = 0; row < row_count; row++) {
            for (int col = 0; col < col_count; col++) {
                std::cin >> array[row][col];
            }
        }
        for (int row = 0; row<row_count;row++){
            for (int col = 0; col<col_count;col++){
                    std::cout<<array[row][col]<<"\t";
        }
            std::cout<<std::endl;
        }
    }
    void output_array(int**& array3,int& row_count3,int& col_count3){
        this->array3=array3;
        this->row_count3=row_count3;
        this->col_count3=col_count3;
        for (int row = 0; row<row_count3;row++){
             for (int col = 0; col<col_count3;col++){
                    std::cout<<array3[row][col]<<"\t";
        }
            std::cout<<std::endl;
         }
    }
    void mat_multiplication (int** array, int& row_count,int& col_count,int** array2, int& row_count2,int& col_count2,int**& array3, int& row_count3, int& col_count3) {
        this->array=array;
        this->row_count=row_count;
        this->col_count=col_count;
        this->array2=array2;
        this->row_count2=row_count2;
        this->col_count2=col_count2;
        this->array3=array3;
        this->row_count3=row_count3;
        this->col_count3=col_count3;
        std::cin>>row_count3;
        std::cin>>col_count3;
        
        array3= new int* [row_count3];
        for ( int row=0; row<row_count3; row++){
            array3[row] = new int [col_count3] ;
            for (int col = 0; col < col_count3; col++) {
                    array3[row][col]=0;
                for (int k=0;k<row_count3;k++){
                    array3 [row][col]+= array [row][k] * array2 [k][col];
                
           }
         }
       }
     }
};


int main()
{
    
setlocale(LC_ALL, "Russian");
    
    int row_count;
    int col_count ;
    int row_count2;
    int col_count2;
    int row_count3;
    int col_count3;
    int **array ;
    int **array2 ;
    int **array3 ;
    matrix a(row_count,col_count,row_count2,col_count2,row_count3,col_count3);
    a.input_dinamic(array, row_count, col_count);
    a.input_dinamic(array2, row_count2, col_count2);
    a.mat_multiplication(array, row_count, col_count, array2, row_count2, col_count2, array3, row_count3, col_count3);
    a.output_array(array3, row_count3, col_count3);
system("pause");
return 0 ;
}
