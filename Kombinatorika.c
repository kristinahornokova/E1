#include <stdio.h>
#include <stdlib.h>

main(){
    int cislo;
    printf("Zadaj cislo: ");
    if (scanf ("%d", &cislo) !=1){
        printf("Chyba: Zadajte platne cele cislo. \n");
        return 1;
    }
    return 0;
}