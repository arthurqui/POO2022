#include<iostream>
using namespace std;

void menu() 
{ 
    cout<<"Que período do dia está:\n";
    cout<<"1. Manhã\n"; cout<<"2. Tarde\n";
    cout<<"3. Noite\n"; 
}

int calculo(int num1)
{
  switch (num1) {
  case 1:
    cout << "Bom dia!";
    break;
  case 2:
    cout << "Boa tarde!";
    break;
  case 3:
    cout << "Boa noite!";
    break;
  default:
    cout << "digito inválido";
  }

 cout << endl;

 return 0;
}

int main()
{
    int num;
    menu();
    cin >> num;
    calculo(num);
    return 0;
}