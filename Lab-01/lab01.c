//
// Created by 1337k on 01.04.2022.
//

#include <stdio.h>
#include <stdlib.h>

const char helloWorld[] = "Hello world";

void z1a(){
/*    for(int i = 0; i<4; i++){
 *       printf("Hello world 0%d ",i+1);  //why not?
 *   }
 *   printf("\n");
 */
    printf("Hello world 01 ");
    printf("Hello world 02 ");
    printf("Hello world 03 ");
    printf("Hello world 04\n");
 }

void z1b(){
    for(int i = 0; i<4; i++){
        printf("Hello World 0%d\n",i+1);
    }
}

void z1c(){
    for(int i = 0; i<sizeof(helloWorld); i++){
        printf("%c\n",helloWorld[i]);
    }
}


void helloWorldTasks(){
    int hwSwitch;
    _L1:printf("\n<1> Wybierz zadanie do uruchomienia:\n"
           "    [1] - 1a - Jeden obok drugiego,\n"
           "    [2] - 1b - Jeden pod drugim,\n"
           "    [3] - 1c - Litera po literce,\n"
           "    [4] - Powrot.\n"
           "[1-4]: ");
    scanf("%d", &hwSwitch);
    switch(hwSwitch){
        case 1:
            system("cls");
            z1a();
            goto _L1;
        case 2:
            system("cls");
            z1b();
            goto _L1;
        case 3:
            system("cls");
            z1c();
            goto _L1;
        case 4:
            system("cls");
            break;
    }
}

void notka(){
    int a = 5;
    int b = 2;
    float c = 10.0;
    float d = 2.0;
    int suma = a+b;
    int roznica = a-b;
    float iloczyn = c*d;
    float iloraz = c/d;
    printf("==================================\n"
           "Program \"Lab001z2-Notka+Dzialania\"\n"
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n"
           "a=%d, b=%d, suma=%d\n"
           "a=%d, b=%d, roznica=%d\n"
           "c=%f, d=%f, iloczyn=%f\n"
           "c=%f, d=%f, iloraz=%f\n"
           "==================================\n"
           "Koniec Programu.\n"
           "==================================\n\n",
           a,b,suma,
           a,b,roznica,
           c,d,iloczyn,
           c,d,iloraz);
}

void zmienne(){
    int a = 5;
    float b = 3.2;
    double c = 1.32;
    char d[10] = "abcd";
    printf("==================================\n"
           "Program \"Lab001z3-Formatowanie zmiennych\"\n"
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n"
           "a=         %d\n"
           "b=     %.3f\n"
           "c=   %.5f\n"
           "d=      %s\n"
           "==================================\n"
           "Koniec Programu.\n"
           "==================================\n\n",a,b,c,d);
}

void inicjaly(){
    printf("#      ##  ######## \n"
           "#     #    #       #\n"
           "#    #     #       #\n"
           "#  ##      ######## \n"
           "###        #       #\n"
           "#  ##      #       #\n"
           "#    #     #       #\n"
           "#     #    #      # \n"
           "#      ##  #######  \n\n");
}

int main(){
    int decyzja;
    system("cls");
    _L2:printf("Wybierz zadanie do uruchomienia:\n"
           "    [1] - Zadania \"Hello World\",\n"
           "    [2] - Notka autorska + dzialania na zmiennych,\n"
           "    [3] - Wypisywanie zmiennych z odpowiednim formatowaniem,\n"
           "    [4] - Inicjaly,\n"
           "    [5] - Wyjscie.\n"
           "[1-5]: ");
    scanf("%d", &decyzja);
    switch(decyzja){
        case 1:
            system("cls");
            helloWorldTasks();
            goto _L2;
        case 2:
            system("cls");
            notka();
            goto _L2;
        case 3:
            system("cls");
            zmienne();
            goto _L2;
        case 4:
            system("cls");
            inicjaly();
            goto _L2;
        case 5:
            break;
    }
    return 0;
}