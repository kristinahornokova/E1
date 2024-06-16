# Kombinatorika
Program v prvom kroku skontroluje či bolo zadané číslo a potom jeho rozsah od 3 do 10. 
Následne alokuje dostatočnú pamäť
Z dôvodu optimalizácie sú prvé tri kompozície (zadané číslo, 1 + zadané číslo - 1 a 1 + zadané číslo -1) zadefinované vopred
Následne sa postupne generujú ďalšie kompozície, ktoré majú pevnú veľkosť rovnajúcu sa zadanému číslu pričom inicializačný stav sa rovná súčtu núl. Generovanie začína od poslednej pozície postupne od 1 do zadanéhoho čisla - 2. Ak presiahne postupnosť maximálnu hodnotu vráti sa na hodnotu 1 a navýši sa hodnota na pozícii - 1.
Ak súčet vygenerovaných čísiel dosiahne hodnotu zadaného čísla tak výslednú kompozíciu vypíše samostatná funkcia a program pokračuje v generovaní novej kompozície. Pomocné nuly sa nevypisujú.

Príklad pre číslo 4: 0 + 0 + 0 + 1;
                     0 + 0 + 0 + 2;
                     0 + 0 + 1 + 1;
                     0 + 0 + 1 + 2;
                     0 + 0 + 2 + 1;
                     0 + 0 + 2 + 2 (Súčet OK - Zobrazí sa 2 + 2);
                     0 + 1 + 1 + 1;
                     0 + 1 + 1 + 2 (Súčet OK - Zobrazí sa 1 + 1 + 2);
                     0 + 1 + 2 + 1 (Súčet OK - Zobrazí sa 1 + 2 + 1);
                     0 + 1 + 2 + 2;

Uvedený postup zabezpečí jedinečnosť vygenerovanej kompozície.
