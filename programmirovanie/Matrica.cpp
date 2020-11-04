#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>

int main()
{
setlocale(LC_ALL, "Russian");
    std::cout<<"\t\t\t"<<"Матричное умножение двух матриц"<<std::endl;
    std::cout<<"Введём первую матрицу"<<std::endl;
    double massiv1[3][3];
    for (int i = 0; i < 3; ++i){ // счётчик для заполнения столбцов
        for (int j = 0; j < 3; ++j){ // счётчик для заполнения строк
            std::cin >> massiv1[i][j];}
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j){
            std::cout << massiv1[i][j] << "\t"; // вывод массивчика (именно эта строка-строк)
        }
        std::cout << std::endl; //  а это у нас столбцы))
        if(i>3)
        {
            std::cout<<"Первая матрица полный вид"<<std::endl;
        }
    }
    std::cout<<std::endl;
std::cout<<"Введём вторую матрицу"<<std::endl;
    double massiv2[3][3];
    for (int n = 0; n < 3; ++n){ // счётчик для заполнения столбцов
        for (int m = 0; m < 3; ++m){ // счётчик для заполнения строк
            std::cin >> massiv2[n][m];}
    }
    for (int n = 0; n < 3; ++n)
    {
        for (int m = 0; m < 3; ++m){
            std::cout << massiv2[n][m] << "\t"; // вывод массивчика (именно эта строка-строк)
        }
        std::cout << std::endl; //  а это у нас столбцы))
    }
    std::cout<<""<<std::endl;
    std::cout<<"\t\t\t\t"<<"Умножение массивов"<<std::endl;
    double massiv3 [3][3];
    for ( int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            massiv3[i][j]=0;
            for (int k=0;k<3;k++)
            {
           
            massiv3 [i][j]+=massiv1 [i][k] * massiv2[k][j];
            }
        }
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j){
                std::cout << massiv3[i][j] << "\t"; // вывод массивчика (именно эта строка-вывод строк)
            }
            std::cout << std::endl;
    }
    }
system ("pause");
    return 0;
}
