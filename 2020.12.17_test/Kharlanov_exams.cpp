#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name_file;
    cout << "input name of file: ";
    cin >> name_file;
    ifstream ist(name_file);

    if (!ist)
    {
        cout << "Unable to open the file." << endl;
        return 1;
    }

    int number = 0, beforeNumber;
    bool check = true;
    ist >> beforeNumber;
    while (ist >> number)
    {
        if (number == beforeNumber)
        {
            cout << number << " ";
            check = false;
        }
        beforeNumber = number;
    }
    
    if (check)
    {
        cout << "Dual elements don't found!" << endl;
    }

    return 0;
}
/*
 Для ограничения доступа в стороннем коде к полям класса применяются спецификаторы доступа public, protected и private (если не применять ни один из спецификаторов, по умолчанию работает private): public -  доступ можно получить извне  класса, private- доступ можно получить только внутри класса, protected - доступ можно получить только дружественные и дочерние классы.
 Задаются :
 class matrix {
 private: ******* (какой-то код)
 public: *******(какой-то код)
 protected: *******(какой-то код) */
