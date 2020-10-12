// Operācijas:
// loģiskās operācijas: &&, ||
// salīdzināšanas operācijas: <, >, <=, >=, ==, != -> rezultāts ir 0 vai 1
// loģiskas operācijas pa bitiem: &, |, ~

#include <stdio.h>
#include <time.h>

int main(){
	system("clear");
	char a = 0;
	char b = 5;

	char c;
//	printf("%d && %d = %d\n",a,b,c);
	c = a < b;
	printf("%d < %d = %d\n",a,b,c);
	c = a > b;
	printf("%d > %d = %d\n",a,b,c);
	c = a <= b;
	printf("%d <= %d = %d\n",a,b,c);
	c = a >= b;
	printf("%d >= %d = %d\n",a,b,c);
	c = a == b;
	printf("%d == %d = %d\n",a,b,c);
	c = a != b;
	printf("%d != %d = %d\n",a,b,c);
	printf("salīdzināšanas operācijas datu tipa izmērs (operamdi ar char datu tipu): %d\n",sizeof(a<b));
	printf("salīdzināšanas operācijas datu tipa izmērs (operamdi ar int datu tipu): %d\n",sizeof(0<5));

	printf("5>6 && 5!=6 = %d\n",((5>6)&&(5!=6)));
	printf("5>6 && 5!=6 = %d\n",((5<6)&&(5!=6)));

	printf("5>6 && 5!=6 = %d\n",((5>6)||(5!=6)));
	printf("5>6 && 5!=6 = %d\n",((5<6)||(5!=6)));

	printf("5 & 6 = %d\n",5&6); // 0000 0101 & 0000 0110 = 0000 0100
	printf("5 & 6 = %d\n",5|6); // 0000 0101 | 0000 0110 = 0000 0111
	printf("~6 = %d\n",~6); // 0000 0110 = (1)111 1001 = -000 0110 + 1 = -000 0111 =  -7

	return 0;
}
//Mājāsdarbs
// a - 40 000 un b - 100 000 -> a*b = 4 000 000 000
// >> << - dec to bin
