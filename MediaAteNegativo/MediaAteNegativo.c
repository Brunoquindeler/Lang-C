#include <stdio.h>

int main(void) {

	int var1 = 0, cont = 0, aux = 0, soma = 0;
	float media = 0;

	while (aux != 1) {
		printf("Numero: ");
		scanf("%i", &var1);

		if (var1 >= 0) {
			cont++;
			soma += var1;

			media = soma / cont;
		}
		else {
			aux = 1;
		};
	};

	printf("Contador: %d, Soma: %d, Media: %f", cont, soma, media);

  return 0;
}