#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>
using namespace std;
/*(struct personage {
    char name [80];
    char surname[80];
    int age;
    int age2;
};*/
    
    class GodOfWar {
public:
      struct personage {
    char name [80];
    char surname[80];
    int age;
    int age2;
};
GodOfWar::personage Hero [100];
public:
    void input (personage *Hero [100], int &n){
        for (int i = 0; i<n;i++){
        cout<<"Имя = ";
            cin>>Hero[i]->name;
        cout<<"\nВозраст = ";
            cin>>Hero[i]->surname;
        cout<<"\nСуперспособность = ";
            cin>>Hero[i]->age;
    }
}
    void output (personage Hero [100],int &n){
        for (int i = 0; i<n;i++){
        cout<<"Имя = "<<Hero[i].name<<"\n"<<endl;
        cout<<"Фамилия = "<<Hero[i].surname<<"\n"<<endl;
        cout<<"Возраст = "<<Hero[i].age<<"\n"<<endl;
    }
}
};
//personage Hero [100],
class GodOfWar2  : public GodOfWar {
public:
   GodOfWar2::personage Hero [100];
    void in (personage Hero [100], int &n) {
        cout<<"Введите данные ваших персонажей"<<endl;
        GodOfWar2::input(Hero [100],n);
    }
     void  ou (personage Hero [100],int &n) {
         cout<<"Вывод ваших персонажей"<<endl;
        GodOfWar2::output(n);
     
    }
};

int main () {
    GodOfWar2 game;
    int n;
    game.in(Hero [100],n);
    game.ou(Hero[100],n);
}
