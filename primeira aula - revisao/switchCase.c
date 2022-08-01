

#include <stdio.h>

int main()
{
    int a ;
     
    printf ("Digite um valor de 1 a 5: ");
  scanf("%d", &a);
    
    switch ( a )
  {
    case 1 :
    printf ("Um\n");
    break;
    
    case 2 :
    printf ("Dois\n");
    break;
    
    case 3 :
    printf ("Três\n");
    break;
    
    case 4 :
    printf ("Quatro\n");
    break;
    
    case 5 :
    printf ("Cinco\n");
    break;
   
    default :
    printf ("Valor invalido!\n");
  }
  
  return 0;
}

