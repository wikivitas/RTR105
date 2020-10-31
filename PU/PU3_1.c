#include <stdio.h>

void sort(int, int, int, char);
void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

int main(){
  int a,b,c; char s;
  printf("Kartosanas seciba(A - augosa, D - dilstosa): "); scanf("%s",&s);
  printf("Ievadiet, ludzu, 1. skaitlu: ");scanf("%d",&a);
  printf("Ievadiet, ludzu, 2. skaitlu: ");scanf("%d",&b);
  printf("Ievadiet, ludzu, 3. skaitlu: ");scanf("%d",&c);
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
  	printf("Nav izveleta kartosanas seciba!\n\n");
  }
  printf("Skaitlu sakartojums:\n%d\n%d\n%d\n",a,b,c);
}
