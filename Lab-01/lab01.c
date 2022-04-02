//
// Created by 1337k on 01.04.2022.
//

#include <stdio.h>

const char hw[] = "Hello World!";
const int charWidth = 12;

void z1(){
    for(int i = 0; i<charWidth; i++){
        printf("%c\n",hw[i]);
    }
}

void z2(){
    for(int i = 0; i<4; i++){
        printf("Hello World0%d! ",i+1);
    }
}

void z3(){
    for(int i = 0; i<4; i++){
        printf("Hello World0%d!\n",i+1);
    }
}

int main(){
    int decyzja = 0;
    printf("[1-3]:");
    scanf("%d", &decyzja);

    switch(decyzja){
        case 1:
            z1();
            break;
        case 2:
            z2();
            break;
        case 3:
            z3();
            break;
        default:
            break;
    }
    //z1();
    //z2();
    //z3();
    return 0;
}