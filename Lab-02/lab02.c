#include <stdio.h>
#include <stdlib.h>

void z1(){      //zadanie nr 1
    float liczba, suma = 0;  //inicjalizacja zmiennych
    system("cls");  //wyczyszczenie okna konsoli
    printf("==================================\n" //wyswietlenie informacji
           "Program \"Zad-01\"\n"
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n");
    do {       //petla poboru informacji od uzytkownika i zliczania sumy
        printf("Podaj liczbe:");
        scanf("%f", &liczba);
        suma += liczba;
        printf("Suma czesciowa:    %0.3f\n", suma);
    } while (liczba!=0);     //zapetlenie dopoki wprowadzona wartosc != 0
    printf("==================================\n" //wyswietlenie wyniku oraz informacji
           "Suma koncowa: %f\n"                           //o koncu programu
           "==================================\n"
           "Koniec programu.\n"
           "==================================\n",suma);
}

void z2(){
    int ileLiczb,liczba, ileParzystych = 0, ileNieParzystych = 0; //inicjalizacja zmiennych
    system("cls");  //wyczyszczenie okna konsoli
    printf("==================================\n" //wyswietlenie informacji
           "Program \"Zad-02\"\n"
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n"
           "Ile liczb losujemy:");
    scanf("%d",&ileLiczb);  //pobor informacji o ilosci wprowadzalych liczb
    printf("==================================\n");
    for(int i=0; i<ileLiczb; i++){  //petla pobierajaca liczby
        printf("Podaj liczbe calkowita:");
        scanf("%d",&liczba);
        if(liczba%2==0){     //wyswietlenie informacji o liczbie oraz zliczeenie danego typu lczby
            printf("Podana Liczba [%d] jest parzysta.\n",liczba);
            ileParzystych++;
        }
        else{               //wyswietlenie informacji o liczbie oraz zliczeenie danego typu lczby
            printf("Podana Liczba [%d] jest nieparzysta.\n",liczba);
            ileNieParzystych++;
        }

    }
    printf("==================================\n"               //wyswietlenie informacji o ilosci lliczb kazdego typu
           "Wprowadziles %d liczb parzystych i %d liczb nieparzystych.\n"//oraz o koncu programu
           "==================================\n"
           "Koniec programu.\n"
           "==================================\n",ileParzystych,ileNieParzystych);
}

void z3(){
    int wzrost; //inicjalizacja zmiennych
    system("cls");  //wyczyszczenie okna konsoli
    printf("==================================\n" //wyswietlenie informacji o programie
           "Program \"Zad-03\"\n"
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n");
    do{
        printf("Podaj wzrost w cm:");//pobor informacji od uzytkownika
        scanf("%d", &wzrost);
        if(wzrost!=0){                       //wyswietlenie informacji zalezne od wprowadzonych danych
            if (wzrost < 150) {
                printf("Wzrost NISKI.\n");
            }
            if (wzrost >= 150 && 180 >= wzrost) {
                printf("Wzrost SREDNI.\n");
            }
            if (wzrost > 180) {
                printf("Wzrost WYSOKI.\n");
            }
        }
    } while (wzrost!=0);// zapetlenie dopoki uzytkownik nie wprowadzi wartosci 0
    printf("==================================\n" //wyswietlenie informacji o koncu programu
           "Koniec programu.\n"
           "==================================\n");
}

void z4(){
    int wysokosc; // inicjalizacja zmiennych
    system("cls"); //wyczyszcenir okna konsoli
    printf("==================================\n" //wyswietlenie informacji o programie
           "Program \"Zad-04\"\n"
           "Autor: Krzysztof Brzoska\n"
           "AiIP semestr 2\n"
           "==================================\n");
    do{ //petla poboru informacji o wysokosci figury od uzytkownika
        printf("Podaj wysokosc figury:");
        scanf("%d",&wysokosc);
        if(wysokosc%2==0){ //warunek
            printf("Podana liczba musi byc nieparzysta, powtorz.\n");
        }
    } while (wysokosc%2==0); //zapetlenie dopoki warunek nie zostanie spelniony
    for(int i=0;i<wysokosc;i++){ //petla wyswietlajaca coraz wieksza ilosc znakow
        for(int j=0; j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=wysokosc-1;i>0;i--){ //petla wyswietlajaca coraz mniejsza ilosc znakow
        for(int j=i; j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    printf("==================================\n" //wyswietlenie informacji o koncu programu
           "Koniec programu.\n"
           "==================================\n");
}

int main(){ //funkcja glowna
    int decyzja;    //inicjalizacja zmiennej wyboru
    do{     //petla wyboru zadania
        printf("\nWybierz zadanie do uruchomienia:\n"   //wyswietlenie "menu"
               "    [1] - Z1 - Sumy czesciowe,\n"
               "    [2] - Z2 - Liczby parzyste czy nieparzyste,\n"
               "    [3] - Z3 - Wzrost,\n"
               "    [4] - Z4 - Rysowanie figury,\n"
               "    [5] - Wyjscie.\n"
               "[1-5]: ");
        scanf("%d", &decyzja);  //pobor informacji od uzytkownika
        switch (decyzja) {  //wybor odpowiedniego zadania
            case 1:
                z1();
                break;
            case 2:
                z2();
                break;
            case 3:
                z3();
                break;
            case 4:
                z4();
                break;
            case 5:
                break;
        }

    } while (decyzja<5);    //zapetlenie dopoki uzytkownik nie wybierze opcji "wyjscie"
    return 0;
}