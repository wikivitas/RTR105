#include <stdio.h>

void sort(int, int, int, char);
int swap(int, int);

int main(){
  int a,b,c; char s;
  sort(a,b,c,s);
  return 0;
}

int swap(int a, int b){
	int temp=a;
	a=b; 
	b=temp;
}

void sort(int a, int b, int c, char s){
  printf("Kārtošanas secība(A - augoša, D - dilstoša): ");
  char s; scanf("%c",s);
  printf("Ievadiet, lūdzu, 1. skaitļu: ");scanf("%d",&a);
  printf("Ievadiet, lūdzu, 2. skaitļu: ");scanf("%d",&b);
  printf("Ievadiet, lūdzu, 3. skaitļu: ");scanf("%d",&c);
  if(s==65){
	while((a<b) && (b<c)){
		if(a>b){
			swap(a,b);printf("%d %d\n",a,b);
		}
		if(b>c){
			swap(b,c);printf("%d %d\n",a,b);
		}
	}
  }
  
  if(s==68){
 	while((a>b) && (b>c)){
		if(a<b){
			swap(a,b);printf("%d %d\n",a,b);
		}
		if(b<c){
			swap(b,c);printf("%d %d\n",a,b);
		}
	}
  }
  if((s!=65)&&(s!=68)){
  	printf("Nav izveleta kartosanas seciba!\n\n");
  goto A;
  }
  printf("Skaitlu sakartojums:\n%d\n%d\n%d\n",a,b,c);
}
