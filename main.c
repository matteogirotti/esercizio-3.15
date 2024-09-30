#include <stdio.h>

int main(void) {
    char categoria;
    float costo;
    printf("categoria (p=pensionato, s=studente, d=disoccupati):");
    scanf("%c", &categoria);
    printf("il prezzo del biglietto e': ");
    scanf("%f", &costo);
    if (categoria == 'p')
        costo-=costo*0.1;
    else if (categoria == 's')
        costo-=costo*0.15;
    else if (categoria == 'd')
        costo-=costo*0.25;
    printf("il prezzo del biglietto scontato per la rispettiva categoria e': %.2f\n", costo);
}