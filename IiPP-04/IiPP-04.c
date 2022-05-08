#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <sys/stat.h>


void zadanie1(){
    char c;                 //
    FILE *zapis, *odczyt;   //zmienne

    system("cls");  //wyczyszczenie okna konsoli


    /* Utworzenie pliku tekstowego w folderze roboczym w trybie W(rite),
     * Pętla while(){} pobiera znaki od użytkownika aż do pierwszego natrafionego znaku '0'
     * Równoległy zapis kolejnych znaków za pomocą fputc() /file put char/ do pliku Zadanie1.txt
     * wraz z natychmiastową zamianą znaku na wielką za pomocą toupper() <ctype.h> (w przypadku liter / cyfry bez zmian),
     * Zamknięcie pliku roboczego.
     * */
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


    /* Odczyt z pliku tekstowego otwartym w trybie R(ead),
     * Sprawdzenie czy plik został otwarty poprawnie,
     * Wyświetlenie komunikatu o odczycie z pliku,
     * Wczytanie zapisanej tabicy na ekran konsoli znak po znaku
     * aż do momentu natrafienia na znak kontrolny EOF(end of file),
     * Zamknięcie pliku roboczego,
     * Wyświetlenie komunikatu o zakończeniu odczytu.
     * */
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
    char c;                                                                                                                 //
    int rozmiarTablicy = 20, tablicaZapisu[rozmiarTablicy][rozmiarTablicy], tablicaOdczytu[rozmiarTablicy][rozmiarTablicy]; //zmienne
    FILE *txt, *bin;                                                                                                        //

    system("cls");  //wyczyszcznenie okna konsoli

    //wprowadzenie ziarna dla liczby pseudolosowej
    srand(time(NULL));


    /* Utworzenie pliku tekstowego w folderze roboczym w trybie W(rite),
     * Wygenerowanie losowych liczb w przedziale 1-100 w tablicy 20x20,
     * Równoległy zapis kolejnych wartości tablicy do pliku Zadanie2.txt.
     * */
    txt = fopen("Pliki_Programu\\Zadanie2.txt", "w");
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            tablicaZapisu[i][j] = rand() % 101;
            fprintf(txt, "%5d", tablicaZapisu[i][j]);  //zapis wartości
        }
        fprintf(txt, "%c", '\n');   //nowa linia
    }
    fclose(txt);   //zamknięcie pliku roboczego


    /* Utworzenie pliku binarnego w folderze roboczym w trybie W(rite)B(inary),
     * Bezpośredni zapis całej tablicy do pliku,
     * Zamknięcie pliku roboczego.
     * */
    bin = fopen("Pliki_Programu\\Zadanie2.bin", "wb");
    fwrite(tablicaZapisu, sizeof(tablicaZapisu), 1, bin);
    fclose(bin);


    /* Wyświetlenie komunikatu,
     * Odczyt z pliku tekstowego otwartym w trybie R(ead),
     * Sprawdzenie czy plik został otwarty poprawnie,
     * Wczytanie zapisanej tabicy na ekran konsoli znak po znaku
     * aż do momentu natrafienia na znak kontrolny EOF(end of file),
     * Zamknięcie pliku roboczego.
     * */
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


    /* Wyświetlenie komunikatu,
     * Odczyt z pliku binarnego otwartym w trybie R(ead)B(inary),
     * Sprawdzenie czy plik został otwarty poprawnie,
     * Wczytanie zapisanej tabicy do zmiennej tablicaOdczytu[][],
     * Zamknięcie pliku roboczego.
     * */
    printf("=======================================\n"
           "Odczyt z pliku binarnego:\n"
           "=======================================\n");
    bin = fopen("Pliki_Programu\\Zadanie2.bin", "rb");
    if(bin==NULL){
        exit(-10);
    }
    fread(&tablicaOdczytu, sizeof(tablicaOdczytu), 1 ,bin);
    fclose(bin);


    /* Wyświetlenie zczytanej tablicy z pliku binarnego w odpowiednim formacie.
     * */
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            printf("%5d", tablicaOdczytu[i][j]);
        }
        printf("\n");
    }

}

int main() {
    int decyzja = 0; //zmienna do wyboru programu

    /* Sprawdzenie czy folder na pliki istnieje,
     * w przypadku jego braku tworzy folder w ścieżce programu.
     *
     * 'sys/stat.h' int stat(char path, struct stat buf) przydaje się do pobierania informacji o plikach lub folderach,
     * Zwraca 0 jeśli warunek jest spełniony, w przeciwnym przypadku zwraca -1.
     */
    struct stat buffer;
    if(stat("Pliki_Programu", &buffer) != 0 ) {
        system("md Pliki_Programu");
    }

    /*Pętla do..while wypisuje w okno konsoli możliwości wyboru zadania,
     *pobiera od użytkownika decyzję oraz uruchamia odpowiednie zadanie lub
     *kończy działanie programu.
     */
    do{
        printf("\nWybierz zadanie do uruchomienia:\n"   //wyswietlenie "menu"
               "    [1] - Z1 - Zapis i odczyt do/z pliku,\n"
               "    [2] - Z2 - Tablica w pliku tekstowym i binarnym,\n"
               "    [3] - Wyjscie.\n"
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