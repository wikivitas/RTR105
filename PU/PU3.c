#include <stdio.h>

void sort(int, int, int, char);
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
  int a,b,c; char s;
  printf("Kartošanas secība(A - augoša, D - dilstoša): "); scanf("%s",&s);
  printf("Ievadiet, lūdzu, 1. skaitļu: ");scanf("%d",&a);
  printf("Ievadiet, lūdzu, 2. skaitļu: ");scanf("%d",&b);
  printf("Ievadiet, lūdzu, 3. skaitļu: ");scanf("%d",&c);
  sort(a,b,c,s);
  return 0;
}

void sort(int a, int b, int c, char s){
  
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
  	printf("Nav izvelēta kartošanas secība! Kārtošana netiks izpildīta!\n\n");
  }
  printf("Skaitļu sakārtojums:\n%d\n%d\n%d\n",a,b,c);
}
