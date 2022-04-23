#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zadanie1(){
    int rozmiarTablicy = 50;
    int swap;
    int tablica[rozmiarTablicy];
    int posortowanaTablica[rozmiarTablicy];
    srand(time(NULL));
    printf("Oryginalna Tablica:\n");
    for (int i = 0; i < rozmiarTablicy; ++i) {
        tablica[i] = rand() % 501;
        printf("%5d",tablica[i]);
    }
    printf("\n\nPosortowana Tablica:\n");
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = i + 1; j < rozmiarTablicy; ++j) {
            if(tablica[j]<tablica[i]){
                swap = tablica[i];
                tablica[i] = tablica[j];
                tablica[j] = swap;
            }
        }
        printf("%5d",tablica[i]);
    }
    printf("\n");
}

void zadanie2(){

    //inicjacja odpowiednich tablic
    float tablica[10][20], sumaWierszy[10], sredniaWierszy[10], sumaKolumn[20], sredniaKolumn[20];
    //wprowadzenie ziarna dla liczby pseudolosowej
    srand(time(NULL));


    //utworzenie oraz wypisanie pierwotnej tablicy
    printf("Oryginalna Tablica:\n");
    for (int i = 0; i < 10; ++i) {      //petla zmieniajaca numer wiersza
        for (int j = 0; j < 20; ++j) {  //petla zmieniajaca numer kolumny
            tablica[i][j] = 10 + (float)rand()/(float)(RAND_MAX/80.0);   //przypisanie wartosci pseudolosowej
            printf("%10.1f",tablica[i][j]);                     //wypisanie tablicy
        }
        printf("\n");
    }


    printf("\n\nTablica wartosci sum z wierszy:\n");
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 20; ++j) {
            sumaWierszy[i] += tablica[i][j];
        }
        printf("%10.2f",sumaWierszy[i]);
    }
    printf("\nTablica wartosci srednich z wierszy:\n");
    for (int i = 0; i < 10; ++i) {
        sredniaWierszy[i] = sumaWierszy[i]/20;
        printf("%10.2f",sredniaWierszy[i]);
    }


    printf("\n\nTablica wartosci sum z kolumn:\n");
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 10; ++j) {
            sumaKolumn[i] += tablica[j][i];
        }
        printf("%10.2f",sumaKolumn[i]);
    }
    printf("\nTablica wartosci srednich z wierszy:\n");
    for (int i = 0; i < 20; ++i) {
        sredniaKolumn[i] = sumaKolumn[i]/10;
        printf("%10.2f",sredniaKolumn[i]);
    }
}

int main(){
    zadanie2();
    return 0;
}