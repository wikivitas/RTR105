#include <stdio.h>

void sort(int, int, int, char);

int main(){
  int a,b,c; char s;
  sort(a,b,c,s);
  return 0;
}

void sort(int a, int b, int c, char s){
  printf("Kārtošanas secība(A - augoša, D - dilstoša): ");
  char s; scanf("%c",s);
  if(s==65){
	  printf("Ievadiet, lūdzu, 1. skaitļu: ");scanf("%d",&a);
  }
  
  if(s==68){
  
  }
  else{
  	printf("Nav izvelēta kartošanas secība!\n\n");
  goto A;
  }
}
