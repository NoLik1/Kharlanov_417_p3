#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>



void input_dinamic(int**& array, int& row_count, int& col_count) // создание функции по вводу динамического массива с экрана
{
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
void mat_multiplication (int**& array1, int& row_count1,int& col_count1,int**& array2, int& row_count2,int& col_count2,int**& array3, int& row_count3, int& col_count3) {
   
    std::cin>>row_count3;
    std::cin>>col_count3;
    
    array3= new int* [row_count3];
    for ( int row=0; row<row_count3; row++){
        array3[row] = new int [col_count3] ;
        for (int col = 0; col < col_count3; col++) {
                array3[row][col]=0;
            for (int k=0;k<row_count3;k++){
                array3 [row][col]+= array1 [row][k] * array2 [k][col];
            
       }
     }
   }
    for (int row = 0; row<row_count2;row++){
        delete [] array2 [row];
    }
    delete [] array2;
    for (int row = 0; row<row_count1;row++){
        delete [] array1 [row];
    }
    delete [] array1;
}
void output_array(int**& array3,int& row_count3,int& col_count3){
    for (int row = 0; row<row_count3;row++){
         for (int col = 0; col<col_count3;col++){
                std::cout<<array3[row][col]<<"\t";
    }
        std::cout<<std::endl;
     }
    for (int row = 0; row<row_count3;row++){
        delete [] array3 [row];
     }
delete [] array3;
}

int main()
{
setlocale(LC_ALL, "Russian");
    std::cout<<"\t\t\t\t\tПроект по матричному умножению.Реализация через функции\n\n"<<std::endl;
    int** array1 = nullptr;
    int** array2 = nullptr;
    int** array3 = nullptr;
    int row_count1;
    int row_count2;
    int row_count3;
    int col_count1;
    int col_count2;
    int col_count3;
    input_dinamic(array1, row_count1, col_count1);
    input_dinamic(array2, row_count2, col_count2);// вызов этой функции
    mat_multiplication (array1,row_count1, col_count1, array2, row_count2, col_count2,array3, row_count3,col_count3);
    output_array(array3, row_count3, col_count3);
    system ("pause");
        return 0;
    
}
