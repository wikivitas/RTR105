#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long fact(unsigned char i){
   		unsigned char j=i-1; long long k=i*j;
		while(j--!=1){
			k*=j;
		}
		return k;
}

void na(unsigned char* i){
    printf("\rNav atbildes! Faktoriālu no skaitļa %hhu nevar aprēķināt!\n",*i);exit(0);
}

int main(){
	char t;	unsigned char i;
	printf("Ievadiet datu tipa burtu(c: char; i: int; l: long long): ");scanf(" %c",&t);
	printf("Ievadiet veselu skaitļu: ");scanf("%hhu",&i);
	if((char) i<=0){
		printf("Skaitlis nevar būt mazāks par 0 vai vienāds ar 0!\n");exit(0);
	}
	printf("%hhu! = ",i); 
	
	if(t=='c'){
        	char c=i*(i-1);char k=fact(i);
        	if(k<c) na(&i); printf("%hhi\n",k);exit(0);
	}

	if(t=='i'){
        	int c=i*(i-1);int k=fact(i);
        	if(k<c) na(&i); printf("%d\n",k);exit(0);
	}

	if(t=='l'){
        	long long c=i*(i-1);long long k=fact(i);
        	if(k<c) na(&i); printf("%lld\n",k);exit(0);
	}
	else na(&i);
	return 0;
}
