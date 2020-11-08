#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c(char*, char*);

int main(){
	char type[11]; char brd[]="Nepareizais datu tips! Faktoriāls netiks izreķināts!\n";
	unsigned char i;
	printf("Ievadiet datu tipu(char,int,long long): ");
	fgets(type,11,stdin);fflush(stdin);
	printf("Ievadiet veselu skaitļu: ");scanf("%hhu",&i);
	if((char) i<=0){
		printf("Skaitlis nevar būt mazāks par 0 vai vienāds ar 0!\n");exit(0);
	}
	printf("%hhu! = ",i); 
	unsigned char j=i-1;

	if(c(type,"char\n")==0){
		char k=i*j; char a=k;
		while(j!=1){
			j--;k*=j;
			if(k<a){printf("%s",brd);exit(0);}
		}
		printf("%hhi\n",k);exit(0);
	}

	if(c(type,"int\n")==0){
		int k=i*j;int a=k;
		while(j!=1){
			j--;k*=j;
			if(k<a){printf("%s",brd);exit(0);}
		}
		printf("%d\n",k);exit(0);
	}

	if(c(type,"long long\n")==0){
		long long k=i*j;long long a=k;
		while(j!=1){
			j--;k*=j;
			if(k<a){printf("%s",brd);exit(0);}
		}
		printf("%lld\n",k);exit(0);
	}
	else{
		printf("%s",brd);exit(0);
	}
	return 0;
}
int c(char* a, char* b){
	while(*a==*b){
		if(*a=='\0' || *b =='\0') break;
	a++;b++;
	}

	if (*a =='\0' && *b=='\0')
		return 0;
	else
		return -1;
}
