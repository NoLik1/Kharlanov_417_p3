#include <iostream>

#include <locale.h>

#include <iomanip>

#include <bitset>
int main() {
setlocale(LC_ALL, "Russian");
// 1 УСЛОВНЫЕ ПЕРЕХОДЫ
// 1.1 Оператор if и if...else...
int salary = 120000;
bool has_education = true;
if ((salary < 150000) && (has_education)) // в скобках должна быть логическая переменная или условие выдающее true or false
{
std::cout << " Зашли под if !" << std::endl;
// всё что внутри скобок if выполняется если условияе в круглых скобках равно true


}
std::cout << "" << std::endl;
std::cout << "Ввeдите ваше имя на латинице :"  ;
std::string name; // оператор буковки
std::cin >> name; //  выводит данные с клавиатуры на компьютер
if (name == "ivan")
{

std::cout << " Зашли под 2 if !" << std::endl;
}
else
{


std::cout << " зашли под else " << std::endl;
}
std::cout << "" << std::endl;
// 1.2 Оператор switch//case//defolt
std::cout << "" << std::endl;
int type_of_creditor;
std::cout << " 1.2 Switch...case...Введидите код клиента (int type_of_creditor     " << std::endl; // \" - ковычки внутри ковычек, чтобы ковычки выводились на экран
std::cin >> type_of_creditor;
switch (/* переменная которая подлежит сравнению */ type_of_creditor)  {
case  1: // ветка действия
std::cout << "Тип клиента 1 - physical     " << std::endl;
break; // чтобы выполнялось ветка тольок тогда, когда вылетает эта переменная
case 2:
std::cout << "Тип клиента 2 - small_bisness" << std::endl;
break;
case 3:
std::cout << "Тип клиента 3- medium_bisness" << std::endl;
break;
case 4:
std::cout << "Тип клиента 4- large_bisness" << std::endl;
break;
default: /*действия которые выполняются в следующих случаях */
break;
}
std::cout << "" << std::endl;
// 1.3 Оператор тернарный
std::cout << ""  << std::endl;
int c = 10;
std::cout << "Оператор тернарный" << std::endl;
// кратко условный переход можно даже записать в одну строку if() {} else{}
// (условие)?(ветка если равна тру):(ветка если условие равно фолсе);
// или в виде тернарного оператора
(c < 5/*условие */)
? (/*операторы если тру */std::cout << "true" << std::endl)
  : (/*операторы если False*/std::cout << "false" << std::endl) ;
// 1.4 Оператор безусловного перехода goto
// в современной разработке стараются не применять, так как это минимум уменьшает читаемость кода
// синтаксис:
// в нужном месте программы создаётся так называемая метка,
lbl_1:  //индификатор (название) и двоеточие- это объявление метки
/*??????*/
c++;
std::cout << "Демонстрация работы 1.4 goto c=" << c << std::endl;
if (c == 15) { goto lbl_exit; }
else { goto lbl_1; }
lbl_exit :
std::cout << "Конец работы 1.4 goto " << std::endl;

//2. Конструкции цикла
//2.1 Счётный цикл for
    std::cout <<"\t\t\t\t"<< "Посчитаем от i=0 до 7 " << std::endl;
    for (int i=0;i<7;i++){
    std::cout << "Если i меньше 7 i=" << i << std::endl;}
    std::cout<<"i=7"<<std::endl;
    std::cout << "" << std::endl;
    std::cout<<"\t\t\t"<<"Введите число меньше 20"<<std::endl;
    int chislo;
    std::cin>>chislo;
    while(chislo<20){
        std::cout<<"+1 = "<<++chislo<<std::endl;
    }
    std::cout<<""<<std::endl;
    std::cout<<"\t\t\t" <<"Хотите почситать от сумму всех членов от 1 до 10 ? (ответ дайте на литинице) :";
    std::string otvet;
    std::cin>>otvet;
    std::cout << "" << std::endl;
    if (otvet == "Da"){
    std::cout <<"\t\t\t"<< " Хорошо, сейчас посчитаем" << std::endl;
    }
    else{
    std::cout <<"\t\t\t"<< "Мы всё равно посчитаем " << std::endl;
    }
    std::cout << " " << std::endl;
    std::cout<<"\t\t\t\t"<<"Считаем ! "<<std::endl;
    int chislo_1=0;
        int summa_1_to_20=0;
    do {
        ++chislo_1;
         summa_1_to_20+=chislo_1;
         std::cout<<"Число от 1 до 20 на шаге n = "<<chislo_1<<std::endl;
         std::cout<<""<<std::endl;
         std::cout<<"Промежуточный показатель  = "<<summa_1_to_20<<std::endl;
         std::cout<<""<<std::endl;
    }while(chislo_1<10);
    std::cout<<"\t\t"<<"Сумма числе от 1 до 10  равна = "<<summa_1_to_20;
    return 0;
}


