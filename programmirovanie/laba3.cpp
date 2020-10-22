#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>

int main()
{
    std::cout<<"\t\t\t\t\t\t\t"<<"Указатель и действия с ним"<<std::endl;
     setlocale(LC_ALL, "Russian");
    //int *print_int;
    //нельзя распечатать переменную которую неинициализирована
    //std::cout<<print_int<<std::endl; // показывает номер в программе
//std::cout<<*print_int<<std::endl; //показывает значение переменной принт
    std::cout<<"\t\t"<<"Запринтили переменную через указатель"<<std::endl;
    int *print;
    int A=10;
    print = &A;
    std::cout<<*print<<std::endl;
    std::cout<<"\t\t"<<"Распечатка в режиме sizeof"<<std::endl;
    std::cout<<sizeof(print)<<std::endl; //возращает размер объекта в байтах ( в данном случае указателя)
    std::cout<<sizeof(*print)<<std::endl; // в данном случае возвращает размер переменной в байтах
    std::cout<<"\t\t\t\t\t\t\t"<<"Массивы"<<std::endl;
    int massiv [9]= {0,5,6,7,8,9,2,3,11};
 
    for ( int schetchik =0; schetchik<9; schetchik++) {
        std::cout<<massiv[schetchik]<<std::endl; ;
    }
    std::cout<<""<<std::endl;
    int massiv_s_klavi [3];
    std::cout<<"\t\t\t"<<"Массив с клавиатурки"<<std::endl;
    for ( int i =0; i<3; i++) {
        std::cout<<"Элемент массива - "<<i<<std::endl;
        std::cin>>massiv_s_klavi[i] ;
    }
    std::cout<<""<<std::endl;
    std::cout<<"\t\t\t"<<"Двумерный массив/матрица с клавиатуры"<<std::endl;
    int massiv2[3][3];
    for (int i = 0; i < 3; ++i){ // счётчик для заполнения столбцов
        for (int j = 0; j < 3; ++j){ // счётчик для заполнения строк
            std::cin >> massiv2[i][j];}
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j){
            std::cout << massiv2[i][j] << "\t"; // вывод массивчика (именно эта строка-строк)
        }
        std::cout << std::endl; //  а это у нас столбцы))
    }
    std::cout<< " Вывод элемента массива с индексом 1/1 = "<<massiv2[1][1]<<std::endl;
     // если слегка выйти за границы массива, то он заполнит его мусором
    // если сильно выйти за пределы массива, то он не сможет вывести ничего и выдаст ошибку
    int nomer; int nomer2; std::cin>>nomer; std::cin>>nomer2;
    int *vivod; int *vivod2;  vivod = &nomer; vivod2 = &nomer2;
    std::cout<< " Вывод элемента массива c  выбранным элементом="<<massiv2[*vivod][*vivod2]<<std::endl;
    
    return 0;
}




