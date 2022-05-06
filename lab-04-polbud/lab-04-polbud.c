//
// Created by 1337k on 28.04.2022.
//

#include <stdlib.h>
#include <stdio.h>

void z1(){
    int N=5;
    int tabIntA[] = {1,2,3,4,5};
    int tabIntB[N];
    FILE *fwe, *fwy;
    fwy = fopen("C:\\dane.txt","w");
    for (int i = 0; i < N; ++i) {
        fprintf(fwy, " %d", tabIntA[i]);
    }
    fclose(fwy);
    fwe = fopen("C:\\dane.txt","r");
    if(fwe==NULL){
        exit(-10);
    }
    fwy = fopen("C:\\wyniki.txt", "w");
    int a, i=0;
    while(!feof(fwe)){
        fscanf(fwe, "%d", &a);
        tabIntB[i] = a;
        fprintf(fwy, "%d ", tabIntB[i]*10);
        i++;
    }
    fclose(fwe);
    fclose(fwy);
    printf("Zakonczono operacje na pliku txt.");
}

void z2(){
    //zapis float
    float zm1 = 10.345;
    float zm2;
    FILE *f;
    printf("zm1=%f", zm1);
    printf("\n---\n");
    f = fopen("C:\\test.bin", "wb");
    fwrite(&zm1, sizeof(zm1), 1, f);
    fclose(f);

    f = fopen("C:\\test.bin","rb");
    fread(&zm2, sizeof(zm2), 1, f);
    fclose(f);
    printf("zm2=%f", zm2);
    printf("\nKoniec.");
}
#define N 10
void z3(){
    int tab1[N] = {1,2,3,4,5,6,7,8,9,10};
    int tab2[N];
    for (int i = 0; i < N; ++i) {
        printf("tab1[%d] = %d\n", i, tab1[i]);
    }
    printf("-------\n");

    FILE *f;
    f = fopen("C:\\test.bin", "wb");
    fwrite(&tab1, sizeof(tab1), 1, f);
    fclose(f);

    f = fopen("C:\\test.bin", "rb");
    fread(&tab2, sizeof(tab2), 1 ,f);
    fclose(f);
    for (int i = 0; i < N; ++i) {
        printf("tab2[%d] = %d\n", i, tab2[i]);
    }
    printf("\nKoniec.");
}

void zamienWartoscia(int a, int b);
void zamienWskaznikiem(int *a, int *b);
int silnia(int liczba);

int main(){

    int a = 5, b = 7;
    printf("Przed wart: a=%d b=%d\n", a, b);
    zamienWartoscia(a, b);
    printf("Po wart: a=%d b=%d\n\n", a, b);
    printf("Przed wskaz: a=%d b=%d\n", a, b);
    zamienWskaznikiem(&a, &b);
    printf("Po wskaz: a=%d b=%d\n", a, b);
    printf("-------------------------\n");
    printf("Silnia[%d] = %d\n", a, silnia(a));
    return 0;
}

void zamienWartoscia(int a, int b){
    int c = b;
    b = a;
    a = c;
}

void zamienWskaznikiem(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
}

int silnia(int liczba){
    int s;
    if(liczba < 0){
        return 0;
    }
    printf("%d\n", liczba);
    if(liczba == 0 || liczba == 1){
        return 1;
    }
    s = liczba * silnia(liczba - 1);
    return s;
}