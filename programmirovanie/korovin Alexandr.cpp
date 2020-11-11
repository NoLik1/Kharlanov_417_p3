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
long power(long a, long b) {
  if(b == 0){
    return 1;
  }
  if(b % 2 == 0){
    return power(a * a, b / 2);
  } else{
  return  a* power(a, b - 1);
  }
    
}

               
               
            
int main()
{
setlocale(LC_ALL, "Russian");
     int numbers;
    std::cin>>numbers;
    if (numbers>0){
        for (int i=0;i<numbers; i++){
        std::cout<< "Число Фибоначи "<<i<<" = "<< Fibonecci(i)<<std::endl;
    }
    }else{
        std::cout<<"Введите числа"<<std::endl;    }
    long a,b;
    std::cin>>a;
    std::cin>>b;
    if ((a>0)&&(b>0)){
    std::cout << "Число "<<a<<" возведённое в степень "<<b<<" = " << power(a,b)<<std::endl;
    }else{
        std::cout<<"Введите числа"<<std::endl;
    }
    system("pause");
        return 0;
    
}
