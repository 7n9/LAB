#include <stdio.h>
#include <stdlib.h>


 void z1(){
    float liczba,suma;
    do {
        printf("Podaj liczbe:");
        scanf("%f", &liczba);
        suma += liczba;
        printf("Suma czesciowa:    %0.3f\n", suma);
    } while (liczba!=0);
     printf("Suma koncowa: %f",suma);
}

void z2(){
    int ileLiczb,liczba,ileParzystych,ileNieParzystych;
    printf("Ile liczb losujemy:");
    scanf("%d",&ileLiczb);
    for(int i=0; i<ileLiczb; i++){
        printf("Podaj liczbe calkowita:");
        scanf("%d",&liczba);
        if(liczba%2==0){
            printf("Podana Liczba [%d] jest parzysta.\n",liczba);
            ileParzystych++;
        }
        else{
            printf("Podana Liczba [%d] jest nieparzysta.\n",liczba);
            ileNieParzystych++;
        }

    }
    printf("Wprowadziles %d liczb parzystych i %d liczb nieparzystych.",ileParzystych,ileNieParzystych);
}

void z3(){
    int wzrost;
    do{
        printf("Podaj wzrost w cm:");
        scanf("%d", &wzrost);
        if(wzrost!=0){
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
    } while (wzrost!=0);
}

void z4(){
    int wysokosc;
    printf("Podaj wysokosc figury:");
    do{
        scanf("%d",&wysokosc);
        if(wysokosc%2==0){
            printf("Podana liczba musi byc nieparzysta, powtorz.\n");
        }
    } while (wysokosc%2==0);
    for(int i=0;i<wysokosc;i++){
        for(int j=0; j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=wysokosc-1;i>0;i--){
        for(int j=i; j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int decyzja;
    do{
        printf("\nWybierz zadanie do uruchomienia:\n"
               "    [1] - Sumy czesciowe,\n"
               "    [2] - Liczby parzyste czy nieparzyste,\n"
               "    [3] - Wzrost,\n"
               "    [4] - Rysowanie figury,\n"
               "    [5] - Wyjscie.\n"
               "[1-5]: ");
        scanf("%d", &decyzja);
        switch (decyzja) {
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

    } while (decyzja<5);
    return 0;
}