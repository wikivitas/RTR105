#include<stdio.h>
#include<stdlib.h>

int main(){
	char a; //a mainīgai ir char tips
	char i=0; //skaitītāja mainīga
	const char n=8; //izvadīto zīmes skaits (char tipam parasti ņēm 8 zīmes, jo char tipu mainīgo izmērs ir 1 b)
	char b[n+1]; //skaitļu zīmes masīvs

	printf("Ievadiet decimalo skaitlu: ");scanf("%d",&a);

	do{
		i++;b[i]=a%2;a=a>>1;
	}while(a!=0);

	//ja sanāks, ka zīmju nepietiek, parādīsies bridinājums, un programa tiks pārtraukta ar 0 atgriešanu
	if(i>n){ printf("Kļūda! Bināro skaitli nevar attēlot ar norādīto zīmju skaitu vērtību!\n");exit(0);} 

	//piešķirot nepieprasītiem augstas kārtas pozicijam 0 vērtību
	while(i!=n){ 
		i++;b[i]=0;
	}
	
	//bināru skaitļu izvadīšana uz ekranu
	do{
		printf("%d",b[i]);i--;
	}while(i!=0);

	printf("\n");
	return 0;
}
