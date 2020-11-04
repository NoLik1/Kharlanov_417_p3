#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>

int main()
{
setlocale(LC_ALL, "Russian");
    std::cout<<"\t\t\t"<<"Матричное умножение двух матриц в динамической памяти "<<std::endl;
    std::cout<<"\t\t\tВведём первую матрицу"<<std::endl;
    std::cout<<"\tВведём размер массива "<<std::endl;
    int vtotryMassiv , treriymassiv ;
    std::cin>>vtotryMassiv;
    std::cin>>treriymassiv ;
    int **massichik = new int* [vtotryMassiv]; // создание указателя на остальной массив и хранение строк
    for (int i = 0;i<vtotryMassiv;i++) {
        massichik[i] = new int [treriymassiv] ; // создание массива столбцов (выделение памяти)
    }
        for (int i = 0; i<vtotryMassiv;i++){
        for ( int j = 0;j<treriymassiv;j++){
            std::cin>>massichik [i][j]; // заполнение динамического с  клавиаутуры
            }
        }
        for (int i = 0; i<vtotryMassiv;i++){
        for ( int j = 0;j<treriymassiv;j++){
        std::cout<<massichik[i][j]<<"\t"; // вывод массива в виде матрицы
        }
        std::cout<<std::endl;
            }
    std::cout<<std::endl;
std::cout<<"Введём вторую матрицу"<<std::endl;
    std::cout<<"\tВведём размер массива "<<std::endl;
    int vtotryMassiv2 , treriymassiv2;
    std::cin>>vtotryMassiv2;
    std::cin>>treriymassiv2 ;
    int **massichik2 = new int* [vtotryMassiv2]; // создание указателя на остальной массив и хранение строк
    for (int i = 0;i<vtotryMassiv2;i++) {
        massichik2[i] = new int [treriymassiv2] ; // создание массива столбцов (выделение памяти)
    }
        for (int i = 0; i<vtotryMassiv2;i++){
        for ( int j = 0;j<treriymassiv2;j++){
            std::cin>>massichik2 [i][j]; // заполнение динамического с  клавиаутуры
            }
        }
        for (int i = 0; i<vtotryMassiv2;i++){
        for ( int j = 0;j<treriymassiv2;j++){
        std::cout<<massichik2[i][j]<<"\t"; // вывод массива в виде матрицы
        }
        std::cout<<std::endl;
            }
    std::cout<<""<<std::endl;
    std::cout<<"\t\t\t\t"<<"Умножение массивов"<<std::endl;
    std::cout<<"\tВведём размер массива "<<std::endl;
    int vtotryMassiv3 , treriymassiv3 ;
    std::cin>> vtotryMassiv3;
    std::cin>>treriymassiv3 ;
    
    int **massichik3 = new int* [vtotryMassiv3]; // создание указателя на остальной массив и хранение строк
    for (int i = 0;i<vtotryMassiv3;i++) {
        massichik3[i] = new int [treriymassiv3] ; // создание массива столбцов (выделение памяти)
    }
    for ( int i=0; i<vtotryMassiv3; i++)
    {
        for (int j = 0; j < treriymassiv3; j++)
        {
            massichik3[i][j]=0;
            for (int k=0;k<2;k++)
            {
           
                massichik3[ i][j]+= massichik[i][k] * massichik2[k][j];
            }
        }
        for (int i = 0; i <vtotryMassiv3 ; ++i)
        {
            for (int j = 0; j < treriymassiv3;  ++j){
                std::cout << massichik3[i][j] << "\t"; // вывод массивчика (именно эта строка-вывод строк)
            }
            std::cout << std::endl;
    }
    }
system ("pause");
    return 0;
}

