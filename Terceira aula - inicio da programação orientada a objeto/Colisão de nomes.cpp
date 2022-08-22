#include<iostream>
using namespace std;


namespace x1
{
typedef int n;
int x; 
void f(){printf("escopo x1\n");}
}

namespace x2
{
typedef float n;
float x; 
void f(){printf("escopo x2\n");}
}


int main()
{
    printf("hello world\n");
    x2::f();
    int x = 124;
    string s = "texto\n";
    
    cout << s << x;
    
    cout << "\n\ndigite um valor numerico: \n";
    cin >> x;
    
    cout << s << x;
    
    return 0;