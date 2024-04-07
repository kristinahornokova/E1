#include <stdio.h>
#include <stdlib.h>

void vypis_kompoziciu(int *kompozicia, int pocet) {
    for (int i = 0; i < pocet; i++) {
        printf("%d", kompozicia[i]);
        if (i < pocet - 1)
            printf(" + ");
    }
    printf("\n");
}

void generuj_kompozicie(int n) {
    if n <= 0 {
        printf("Chyba: Cislo musi byt vacsie ako 0.\n");
        return;
    }
    int *kompozicia = (int *)malloc(n * sizeof(int)); 
    if (kompozicia == NULL) {
        printf("Chyba: Nedostatok pamate.\n");
        return;
    }
    
    // Inicializácia kompozície
    for (int i = 0; i < n; i++) {
        kompozicia[i] = 1;
        
    free(kompozicia); // Uvolnenie pamate
}



main(){
    int cislo;
    printf("Zadaj cislo: ");
    if (scanf ("%d", &cislo) !=1){
        printf("Chyba: Zadajte platne cele cislo. \n");
        return 1;
    }
    return 0;
}
