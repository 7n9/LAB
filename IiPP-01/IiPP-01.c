//
// Created by 1337k on 01.04.2022.
//

#include <stdio.h>
#include <stdlib.h>

const char hWrld[] = "Hello world"; // stala wykorzystywana przy zadaniach 1a-1c

void z1a(){
    /*
    for(int i = 0; i<4; i++){
       printf("%s 0%d ", hWrld, i+1);  //wykonanie za pomocą pętli
    }
    printf("\n");
    */
    printf("%s 01 ", hWrld);    //wykonanie za pomocą osobnych
    printf("%s 02 ", hWrld);    //funkcji printf()
    printf("%s 03 ", hWrld);
    printf("%s 04\n", hWrld);
 }

void z1b(){
    for(int i = 0; i<4; i++){
        printf("Hello World 0%d\n",i+1);    //wypisanie HW jeden pod drugim
    }
}

void z1c(){
    // for(int i = 0; i<sizeof(hWrld); i++){printf("%c\n", hWrld[i]);}  //wykonanie przy pomocy pętli
    printf("H\ne\nl\nl\no\n\nw\no\nr\nl\nd\n");                   //wykonanie przy pomocy znaku nowego wiersza (line feed)
}


void helloWorldTasks(){
    int hwSwitch;
    _L1:printf("\n<1> Wybierz zadanie do uruchomienia:\n" //wybór zadania "Hello World"
           "    [1] - 1a - Jeden obok drugiego,\n"
           "    [2] - 1b - Jeden pod drugim,\n"
           "    [3] - 1c - Litera po literce,\n"
           "    [4] - Powrot.\n"
           "[1-4]: ");
    scanf("%d", &hwSwitch); //pobranie informacji
    switch(hwSwitch){              //wykonanie zadania
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
    int a = 5, b = 2, suma = a+b, roznica = a-b;          //inicjacja zmiennych
    float c = 10.0, d = 2.0, iloczyn = c*d, iloraz = c/d;
    printf("==================================\n"   //wypisanie notki autorskiej
           "Program \"Lab001z2-Notka+Dzialania\"\n"        //i wykonanie działań
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
    int a = 5;          //inicjacja zmiennych
    float b = 3.2;
    double c = 1.32;
    char d[10] = "abcd";
    printf("==================================\n"   //wypisanie notki programu
           "Program \"Lab001z3-Formatowanie zmiennych\"\n" //oraz zmiennych na odpowiednich miejscach
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n"
           "a=         %d\n"
           "b=     %.3f\n"
           "c=   %.5f\n"        //miejsce zapisu jest kluczowe i odwzorowuje miejsce wyświetlania
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
    system("cls");        //czyszczenie okna konsoli
    _L2:printf("Wybierz zadanie do uruchomienia:\n"     //"menu"
           "    [1] - Zadania \"Hello World\",\n"
           "    [2] - Notka autorska + dzialania na zmiennych,\n"
           "    [3] - Wypisywanie zmiennych z odpowiednim formatowaniem,\n"
           "    [4] - Inicjaly,\n"
           "    [5] - Wyjscie.\n"
           "[1-5]: ");
    scanf("%d", &decyzja);  //pobierz wybor od uzytkownika
    switch(decyzja){               //wybierz odpowiednia funkcje
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
    return 0;                       //koniec programu
}