#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
#include<iostream>



void input_dinamic(int **array, int &row, int &col)
{
    std::cin>>row;
    std::cin>>col;
    
    int **array = new int* [row];
    for (int row1 = 0; row<row1; row++){
    array[row] = new int [col] ;
}
    for (int row1 = 0; row1<row; row1++){
    for (int col1 = 0; col<col1; col1++){
        std::cin>>array [row1][col1];
}
}
}
int main()
{
setlocale(LC_ALL, "Russian");
std::cout<<"\t\t\t"<<"Лабороторная 4. Динамическая память "<<std::endl;
int *peremennay1 = new int; // объявление переменной в динамической памяти
*peremennay1 = 10;// присваивание ей значения
std::cout<<"Динамическая переменная = "<<*peremennay1<<std::endl ;
std::cout<<""<<std::endl;
std::cout<<"\t\t\t"<<"Работа с массивами в динамической памяти "<<std::endl;
int   perviymassiv;
std::cout<<"Введите количество переменных в массиве = ";
std::cin>>perviymassiv;
int *massichik = new int [perviymassiv]; // объявление массива в динамической памяти
for (int g=0;g<perviymassiv;g++){
     massichik[g] = g+1;
        std::cout<<"Динамический массив  с индексом "<<g<< " = "<<massichik[g] << std::endl;
    }
    std::cout<<"\t\t\t"<<"Создание двумерного динамического массива с клавиатуры"<<std::endl;
    int vtotryMassiv = 5, treriymassiv = 5; // объявление размеров массива
    int **massichik2 = new int* [vtotryMassiv]; // создание указателя на остальной массив и хранение строк
    for (int row = 0;row<vtotryMassiv;row++) {
        massichik2[row] = new int [treriymassiv] ; // создание массива столбцов (выделение памяти)
    }
        for (int row1 = 0; row1<vtotryMassiv;row1++){
        for ( int col = 0;col<treriymassiv;col++){
            std::cin>>massichik2 [row1][col]; // заполнение динамического с  клавиаутуры
            }
        }
        for (int row1 = 0; row1<vtotryMassiv;row1++){
        for ( int col = 0;col<treriymassiv;col++){
        std::cout<<massichik2[row1][col]<<"\t"; // вывод массива в виде матрицы
        }
        std::cout<<std::endl;
            }
    std::cout<<"\n";
    std::cout<<"\t\t\t"<<"Вызов утечкки памяти "<<std::endl;
    for (int i=0;i<10;i++){
        int *peremennay2 = new int;
        std::cin>>*peremennay2;
        std::cout<<*peremennay2+1<<std::endl; // оперативная память при работе с динамической переменной находится в одном диапазоне
        delete peremennay2; // удаление динамической переменной
    }
    delete peremennay1; // удаление динамической переменной
    delete [] massichik; // удаление простого динамического массива
    for (int row = 0; row<vtotryMassiv;row++){
        delete [] massichik2 [row]; // удаление массива отдельных столбцов
    }
    delete [] massichik2; // удаление массива указателейm */
    std::cout<<"\t\t\t"<<"Функции"<<std::endl;
     std::cout<<"Ввод динамического массива через функцию"<<std::endl;
    
     input_dinamic;
    
    
    system ("pause");
        return 0;
    
}
