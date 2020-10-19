#include<stdio.h>

int main(){
	char a,i=0; //a mainīgai ir char tips
	const char n=8; //izvadīto zīmes skaits
	char b[n]; //skaitļu zīmes masīvs
	printf("Ievadiet decimalo skaitlu: ");scanf("%d",&a);
	printf("Binarais skaitlis: ");
	do{
		i++;b[i]=a%2;a=a>>1;
	}while(a!=0);
	while(i!=n){ 
		i++;b[i]=0;
	}
	do{
		printf("%d",b[i]);i--;
	}while(i!=0);
	printf("\n");

	return 0;
}
