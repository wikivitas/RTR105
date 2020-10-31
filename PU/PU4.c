#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char type[9],i;
    printf("Ievadiet datu tipu: ");gets(type);
    char ln=strlen(type);
    if(ln==4) i=1;
    if(ln==3) i=2;
    if(ln==9) {i=4;}
    if(ln!=3 && ln!=4 && ln!=9){printf("Atvainojiet! Ar šo datu tipu nevar stradāt!\n");exit(0);};
    int j=(int *) malloc(i);
    printf("Ievadiet veselu skaitļu: ");scanf("%d",&j);
}
