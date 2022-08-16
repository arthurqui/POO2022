
#include <stdio.h>

#define tipo_muito_complexo double

tipo_muito_complexo* f(tipo_muito_complexo* param)
{
	printf("%f\n", *param);
	*param = 5646,4565;
	return param;
}

int main()
{
    tipo_muito_complexo x = 93456,345;
	tipo_muito_complexo* resultado;
	resultado = f(&x);
	printf("%f", *resultado);
	
	return 0;
}