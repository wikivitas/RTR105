#include <stdio.h>

void sort(char, char, char, char);
void swap(char &a, char &b){
	char temp=a;
	a=b;
	b=temp;
}

int main(){
  char a,b,c,s;
  printf("Kartošanas secība(A - augoša, D - dilstoša): "); scanf("%s",&s);
  printf("Ievadiet, lūdzu, 1. burtu: ");scanf("%s",&a);
  printf("Ievadiet, lūdzu, 2. burtu: ");scanf("%s",&b);
  printf("Ievadiet, lūdzu, 3. burtu: ");scanf("%s",&c);
  sort(a,b,c,s);
  return 0;
}

void sort(char a, char b, char c, char s){
  
  if(s==65){
	while( ((a<b) && (b<c))!=1 ){
		if(a>b){
			swap(a,b);
		}
		if(b>c){
			swap(b,c);
		}
	}
  }
  
  if(s==68){
 	while( ((a>b) && (b>c))!=1 ){
		if(a<b){
			swap(a,b);
		}
		if(b<c){
			swap(b,c);
		}
	}
  }
  if((s!=65)&&(s!=68)){
  	printf("Nav izvelēta kartošanas secība!\n\n");
  }
  printf("Burtu sakārtojums:\c%d\c%d\c%d\n",a,b,c);
}
