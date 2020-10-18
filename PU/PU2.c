#include<stdio.h>

int main(){
	char a,i=0;
	char b[8]; //skaitļu zīmes masīvs
	printf("Ievadiet decimālo skaitļu: ");scanf("%d",&a);
	printf("Binārais skaitlis: ");
	do{
		i++;b[i]=a%2;
		a=a>>1;
	}while(a!=0);
	do{
		printf("%d",b[i]);i--;
	}while(i!=0);
	printf("\n");

	return 0;
}
