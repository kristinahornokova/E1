#include <stdio.h>
#include <stdlib.h>

void generuj_kompozicie(int n) {
    if n <= 0 {
        printf("Chyba: Cislo musi byt vacsie ako 0.\n");
        return;
            }
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