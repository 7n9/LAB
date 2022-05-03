#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zadanie1(){

    //inicjalizacja zmiennych oraz tablicy o rozmiarze 50
    int rozmiarTablicy = 50, swap, tablica[rozmiarTablicy];

    //wprowadzenie ziarna dla liczby pseudolosowej
    srand(time(NULL));

    //przypisanie wartości do pól tablicy oraz wypisanie jej w okno konsoli
    printf("Oryginalna Tablica:\n");
    for (int i = 0; i < rozmiarTablicy; ++i) {
        tablica[i] = rand() % 501;
        //wstawienie pseudolosowej liczby z przedziału, warość 501 bierze się z własności
        //funkcji rand() która nie włączy ostatniej liczby do puli możliwych liczb
        // min + rand() % (max-min) => [min, max) - przedział otwarty
        printf("%5d",tablica[i]);
    }

    /* Sortowanie tablicy oraz wypisanie posortowanej tablicy w okno konsoli
     *
     * Sortowanie w tym przypadku polega na "przeczesywaniu" tablicy;
     * Dla każdego pola tablicy sprawdzana jest każda wartość w tablicy,
     * jeżeli jakakolwiek wartość jest mniejsza od wartości danego pola następuje
     * zamiana z użyciem pośredniej wartości "swap".
     */
    printf("\n\nPosortowana Tablica:\n");
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = i + 1; j < rozmiarTablicy; ++j) {
            if(tablica[j]<tablica[i]){
                swap = tablica[i];          //użycie pośredniej wartości "swap" do której
                tablica[i] = tablica[j];    //zostaje przypisana wartość zamieniana
                tablica[j] = swap;
            }
        }
        printf("%5d",tablica[i]);   //wydruk posortowanej tablicy w okno konsoli
    }
    printf("\n");
}

void zadanie2(){

    //inicjacja odpowiednich tablic
    float tablica[10][20], sumaWierszy[10] = {0}, sredniaWierszy[10] = {0}, sumaKolumn[20] = {0}, sredniaKolumn[20] = {0};

    //wprowadzenie ziarna dla liczby pseudolosowej
    srand(time(NULL));


    //utworzenie oraz wypisanie pierwotnej tablicy
    printf("\nOryginalna Tablica:\n");
    for (int i = 0; i < 10; ++i) {      //petla zmieniajaca numer wiersza
        for (int j = 0; j < 20; ++j) {  //petla zmieniajaca numer kolumny
            tablica[i][j] = 10 + (float)rand()/(float)(RAND_MAX/80.0);   //przypisanie wartosci pseudolosowej typu float w granicach min=10 max=90
            printf("%10.1f",tablica[i][j]);                     //wypisanie tablicy
        }
        printf("\n");
    }

    /*Poniższa pętla sumuje wartości pól z każdego wiersza, zapisuje je do osobnej tablicy
     *a następnie wypisuje tablicę w okno konsoli.
     */
    printf("\n\nTablica wartosci sum z wierszy:\n");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 20; ++j) {
            sumaWierszy[i] += tablica[i][j];
        }
        printf("%10.2f",sumaWierszy[i]);
    }

    /*Poniższa pętla sumuje wartości pól z każdego wiersza podzielone przez ilość kolumn(20)
     *w celu uzyskania wartości średniej, zapisuje je do osobnej tablicy,
     *a następnie wypisuje tablicę w okno konsoli.
     */
    printf("\n\nTablica wartosci srednich z wierszy:\n");
    for (int i = 0; i < 10; ++i) {
        sredniaWierszy[i] = sumaWierszy[i]/20;
        printf("%10.2f",sredniaWierszy[i]);
    }

    /*Poniższa pętla sumuje wartości pól z każdej kolumny, zapisuje je do osobnej tablicy
     *a następnie wypisuje tablicę w okno konsoli.
     */
    printf("\n\nTablica wartosci sum z kolumn:\n");
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 10; ++j) {
            sumaKolumn[i] += tablica[j][i];
        }
        printf("%10.2f",sumaKolumn[i]);
    }

    /*Poniższa pętla sumuje wartości pól z każdej kolumny podzielone przez ilość wierszy(10)
     *w celu uzyskania wartości średniej, zapisuje je do osobnej tablicy,
     *a następnie wypisuje tablicę w okno konsoli.
     */
    printf("\n\nTablica wartosci srednich z wierszy:\n");
    for (int i = 0; i < 20; ++i) {
        sredniaKolumn[i] = sumaKolumn[i]/10;
        printf("%10.2f",sredniaKolumn[i]);
    }
    printf("\n\n");
}

int main(){
    int decyzja = 0;
    /*Pętla do..while wypisuje w okno konsoli możliwości wyboru zadania,
     *pobiera od użytkownika decyzję oraz uruchamia odpowiednie zadanie lub
     *kończy działanie programu.
     */
    do{
        printf("\nWybierz zadanie do uruchomienia:\n"   //wyswietlenie "menu"
               "    [1] - Z1 - Sortowanie Tablicy,\n"
               "    [2] - Z2 - Suma i srednia wierszy i kolumn,\n"
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