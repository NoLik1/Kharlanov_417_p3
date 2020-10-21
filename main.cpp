#include <iostream> // заголовочный файл для cout, << и много чего ещё
#include <locale.h> // заголовочный файл для функции setlocale()
#include <iomanip> // заголовочный файл для функций управления печатью  bin(), hex(), и других
#include <bitset>

// ТЕМА ! ОПЕРАТОРЫ С++ СТРОЕНИЕ МИНИМАЛЬНОЙ ПРОГРАММЫ С/С++


int main() //во первых-функция, во вторых-точка входа,!!!! во всей программе должна быть только одна функция main !!!!
{
// блоки кода в функциях, операторах, и просто блоки просто отдельно взятого кода в С/С++ окружаются фигурными скобками

// классификации операторов
// 1)Арифмитические (+,-, *, /, %- остаток от целочисленного деления) оператор ++ - увеличить на единицу или инкремент ; оператор --  - уменьшит на единицу или декремент
//    Логические или Булевые  (  || - оператор "или", && - оператор "и", !- оператор отрицания )
//   Побитовые  (&- бинарное "и", |-бинарное "или", оператор сдвига влево <<, оператор сдвига вправо >>, тильда "~" - аналог оператора отрицания для двоичного представления)
//   Операторы сравнения ( > - оператор больше, < - оператор меньше, == - оператор равно, >= - больше или равно, <= - меньше или равно )
// 2) Унарные, бинарные и один тернарный
//     Унарные-работающие с единственным операндом  - оператор не(!),оператор тильда (~)
//     бинарные- работают с двумя операндами - операторы +\=\<<\>>\ && \ || \ | \ &\ % и так далее
//     Тернарный-работает с тремя операторами  ( лог_усл? ветка_если_true_ветка_если_false
//  операнд-данные, к которым применяются оператор
setlocale(LC_ALL, "Russian");

int a = 10;
int b = 3;
int result = 10 % 3;
std::cout
<< "Лабороторная работа 1. Операторы C/C++ "
"СТРОЕНИЕ МИНИМАЛЬНОЙ ПРОГРАММЫ С/С++"
<< std::endl;
std::cout << " " << std::endl;
std::cout << "\t\t\t " << " Арифмитические операции   " << "\n";

std::cout << "a=10, b=3" << std::endl;  // endl - просто перенос на следующую строку
std::cout << " 10 %  3 = " << 10 % 3 << "\n";  // "\n"  - просто перенос на следующую строку
std::cout << " " << std::endl;
std::cout << "\t\t\t" << "Логическое и  таблица  " << "\n";
std::cout << " " << std::endl;
std::cout << "\t\t b=true \tb=false   " << "\n";
std::cout << " a=true " << " \t" << (true && true) << " \t\t" << (true && false) << "\n";
// код для демонстрации оператора отрицания


std::cout << " a=false  " << " \t" << (true && false) << " \t\t" << (false && false) << "\n";
std::cout << " " << std::endl;
std::cout << "\t\t\t " << "Логическое или таблица   " << "\n";
std::cout << " " << std::endl;
std::cout << "\t\t b=true \tb=false   " << "\n";
std::cout << " a=true " << " \t" << (true || true) << " \t\t" << (true || false) << "\n";
std::cout << " a=false  " << " \t" << (true || false) << " \t\t" << (false || false) << "\n";
std::cout << " " << std::endl;
/*
\t (табуляция, отступ в строке ), \n (перенос н следующую строку) - так называемые escape-последовательности, управляющие символы
они кодируют вывод символов, которые нельзя набрать с клавиатуры
\t-единичный символ табуляции
служебным символом для начала escape послеждовательности является "\"
если нужно употребить сам по себе "\"  без escape епоследовательности, то следует в строке в коде писать "\\"
обратный слэш -/- это просто символ и особого знчения не имеет
*/

// ДОМАШНЯЯ РАБОТА
int binary_int = 0b1010;

int binary_integer = 0b0100;

std::cout << "\t\t\t " << "Логические магические действия & " << "\n";

std::cout << " Бинарное число binary_int =    " << std::bitset<8>(binary_int) << std::endl;

std::cout << "Бинарное число binary_integer = " << std::bitset<8>(binary_integer) << std::endl;

std::cout << "\t\t\t\t" << "-------  " << "\n";

std::cout << "\t\t\t\t" << std::bitset<8>(binary_int & binary_integer) << "\n";

std::cout << " " << std::endl;

std::cout << "\t\t\t " << "Логические магические действия | " << "\n";

std::cout << " Бинарное число binary_int =    " << std::bitset<8>(binary_int) << std::endl;

std::cout << "Бинарное число binary_integer = " << std::bitset<8>(binary_integer) << std::endl;

std::cout << "\t\t\t\t" << "-------  " << "\n";

std::cout << "\t\t\t\t" << std::bitset<8>(binary_int ^ binary_integer) << "\n";

std::cout << " " << std::endl;

std::cout << "\t\t\t " << "Логические магические действия ^" << "\n";

std::cout << " Бинарное число binary_int =    " << std::bitset<8>(binary_int) << std::endl;

std::cout << "Бинарное число binary_int  =    " << std::bitset<8>(binary_integer) << std::endl;

std::cout << "\t\t\t\t" << "-------  " << "\n";

std::cout << "\t\t\t\t" << std::bitset<8>(binary_int ^ binary_integer) << "\n";
//ДОМАШНЯЯ РАБОТА
// код для демонстрации операторов сдвига и тильды
std::cout << " " << std::endl;
//Вторая лекция
std::cout << "Второй день лекции" << "\n";
std::cout << " " << std::endl;
std::cout << "a=" << a << "\n";
std::cout << "Оператор ++ после числа  a++= " << a++ << "\n";
std::cout << "после применения инкремента a=" << a << "\n";
std::cout << "a=" << a << "\n";
std::cout << "Оператор ++ перед  числом  ++a = " << ++a << "\n";
std::cout << "после применения инкремента a=" << a << "\n";
// Если оператор ++ стоит после числа, то число сначала выводится на печать а затем увеличивается на единицу
// Если оператор ++ стоитперед числом, то число сначала увеличивается а затем выводится
// Если в строчке кода применяется только инкремент (перед или после6 числа), то разницы нет
bool c = false;
bool d = true;
std::cout << " " << std::endl;
    std::cout << "\t\t\t" << " Оператор отрицания d  и c  " << "\n";
std::cout << " c= " << c << "\t\t" << " ! c = " <<  !c << "\n";
std::cout << " d = " << d << "\t\t" << " ! d = " << !d << "\n";
std::cout << " " << std::endl;
std::cout << "\t\t\t" << " Оператор >> <<    " << "\n";
int  h = 0b1111;
int  g = 1;
std::cout << " Бинарное число h =    " << std::bitset<8>(h) << std::endl;
std::cout << " Бинарное число g =    " << std::bitset<8>(g) << std::endl;
std::cout << " h << g = " << std::bitset <8>( h <<  g)  << "\n";
std::cout << " h >> g  = " << std::bitset <8>( h >>  g)  << "\n";
std::cout << " " << std::endl;
std::cout << "\t\t\t" << " Оператор ~    " << "\n";
std::cout << "~  h  = " << std::bitset <8>(~h) << "\n";

// ТИПЫ ДАННЫЗ ЯЗЫКА С\С++
//2.1 Целочисленные типы (используются для хранения целых чисел положительных,отрицательных и беззнаковых)
    char char_var; // занимает памяти 8 бит (байт), моет хранить числа от -128 до 127
short short_var; //занимает памяти 16 бит (2 байта), моет хранить числа от -37768 до 32767
int int_var;  //занимает памяти 32 бит (4 байта), моет хранить числа от INT32_MIN   до INT32_MAX
long long_var; // аналогично int
long int lo_int_var; // pзанимает в памяти 64 бит (8 байт) , может зранить числа от LLONG_MIN до LLONG_MAX
long long lo_long_var; // аналог long int
// если приписать к любому целому занковому типу модификатор unsigned , то
// 1) положительный диапозон (максимально положительное число) увеличивается в 2 раза + 1
//  2) в число с меткой unsigned нельзя будет записать отрицательные числа
// 2.2 Арифмитические  Типы с плавающей запятой/точкой
float float_var; // имеет объяём 4 байта (32 бита) и может представлять числа от FLT_MIN до FLT_MAX
double dbl_var;
//2.3 Логические типы данных
bool bool_var; // может представлять всего 2 значиния - true or false, но имеет длинну 1 байт (8 бит)
// sizeoff()-оператор мерения длины в байтах
// 2.4 Символьные типы данных
char crv_var; // диапозона арифимитического типа char очень хватает на кодирование таблицы символов
// поэтогму чаще типа char используют именно для хранения символов и строк, чем для символов
wchar_t wchr_var; // имеет объём 16 бит (2 байта) и введён для хранения символов юникода или других расширений кода
// 2.5 Универсальный или пустой тип void
// компилятор рассматривает void просто как ячейку с неопределёнными данными
// служебеный тип данных может использоваться как заглушка если функция не возвращает и не принимает значений либо
// в сложных конструкциях приведения типов
// вызов функции  систем из стандартной библиотеки языка


return 0;
}


