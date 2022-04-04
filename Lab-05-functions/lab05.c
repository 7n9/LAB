#include <stdio.h>
#include <stdlib.h>
//funcs

void saySomething(){ //void - does its own stuff and returns nothing back
    printf("Something\n");
}

int getValue(){
    int decision;
    printf("1-5:");
    scanf("%d", &decision);
    return decision;
}

void sayHi(char name1[]){
    printf("Hello %s!\n",name1);
}

int main(){
    char name[20];
    printf("Input your name:");
    scanf("%s", name);
    sayHi(name);
    printf("What would you like to do?\n");
_L1:switch (getValue()) {
        case 1:
            saySomething();
            goto _L1;
        case 2:
            return 3;
    default:
            break;
    }
    return 0;
}

