#include<iostream>
using namespace std;

namespace x1
{
typedef int n;
int x; 
void f(){}
}

namespace x2
{
typedef float n;
float x; 
void f(){}
}


int main()
{
    printf("hello world");
    x1::f();
    return 0;
}