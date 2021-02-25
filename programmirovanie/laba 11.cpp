#include<locale.h>
#include<iomanip>
#include<bitset>
#include<iostream>
using namespace std;

struct Marvel {
    char Heroes [80];
    int age;
    char city [80];
};
struct Superpowers{
    int power;
    char superpowers [80];
    char source_of_strength [80];
};

struct outcome {
   Marvel Superheroes;
   Superpowers Strengh;
};

void quantity (int &n) {
    cout<<"Введите количество требуемых вам героев\n"<<endl;
    cin>>n ;
}
void input (outcome heroes [100],int &n){
    cout<<"Введите известных вам герове Марвел,заполнив три параметра - Имя,возраст, суперспособность"<<endl;
    for (int i = 0; i<n;  i++){
        cout<<"Имя = ";
        cin>>heroes[i].Superheroes.Heroes;
        cout<<"\nВозраст = ";
        cin>>heroes[i].Superheroes.age;
        cout<<"\nСуперспособность = ";
        cin>>heroes[i].Strengh.superpowers;
        cout<<"\n"<<endl;
    }
}

void Heroes (outcome heroes [100], int &i){
    cout<<"Введите номер вашего персонажа, а после введите его новое имя!\n"<<endl;
    cin >> i;
    cin >> heroes[i].Superheroes.Heroes;
}

void age (outcome heroes [100], int &i){
    cout<<"Введите номер вашего персонажа, а после введите его вверный возраст!\n"<<endl;
    cin >> i;
    cin >> heroes[i].Superheroes.age;
}

void superpowers (outcome heroes [100], int &i){
    cout<<"Введите номер вашего персонажа, а после введите его новую суперспособность!\n"<<endl;
    cin >> i;
    cin >> heroes[i].Strengh.superpowers;
}


void output (outcome  heroes [100],int &n){

    for(int i = 0; i<n;i++){
        cout<<"Имя = "<<heroes[i].Superheroes.Heroes<<"\n"<<endl;
        cout<<"Возраст = "<<heroes[i].Superheroes.age<<"\n"<<endl;
        cout<<"Суперспобосность = "<<heroes[i].Strengh.superpowers<<"\n"<<endl;
    }
}


void change (outcome heroes [100], int &i, int &r, bool choise = true) {
    do{
    cout<<"Вы выбрали параметр изменения вашего персонажа, 1 - изменение имени, 2 - возраста, 3 - суперспособности, 4 и далее - выход в основное меню."<<endl;
    cin>>r;
    switch (r){
    case 1:
        cout << "Вы выбрали параметр изменения имени вашего героя" <<endl;
        Heroes(heroes,i);
    break;
    case 2:
        cout << "Вы выбрали параметр изменения возраста вашего героя" <<endl;
        age(heroes,i);
    break;
    case 3:
        cout << "Вы выбрали параметр изменения суперспособности вашего героя" <<endl;
        superpowers(heroes,i);
    break;
    case 4:
        choise = false;
        break;
    default:
        choise = false;
    break;
            }
    }while (choise);
}

int main()
{
setlocale(LC_ALL, "Russian");
   
    bool run = true;
    outcome heroes [100];
    int n,i,r;
    int abrakadabra;
    
    
    
    while (run) {
        cout<<"\t\t\tВведите номер вызываемой вами функции (1-ввод имён героев,второе-вызов справки, 3-е вызов плюшки)"<<endl;
        cout<<"\t\t\tТакже, если вы ошиблись,нажмите 4 чтобы поменять какие-либо данные о нём, чтобы выйти из программы 5 или любую другую цифру! "<<endl;
    cin>>abrakadabra;
    switch (abrakadabra)  {
    case  1:
        quantity(n);
        input(heroes,n);
    break;
    case 2:
        output(heroes,n);
    break;
    case 3:
         cout << "Все супергероия - крассавчики" <<endl;
    break;
    case 4:
        change(heroes, i, r);
    break;
    case 5:
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
