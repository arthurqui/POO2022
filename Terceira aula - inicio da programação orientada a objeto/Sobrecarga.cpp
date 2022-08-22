//Sobrecarga: usar mesma função com parâmetros diferentes

#include<iostream>
using namespace std;

void f(int i){std::cout<< i;}

void f(float n){cout<< "\nf de float " << n;}

int main()
{
   
    f(1);
    f(1.5f);
  
    return 0;
    
}