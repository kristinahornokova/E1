#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define FAIL 0

void vypis_kompoziciu(int *kompozicia, int pocet) {
    for (int i = 0; i < pocet; i++) {if (kompozicia[i] != 0) {
        printf("%d", kompozicia[i]);
        if (i < pocet - 1)
            printf(" + ");
        }
    }
    printf("\n");
}

void generuj_kompozicie(int n) {
    if (n > 2 && n < 11) {
        printf("Zacinam pocitat kompozicie.\n");
        printf("%d\n",n);
        printf("%d + 1\n",n - 1);
        printf("1 + %d\n",n - 1);
    }
    else {
        printf("Chyba: Cislo musi byt vacsie ako 2.\n");
        return;
        }
    int *kompozicia = (int *)malloc(n * sizeof(int));
    if (kompozicia == NULL) {
        printf("Chyba: Nedostatok pamate.\n");
        return;
    }
    
    // Inicializacia kompozicie
    for (int i = 0; i < n; i++) {
        kompozicia[i] = 0;
    }
    int sucet = 0;
    while (1) {
        int index = n - 1;
        int kontrola = 1;
        sucet = 0;
        while (index >= 0 && kontrola) {
            kompozicia[index]++;
            kontrola = 0;
            if (kompozicia[index] > n - 2) {
                kompozicia[index] = 1;
                kontrola = 1;
                index = index - 1;
            }
        }
        for (int i = 0; i < n; i++) {
            sucet = sucet + kompozicia[i];
        }
        if (sucet == n) {
            vypis_kompoziciu(kompozicia, n);
        }
        if (index == 0) break;
    }
    free(kompozicia); // Uvolnenie pamate
    return;
}

int main(void){
    int cislo;
    printf("Zadaj cislo od 3 do 10: ");
    if (scanf ("%d", &cislo) !=1){
        printf("Chyba: Zadajte platne cele cislo. \n");
        return FAIL;
    }
    generuj_kompozicie(cislo);
    return FAIL;
}
