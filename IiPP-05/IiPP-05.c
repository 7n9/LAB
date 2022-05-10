#include <stdio.h>
#include <math.h>



double obliczPolePodstawy(double promienPodstawy);                      //Deklaracje funkcji dla zadania 1
double obliczPolePobocznicy(double promienPodstawy, double wysokosc);   //
double obliczPoleCalkowite(double promienPodstawy, double wysokosc);    //
double obliczObjetosc(double promienPodstawy, double wysokosc);         //

int podzielnaPrzezDwa(int liczba);                                      //Deklaracje funkcji do zadania 2
int podzielnaPrzezTrzy(int liczba);                                     //
int podzielnaPrzezPiec(int liczba);                                     //

int sumaRekurencyjna(int liczba);                                       //Deklaracja funkcji do zadania 3

    /* Zadanie1
     *
     * Zadanie 1 pobiera od uzytkownika promien podstawy walca
     * oraz jego wysokosc, jesli wartosci nie sa zerowe nastepuje
     * obliczenie objetosci, pola pobocznicy, pola podstawy oraz calkowitego
     * pola walca wraz z wypisaniem wartości na ekran konsoli.
     * */
void zadanie1(){
    double promienPodstawy, wysokosc;
    do{
        //pobor informacji od uzytkownika
        printf("Podaj promien podstawy: ");
        scanf("%lf", &promienPodstawy);
        printf("Podaj wysokosc: ");
        scanf("%lf", &wysokosc);

        //wyjscie z programu jesli wartosci sa zerowe
        if(promienPodstawy == 0.0 && wysokosc == 0.0){
            break;
        }

        //wypisanie wartosci na ekran
        puts("---------------------------------------");
        printf("Objetosc: %lf\n"
               "Pole pobocznicy: %lf\n"
               "Pole podstawy: %lf\n"
               "Calkowite pole powierzchni: %lf\n\n",
               obliczObjetosc(promienPodstawy, wysokosc),
               obliczPolePobocznicy(promienPodstawy, wysokosc),
               obliczPolePodstawy(promienPodstawy),
               obliczPoleCalkowite(promienPodstawy, wysokosc));
        puts("---------------------------------------");

        //warunek zakonczenia petli
    } while (promienPodstawy != 0 || wysokosc != 0);
}

    /* Zadanie 2
     *
     * W zadaniu 2 uzytkownik wprowadza liczbe calkowita.
     * Program sprawdza podzielnosc sprowadzonej liczby przez 2, 3 i 5 a nastepnie
     * zwraca odpowiednie komunikaty na ekran kosoli.
     * */
void zadanie2(){
    int liczba = 1;//zmienna

    while (liczba != 0){//warunek wyjscia
        puts("Podaj liczbe calkowita: ");
        scanf("%d", &liczba);//pobor informacji
        if(liczba == 0){//warunek wyjscia
            break;
        }

        //wypisanie odpowiednich komunikatow na ekran.
        puts("---------------------------------------");
        puts("Podana liczba calkowita jest:");
        if(podzielnaPrzezDwa(liczba) || podzielnaPrzezTrzy(liczba) || podzielnaPrzezPiec(liczba)) {
            if (podzielnaPrzezDwa(liczba)) {
                printf("\t-podzielna przez 2; %d / 2 = %d\n", liczba, liczba / 2);
            }
            if (podzielnaPrzezTrzy(liczba)) {
                printf("\t-podzielna przez 3; %d / 3 = %d\n", liczba, liczba / 3);
            }
            if (podzielnaPrzezPiec(liczba)) {
                printf("\t-podzielna przez 5; %d / 5 = %d\n", liczba, liczba / 5);
            }
        } else{
            printf("\t-niepodzielna przez 2, 3 lub 5\n");
        }
        puts("---------------------------------------");
    }
}


    /* Globalny licznik dla sumy zliczajacy ilosc stopni rekurencji (zageszcenie),
     * przydatny do zliczania sumy 'od 1 do n' liczb naturalnych gdzie n jest
     * liczba dodawana i licznikiem jednoczesnie.
     * */
int globalnyLicznikDlaSumyRekurencyjnej;


    /* Zadanie 3
     *
     * Zadanie 3 pobiera liczbe naturalna od uzytkownika
     * a nastepnie zlicza sume kolejnych liczb naturalnych
     * przy pomocy funkcji rekurencyjnej i wyswietla odpowiedni komunikat.
     * */
