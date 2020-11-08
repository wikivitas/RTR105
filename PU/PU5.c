#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cstr(char*, char*);

int main(){
	char type[15]; unsigned char i,j;
	printf("Ievadiet datu tipu(char,int,long long): ");gets(type);
	printf("Ievadiet veselu skaitļu: ");scanf("%hhu",&i);
	if((char) i<=0){
		printf("Skaitlis nevar būt mazāks par 0 vai vienāds ar 0!\n");exit(0);
	}
	printf("%hhu! = ",i); 

	if(cstr(type,"char")==0){
		char k=i*(i-1);
        for(j=i-2;j!=1;j--){
            k*=j;
        }
		printf("%hhi\n",k);exit(0);
	}

	if(cstr(type,"int")==0){
		int k=i*(i-1);
        for(j=i-2;j!=1;j--){
            k*=j;
        }
		printf("%d\n",k);exit(0);
	}

	if(cstr(type,"long long")==0){
		long long k=i*(i-1);
        for(j=i-2;j!=1;j--){
            k*=j;
        }
		printf("%lld\n",k);exit(0);
	}
	else{
		printf("Nepareizais datu tips! Faktoriāls netiks izreķināts!\n");exit(0);
	}
	return 0;
}
int cstr(char* a, char* b){
	while(*a==*b){
		if(*a=='\0' || *b =='\0') break;
	a++;b++;
	}

	if (*a =='\0' && *b=='\0')
		return 0;
	else
		return -1;
}
