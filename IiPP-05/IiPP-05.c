#include <stdio.h>
#include <math.h>

double obliczPolePodstawy(double promienPodstawy);
double obliczPolePobocznicy(double promienPodstawy, double wysokosc);
double obliczPoleCalkowite(double promienPodstawy, double wysokosc);
double obliczObjetosc(double promienPodstawy, double wysokosc);

int podzielnaPrzezDwa(int liczba);
int podzielnaPrzezTrzy(int liczba);
int podzielnaPrzezPiec(int liczba);

int sumaRekurencyjna(int liczba);

void zadanie1(){
    double promienPodstawy, wysokosc;
    do{
        printf("Podaj promien podstawy: ");
        scanf("%lf", &promienPodstawy);
        printf("Podaj wysokosc: ");
        scanf("%lf", &wysokosc);
        if(promienPodstawy == 0.0 && wysokosc == 0.0){
            break;
        }
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
    } while (promienPodstawy != 0 || wysokosc != 0);
}

/*(true  || true ) == true
(true  || false) == true
(false || true ) == true
(false || false) == false*/

void zadanie2(){
    int liczba = 1;
    while (liczba != 0){
        puts("Podaj liczbe calkowita: ");
        scanf("%d", &liczba);
        if(liczba == 0){
            break;
        }
        puts("---------------------------------------");
        puts("Podana liczba calkowita jest:");
        if(podzielnaPrzezDwa(liczba)){
            printf("\t-podzielna przez 2; %d / 2 = %d\n", liczba, liczba/2);
        }
        if(podzielnaPrzezTrzy(liczba)){
            printf("\t-podzielna przez 3; %d / 3 = %d\n", liczba, liczba/3);
        }
        if(podzielnaPrzezPiec(liczba)){
            printf("\t-podzielna przez 5; %d / 5 = %d\n", liczba, liczba/5);
        }
        puts("---------------------------------------");
    }
}

int globalnyLicznikDlaSumyRekurencyjnej; //?????????????????

void zadanie3(){
    int liczba;
    globalnyLicznikDlaSumyRekurencyjnej = 0;
    printf("Wprowadz liczbe naturalna: ");
    scanf("%d", &liczba);
    puts("---------------------------------------");
    sumaRekurencyjna(liczba);
    puts("---------------------------------------");
}

int main() {
   int decyzja = 0;

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

double obliczPolePodstawy(double promienPodstawy){
    return M_PI * promienPodstawy * promienPodstawy;
}

double obliczPolePobocznicy(double promienPodstawy, double wysokosc){
    return 2 * M_PI * promienPodstawy * wysokosc;
}
double obliczPoleCalkowite(double promienPodstawy, double wysokosc){
    return (2 * obliczPolePodstawy(promienPodstawy)) + obliczPolePobocznicy(promienPodstawy, wysokosc);
}

double obliczObjetosc(double promienPodstawy, double wysokosc){
    return M_PI * promienPodstawy * promienPodstawy * wysokosc;
}

int podzielnaPrzezDwa(int liczba){
    if(liczba % 2 == 0){
        return 1;
    } else{
        return 0;
    }
}

int podzielnaPrzezTrzy(int liczba){
    if(liczba % 3 == 0){
        return 1;
    } else{
        return 0;
    }
}
int podzielnaPrzezPiec(int liczba){
    if(liczba % 5 == 0){
        return 1;
    } else{
        return 0;
    }
}

int sumaRekurencyjna(int liczba){
    int s;
    if(liczba < 0 || liczba == 0){
        return 0;
    } else {
        s = liczba + sumaRekurencyjna(liczba - 1);
        printf("Suma od 1 do %d = %d\n", ++globalnyLicznikDlaSumyRekurencyjnej, s);
        return s;
    }
}
