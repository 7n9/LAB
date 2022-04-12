//
// Created by 1337k on 01.04.2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
int i;
    while(i<100000){
        printf("malloc %p\n", malloc(1024*1024));
        i += 1;
    }
    sleep(10);
    return 0;
}