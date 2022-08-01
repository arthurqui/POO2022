

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int i;
    
    int menu;


do{
    system("clear");
    printf ("1 - Taboada \n2 - Sair\n");
    scanf("%d", &d);
    system("clear");
    
    switch (d)
  {
    case 1 :
    printf ("Taboada:\n");
    printf ("Digite o numero para ver a taboada:");
    scanf("%d", &a);
  
    printf ("Multiplacação até quanto?");
    scanf("%d", &b);
  
    for(i = 1; i <= b; i++)
     {
    c = a * i;
     printf("%d x %d = %d\n", a, i, c);
     }
    
    printf ("\nDigite 1 para ir para menu, 2 para sair\n");
    scanf(" %d", &menu);
    if (menu != 1)
    {return 0;}
    break;
    
    case 2 :
    printf ("Sair\n");
    return 0;
    break;
    
    default :
    printf ("Opção invalida\n");
    break;
  }}
  while(0 < d < 3);
  
  return 0;
}
