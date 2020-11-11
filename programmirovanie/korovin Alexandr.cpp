#include<locale.h>
#include<iomanip>
#include<bitset>
#include<iostream>


int Fibonecci (int numbers) {
    if (numbers==0) {
        return 0;
    } if (numbers==1){
        return 1;
    } else {
        return Fibonecci(numbers-1) + Fibonecci(numbers-2) ;
    }
}




               
               
            
int main()
{
setlocale(LC_ALL, "Russian");
    int numbers;
    std::cin>>numbers;
    for (int i=0;i<numbers; i++){
        std::cout<< "Число Фибоначи "<<i<<" = "<< Fibonecci(i)<<std::endl;
    }

    system ("pause");
        return 0;
    
}
