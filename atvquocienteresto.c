#include <stdio.h>
int main(){
int x, y, quociente, resto;

printf("Informe 2 numeros inteiros para calcular o quociente e o resto entre eles:\n");
scanf("%i%i", &x, &y);
quociente = x / y;
resto = x % y;
printf("O quociente e o resto entre os numero %i e %i sao: %i e %i", x, y, quociente, resto);

return 0;
}
