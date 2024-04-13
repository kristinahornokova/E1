#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define FAIL 0

void vypis_kompoziciu(int *kompozicia, int pocet) {
    for (int i = 0; i < pocet; i++) {
        if (kompozicia[i] != 0) {printf("%d", kompozicia[i]);
        
        if (i < pocet - 1)
            printf(" + ");
        }
    }
    printf("\n");
   
}

void generuj_kompozicie(int n) {
    if n <= 0 {
        printf("Chyba: Cislo musi byt vacsie ako 0.\n");
        return FAIL;
    }
    int *kompozicia = (int *)malloc(n * sizeof(int)); 
    if (kompozicia == NULL) {
        printf("Chyba: Nedostatok pamate.\n");
        return FAIL;
    }
    
    // Inicializácia kompozície
    for (int i = 0; i < n; i++) {
        kompozicia[i] = 0;
    }
    int sucet = 0;

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
