#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>



void input_dinamic(int** array, int& row_count, int& col_count) // создание функции по вводу динамического массива с экрана
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
}
void mat_multiplication (int** array1, int& row_count1,int& col_count1,int** array2, int& row_count2,int& col_count2){
    int row_count3,col_count3;
    std::cin>>row_count3;
    std::cin>>col_count3;
    
    int **array3= new int* [row_count2];
    for ( int row=0; row<row_count2; row++){
        array3[row] = new int [col_count1] ; // создание массива столбцов (выделение памяти)
    }
    
    
    array3[row_count1][col_count2]=0;
            for (int k=0;k<3;k++){
               array3 [row_count3][col_count3]+= array1 [row_count1][k] * array2 [k][col_count2];
            }
        }
void output_array(int** array3,int& row_count3,int& col_count3){
    array3= new int* [row_count3];
    for ( int row=0; row<row_count3; row++){
        array3[row] = new int [col_count3] ; // создание массива столбцов (выделение памяти)
    }
    for (int row = 0; row<row_count3;row++){
         for (int col = 0; col<col_count3;col++){
                std::cout<<array3[row][col]<<"\t";
    }
        std::cout<<std::endl;
     }
}
int main()
{
setlocale(LC_ALL, "Russian");
/*std::cout<<"\t\t\t"<<"Лабороторная 4. Динамическая память "<<std::endl;
int *peremennay1 = new int; // объявление переменной в динамической памяти
*peremennay1 = 10;// присваивание ей значения
std::cout<<"Динамическая переменная = "<<*peremennay1<<std::endl ;
std::cout<<""<<std::endl;
std::cout<<"\t\t\t"<<"Работа с массивами в динамической памяти "<<std::endl;
int   perviymassiv;
std::cout<<"Введите количество переменных в массиве = ";
std::cin>>perviymassiv;
int *massichik = new int [perviymassiv]; // объявление массива в динамической памяти
for (int g=0;g<perviymassiv;g++){
     massichik[g] = g+1;
        std::cout<<"Динамический массив  с индексом "<<g<< " = "<<massichik[g] << std::endl;
    }
    std::cout<<"\t\t\t"<<"Создание двумерного динамического массива с клавиатуры"<<std::endl;
    int vtotryMassiv = 5, treriymassiv = 5; // объявление размеров массива
    int **massichik2 = new int* [vtotryMassiv]; // создание указателя на остальной массив и хранение строк
    for (int row = 0;row<vtotryMassiv;row++) {
        massichik2[row] = new int [treriymassiv] ; // создание массива столбцов (выделение памяти)
    }
        for (int row1 = 0; row1<vtotryMassiv;row1++){
        for ( int col = 0;col<treriymassiv;col++){
            std::cin>>massichik2 [row1][col]; // заполнение динамического с  клавиаутуры
            }
        }
        for (int row1 = 0; row1<vtotryMassiv;row1++){
        for ( int col = 0;col<treriymassiv;col++){
        std::cout<<massichik2[row1][col]<<"\t"; // вывод массива в виде матрицы
        }
        std::cout<<std::endl;
            }
    std::cout<<"\n";
    std::cout<<"\t\t\t"<<"Вызов утечкки памяти "<<std::endl;
    for (int i=0;i<10;i++){
        int *peremennay2 = new int;
        std::cin>>*peremennay2;
        std::cout<<*peremennay2+1<<std::endl; // оперативная память при работе с динамической переменной находится в одном диапазоне
        delete peremennay2; // удаление динамической переменной
    }
    delete peremennay1; // удаление динамической переменной
    delete [] massichik; // удаление простого динамического массива
    for (int row = 0; row<vtotryMassiv;row++){
        delete [] massichik2 [row]; // удаление массива отдельных столбцов
    }
    delete [] massichik2; // удаление массива указателейm */
    std::cout<<"\t\t\t"<<"Функции"<<std::endl;
     std::cout<<"Ввод динамического массива через функцию"<<std::endl;
    
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
    mat_multiplication(array1,row_count1, col_count1, array2, row_count1, col_count2);
    output_array(array3, row_count3, col_count3);
    system ("pause");
        return 0;
    
}
