//
// Created by 1337k on 01.04.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int maks = 100;
    int min = 10;
    srand(time(NULL));

    for(int i = 0; i<100; i++){
        int los = min + rand() % (maks+1-min);
        printf("\r[%s]");
    }
    return 0;
}