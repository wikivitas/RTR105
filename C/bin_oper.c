// Operācijas:
// bitu operācijas: << un >>

#include <stdio.h>
#include <time.h>

int main(){
	system("clear");
	char a = 5; // 0000 0101
	char b = 1;
	//char c = a << b; // 0|000 0101 << 1 -> 0000 101|0 (0000 1010)
	char c;

	clock_t begin = clock();
	c = a << b; // 0000 0|101 << 5 -> 1010 0000
	//				  -101 1111
	//				+	  1
	//				   110 0000
	// 1 * 2^5 + 1 * 2^6 = 32 + 64 = 96 => gala rezultāts -96 (OK)
	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Reizināšana ar 2 ar << operāciju: %g\n",time_spent);
	printf("%d << %d = %d\n",a,b,c);

	begin = clock();
	c = a * b;
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Reizināšana ar 2 ar * operāciju: %g\n",time_spent);
	printf("%d * %d = %d\n",a,b,c);

/*
	b = 2;
	c = a << b; //00|10 0101 << 2 -> 0001 01|00 (0001 0100)
	printf("%d << %d\n",a,b,c);
	b = 3;
	c = a << b; //001|0 0101 << 3 -> 0010 1|000 (0010 1000)
	printf("%d << %d\n",a,b,c);
*/

	begin = clock();
	a = 100; // 100 / 2 = 50, 50 / 2 = 25, 25 / 2 = 12
	b = 4;
	c = a >> b; // 0010 |0100 >> 4 -> 0000 0110
	printf("%d >. %d = %d\n",a,b,c);
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf(">> operācija: %g\n",time_spent);

	return 0;
}
