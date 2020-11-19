#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>
#include<math.h> // библиотека для округления чисел
int main()
{
setlocale(LC_ALL, "Russian");
std::cout<<"\t\t\t"<<"Лабороторная 6 "<<std::endl;
    std::cout<<""<<std::endl;
std::cout<<"\t"<<"Неявное приведение типов"<<std::endl;
    std::cout<<""<<std::endl;
int int_a = 17;
int int_b = 7;
double double_a = 17.0;
double double_b = 7.0;
     
std::cout << "int 17 : int 7 = " << int_a / int_b  << std::endl; // в данном делении он отбросит остаток и поделит просто целые числа
std::cout << "double 17 : int 7 = " << double_a / int_b << std::endl;// в данном примере он поделит точно, так как автоматически заменит тип одного числа (! может выдать придупреждение)
std::cout << "int 17 : double 7 = " << int_a / double_b << std::endl;// в данном примере он поделит точно, так как автоматически заменит тип одного числа (! может выдать придупреждение)
std::cout << "double 17 : double 7 = " << double_a / double_b << std::endl; //  всё поделит придельно точно
    std::cout<<""<<std::endl;
std::cout<<"\t"<<"Явное приведение типов"<<std::endl;
    std::cout<<""<<std::endl;
std::cout << 17.0/7.0 << std::endl; // принудительно задали тип с плавающей точкой через добавление "."
std::cout << (double)int_a/(double)7; //привели константы/переменные к нужному типу через добавление типов в нужных скобках
    std::cout<<""<<std::endl;
std::cout<<"\t"<<"Округление чисел"<<std::endl;
    std::cout<<""<<std::endl;
double x1 = 15.6;
double x2 = 15.4;
std::cout << "round(15.6) = " << round(x1) << std::endl; // стандартное округление (round) к большему/меньшему значению через 0.5
std::cout << "round(15.4) = " << round(x2) << std::endl; //
std::cout << "ceil(15.6) = " << ceil(x1) << std::endl; // округление к большему
std::cout << "ceil(15.4) = " << ceil(x2) << std::endl; // округление к большему
std::cout << "floor(15.6) = " << floor(x1) << std::endl; //округление к меньшему
std::cout << "floor(15.4) = " << floor(x2) << std::endl; //округление к меньшему

    std::cout<<""<<std::endl;
system ("pause");
return 0;
    
}
