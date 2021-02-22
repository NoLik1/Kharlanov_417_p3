#include<locale.h>
#include<iomanip>
#include<bitset>
#include<iostream>
using namespace std;

struct Marvel {
    char Heroes [80];
    int age;
    char superpowers [80];
};

void quantity (int &n) {
    cout<<"Введите количество требуемых вам героев\n"<<endl;
    cin>>n ;
}
void input (Marvel heroes [100],int &n){
    cout<<"Введите известных вам герове Марвел,заполнив три параметра - Имя,возраст, суперспособность"<<endl;
    for (int i = 0; i<n;  i++){
        cout<<"Имя = "<<endl;
        cin>>heroes[i].Heroes;
        cout<<"Возраст = "<<endl;
        cin>>heroes[i].age;
        cout<<"Суперспособность = "<<endl;
        cin>>heroes[i].superpowers;
    }
}

void Heroes (Marvel heroes [100], int &i){
    cout<<"Введите номер вашего персонажа, а после введите его новое имя!\n"<<endl;
    cin >> i;
    cin >> heroes[i].Heroes;
}

void age (Marvel heroes [100], int &i){
    cout<<"Введите номер вашего персонажа, а после введите его вверный возраст!\n"<<endl;
    cin >> i;
    cin >> heroes[i].age;
}

void superpowers (Marvel heroes [100], int &i){
    cout<<"Введите номер вашего персонажа, а после введите его новую суперспособность!\n"<<endl;
    cin >> i;
    cin >> heroes[i].superpowers;
}

void output (Marvel  heroes [100],int &n){

    for(int i = 0; i<n;i++){
        cout<<"Имя = "<<heroes[i].Heroes<<"\n"<<endl;
        cout<<"Возраст = "<<heroes[i].age<<"\n"<<endl;
        cout<<"Суперспобосность = "<<heroes[i].superpowers<<"\n"<<endl;
    }
}

int main()
{
setlocale(LC_ALL, "Russian");
   
    bool run = true;
    bool choise = true;
    Marvel heroes [100];
    int n,i,r;
    int abrakadabra;
    
    cout<<"\t\t\tВведите номер вызываемой вами функции (1-ввод имён героев,второе-вызов справки, 3-е вызов плюшки)"<<endl;
    cout<<"\t\t\tТакже, если вы ошиблись,нажмите 4 чтобы поменять какие-либо данные о нём, чтобы выйти из программы 5 или любую другую цифру! "<<endl;
    
    while (run) {
    cin>>abrakadabra;
    switch (abrakadabra)  {
    case  1:
        quantity(n);
        input(heroes,n);
        cout<<"\t\t\tВведите номер вызываемой вами функции (1-ввод имён героев,второе-вызов справки, 3-е вызов плюшки)"<<endl;
        cout<<"\t\t\tТакже, если вы ошиблись,нажмите 4 чтобы поменять какие-либо данные о нём, чтобы выйти из программы 5 или любую другую цифру! "<<endl;
    break;
    case 2:
        output(heroes,n);
        cout<<"\t\t\tВведите номер вызываемой вами функции (1-ввод имён героев,второе-вызов справки, 3-е вызов плюшки)"<<endl;
        cout<<"\t\t\tТакже, если вы ошиблись,нажмите 4 чтобы поменять какие-либо данные о нём, чтобы выйти из программы 5 или любую другую цифру! "<<endl;
    break;
    case 3:
         cout << "Все супергероия - крассавчики" <<endl;
    break;
    case 4:
        cout<<"Вы выбрали параметр изменения вашего персонажа, 1 - изменение имени, 2 - возраста, 3 - суперспособности, 4 и далее - выход в основное меню."<<endl;
    while (choise){
    cin>>r;
    switch (r){
    case 1:
        cout << "Вы выбрали параметр изменения имени вашего героя" <<endl;
        Heroes(heroes,i);
        cout<<"Вы выбрали параметр изменения вашего персонажа, 1 - изменение имени, 2 - возраста, 3 - суперспособности, 4 и далее - выход в основное меню."<<endl;
    break;
    case 2:
        cout << "Вы выбрали параметр изменения возраста вашего героя" <<endl;
        age(heroes,i);
        cout<<"Вы выбрали параметр изменения вашего персонажа, 1 - изменение имени, 2 - возраста, 3 - суперспособности, 4 и далее - выход в основное меню."<<endl;
    break;
    case 3:
        cout << "Вы выбрали параметр изменения суперспособности вашего героя" <<endl;
        superpowers(heroes,i);
        cout<<"Вы выбрали параметр изменения вашего персонажа, 1 - изменение имени, 2 - возраста, 3 - суперспособности, 4 и далее - выход в основное меню."<<endl;
    break;
    case 4:
        choise = false;
        cout<<"\t\t\tВведите номер вызываемой вами функции (1-ввод имён героев,второе-вызов справки, 3-е вызов плюшки)"<<endl;
        cout<<"\t\t\tТакже, если вы ошиблись,нажмите 4 чтобы поменять какие-либо данные о нём, чтобы выйти из программы 5 или любую другую цифру! "<<endl;
    break;
    default:
        choise = false;
        cout<<"\t\t\tВведите номер вызываемой вами функции (1-ввод имён героев,второе-вызов справки, 3-е вызов плюшки)"<<endl;
        cout<<"\t\t\tТакже, если вы ошиблись,нажмите 4 чтобы поменять какие-либо данные о нём, чтобы выйти из программы 5 или любую другую цифру! "<<endl;
    break;
            }
    }
    case 10:
         run = false;
         cout<<"\t\t\tПриходите к нам ещё"<<endl;
    break;
    default:
    run = false;
    cout<<"\t\t\tПриходите к нам ещё"<<endl;
    break;
        }
     }
    system("pause");
        return 0;
    
}