void zadanie3(){
    int liczba; //zmienna
    globalnyLicznikDlaSumyRekurencyjnej = 0;
    printf("Wprowadz liczbe naturalna: ");
    scanf("%d", &liczba); //pobor informacji
    puts("---------------------------------------");
    sumaRekurencyjna(liczba); //funkcja rekurencyjna
    puts("---------------------------------------");
}

int main() {
   int decyzja = 0; //zmienna do wyboru programu

    /*Pętla do..while wypisuje w okno konsoli możliwości wyboru zadania,
     *pobiera od użytkownika decyzję oraz uruchamia odpowiednie zadanie lub
     *kończy działanie programu.
     */
    do{
        printf("\nWybierz zadanie do uruchomienia:\n"   //wyswietlenie "menu"
               "    [1] - Z1 - walec,\n"
               "    [2] - Z2 - idk,\n"
               "    [3] - Z3 - Suma Rekurencyjna,\n"
               "    [4] - Wyjscie.\n"
               "[1-4]: ");
        scanf("%d", &decyzja);  //pobór informacji
        switch (decyzja) {  //uruchomienie odpowiedniego zadania lub zakońdzenie działania programu
            case 1:
                zadanie1();
                break;
            case 2:
                zadanie2();
                break;
            case 3:
                zadanie3();
                break;
            case 4:
                break;
        }
    }while(decyzja != 4);   //warunek wyjścia
    return 0;
}

    /* Funkcja obliczajaca i zwracajaca pole podstawy walca (pole kola = PI*r^2)
     * Uzywa wartosci M_PI zdeklarownej w <math.h>
     * */
double obliczPolePodstawy(double promienPodstawy){
    return M_PI * promienPodstawy * promienPodstawy;
}

   /* Funkcja obliczajaca i zwracajaca pole pobocznicy walca
    * (pole powierzchni bocznej = 2*PI*r*H)
    * Uzywa wartosci M_PI zdeklarownej w <math.h>
    * */
double obliczPolePobocznicy(double promienPodstawy, double wysokosc){
    return 2 * M_PI * promienPodstawy * wysokosc;
}

    /* Funkcja obliczajaca i zwracajaca pole calkowite walca
     * (2*polePodstawy + polePobocnicy)
     * */
double obliczPoleCalkowite(double promienPodstawy, double wysokosc){
    return (2 * obliczPolePodstawy(promienPodstawy)) + obliczPolePobocznicy(promienPodstawy, wysokosc);
}

    /* Funkcja obliczajaca i zwracajaca objetosc walce
     * (pole podstawy * wysokosc)
     * Uzywa wartosci M_PI zdeklarownej w <math.h>
     * */
double obliczObjetosc(double promienPodstawy, double wysokosc){
    return obliczPolePodstawy(promienPodstawy) * wysokosc;
}


    /*Funkcja sprawdzajaca podzielnosc liczby przez 2
     * Zwraca 1 jesli liczba jest podzielna, 0 jesli nie.
     * */
int podzielnaPrzezDwa(int liczba){
    if(liczba % 2 == 0){
        return 1;
    } else{
        return 0;
    }
}

    /*Funkcja sprawdzajaca podzielnosc liczby przez 3
     * Zwraca 1 jesli liczba jest podzielna, 0 jesli nie.
     * */
int podzielnaPrzezTrzy(int liczba){
    if(liczba % 3 == 0){
        return 1;
    } else{
        return 0;
    }
}

    /*Funkcja sprawdzajaca podzielnosc liczby przez 5
     * Zwraca 1 jesli liczba jest podzielna, 0 jesli nie.
     * */
int podzielnaPrzezPiec(int liczba){
    if(liczba % 5 == 0){
        return 1;
    } else{
        return 0;
    }
}

    /* Funkcja rekurencyjna zwracajaca sume liczb od 1 do n.
     * Funkcja podczas dzialania wyswietla takze informacje o sumie w kazdym kroku.
     * */
int sumaRekurencyjna(int liczba){
    int s;
    if(liczba < 0 || liczba == 0){ //warunek
        return 0;
    } else {
        s = liczba + sumaRekurencyjna(liczba - 1); //obliczenie sumy i wywolanie kolejnej instancji funkcji
        printf("Suma od 1 do %d = %d\n", ++globalnyLicznikDlaSumyRekurencyjnej, s);//wyswietlanie informacji o kroku
        return s;
    }
}
