#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[]){

    if (*argv[1] == 'a'){
        int a;
        a = atoi(argv[2])*atoi(argv[3]);
        printf("\narea = %i", a);
    }
    else if(*argv[1] == 'p'){
        int p;
        p = (atoi(argv[2]) + atoi(argv[3]))*2;
        printf("\nperimetro = %i", p);
    }

    return 0;
}