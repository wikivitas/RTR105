#include<stdio.h>
#include<assert.h>

int main(){
	int a,b;
	printf("%s\n","Ievadiet skaitļus 400000 un 100000: ");
	char r = scanf("%d %d",&a,&b); //ievadīt 2 skaitļus viena rindā
	assert(r == 2); //pārbaude, vai tika ievadīti 2 vērtības

	printf(((a == 400000 && b == 100000)
	? ("Jus ievadijāt skaitļus %d un %d!\n")
	: ("Jūs ievadijāt nepareizos skaitļus, jo tie nav vienādi ar 400000 un 100000\n\n")),
	a,b);
	printf("To reizinājums sastadīs %ld:\n",(long int)a*b);
	printf("%d * %d = %ld\n\n",a,b,(long int)a*b);

	return 0;
}
