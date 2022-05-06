#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <sys/stat.h>


void zadanie1(){
    char c;
    FILE *zapis, *odczyt;

    system("cls");


    zapis = fopen("Pliki_Programu\\Zadanie1.txt", "w");
    printf("======================================\n"
           "Wprowadzanie:\n"
           "======================================\n");
    while((c = getchar()) != '0'){
        if(c == '0'){
            break;
        }
        fputc(toupper(c), zapis);
    }
    fclose(zapis);
    odczyt = fopen("Pliki_Programu\\Zadanie1.txt", "r");
    if(odczyt == NULL){
        exit(-10);
    }
    printf("======================================\n"
           "Odczyt z pliku:\n"
           "======================================\n");
    while (!feof(odczyt)) {
        c = fgetc(odczyt);
        printf("%c", c);
    }
    fclose(odczyt);
    printf("\n======================================\n"
           "Zakonczono odczyt z pliku.\n"
           "======================================\n");
}

void zadanie2(){
    char c;
    int rozmiarTablicy = 20, tablicaZapisu[rozmiarTablicy][rozmiarTablicy], tablicaOdczytu[rozmiarTablicy][rozmiarTablicy]; //zmienne
    FILE *txt, *bin;

    //wprowadzenie ziarna dla liczby pseudolosowej
    srand(time(NULL));

    txt = fopen("Pliki_Programu\\Zadanie2.txt", "w");
    //utworzenie tablicy
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            tablicaZapisu[i][j] = rand() % 101;
            fprintf(txt, "%5d", tablicaZapisu[i][j]);
        }
        fprintf(txt, "%c", '\n');
    }
    fclose(txt);

    bin = fopen("Pliki_Programu\\Zadanie2.bin", "wb");
    fwrite(tablicaZapisu, sizeof(tablicaZapisu), 1, bin);
    fclose(bin);


    printf("=======================================\n"
           "Odczyt z pliku tekstowego:\n"
           "=======================================\n");
    txt = fopen("Pliki_Programu\\Zadanie2.txt", "r");
    if(txt==NULL){
        exit(-10);
    }
    while (!feof(txt)) {
        c = fgetc(txt);
        printf("%c", c);
    }
    fclose(txt);


    printf("=======================================\n"
           "Odczyt z pliku binarnego:\n"
           "=======================================\n");
    bin = fopen("Pliki_Programu\\Zadanie2.bin", "rb");
    if(bin==NULL){
        exit(-10);
    }
    fread(&tablicaOdczytu, sizeof(tablicaOdczytu), 1 ,bin);
    fclose(bin);

    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            printf("%5d", tablicaOdczytu[i][j]);
        }
        printf("\n");
    }

}

int main() {
    int decyzja = 0;

    /* Sprawdzenie czy folder na pliki istnieje,
     * w przypadku jego braku tworzy folder w ścieżce programu.
     */
    struct stat st;
    if(stat("Pliki_Programu", &st) != 0 ) {
        system("md Pliki_Programu");
    }

    /*Pętla do..while wypisuje w okno konsoli możliwości wyboru zadania,
     *pobiera od użytkownika decyzję oraz uruchamia odpowiednie zadanie lub
     *kończy działanie programu.
     */
    do{
        printf("\nWybierz zadanie do uruchomienia:\n"   //wyswietlenie "menu"
               "    [1] - Z1 - Zapis i odczyt do/z pliku,\n"
               "    [2] - Z2 - idkyet,\n"
               "    [3] - Wyjscie,\n"
               "[1-3]: ");
        scanf("%d", &decyzja);  //pobór informacji
        switch (decyzja) {  //uruchomienie odpowiedniego zadania lub zakońdzenie działania programu
            case 1:
                zadanie1();
                break;
            case 2:
                zadanie2();
                break;
            case 3:
                break;
        }
    }while(decyzja != 3);   //warunek wyjścia
    return 0;
}