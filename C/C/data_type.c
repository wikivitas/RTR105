// Kods dažādu datu tipu pētīšanai
// Informācijas vienības, ar kurām operē cilvēks - simboli un skaitļi
// simboli: burti, cipari, punktuācijas zīmes utt. - ASCII tabula - simbols VS binārs kods

// skaitļi: veseli skaitļi,  reālie skaitļi, kompleksie skaitļi (divas daļas - Re un Im)

// Informācijas vienība, ar kuru operē dators - bits (0/1)
// Informācijas vienība ar adresi (datorā) - baits
// 1 byte == 8 bits
// ASCII table - one symbol == 1 byte
// unique binary combinations inside 1 byte - 256 
// 1 bits: 0, 1 - 2 kombinācijas
// 2 biti: 00, 01, 10, 11 - 4 kombinācijas
// 3 biti: 000, 001, 010, 011, 100, 101, 110, 111 - 8 kombinācijas
// x biti ... - (stāvokļu skaits)^biti - 2^x
// ASCII tabulā - 256 unikāli simboli (ASCII tabula 1. daļā - 128 simboli)

#include <stdio.h>
#define A 11

void main()
	{
	char a = 10; // definēšana
	// 1. darbība - RAM atmiņā tiek atvelēta vieta vienai char datu tipa mainīgās glabāšanai
	// šī vieta ir viennozīmīgi saķēdēta ar identifikatoru "a" (bet, vietai ir arī adrese)
	// saskaņā ar char datu tipu, vieta izmērs - 1 baits
	// Kā šajā brīdī izskatījās tas atmiņas apgabals: 0000 0101 vai 1111 1110 vai 0000 1010
	// char a; // deklarēšana
	// 2. darbība - vērtības piešķiršana
	// a = 10; // vērtības piešķiršana
	// a -> 0000 1010
	printf("Mainīgā a vērtība (laika momentā t1) ir: %d\n",a);
	a = 125;
	printf("Mainīgā a vērtība (laika momentā t2) ir: %d\n",a);
	printf("Konstantes A vērtība (laika momentā t3) ir: %d\n",A);
	// A = 126; //konstanti mainīt nevar
	// printf("Konstantes A vērtība (laika momentā t4) ir: %d\n",A);
	char mans_mainiigais = 45;
	//centisimies izmantot mnemoniskus nosaukumus - nosaukum atspuguļo maināgā jēgu vai nolūku
	a = 0x10;// ||||||||||    ||||||||||||||
	printf("Konstantes a vērtība (laika momentā t4) ir: %d\n",a); // prognoze - 16;
	printf("Konstantes a vērtība (laika momentā t4) ir: 0x%x\n",a); // prognoze - 10;
	printf("Konstantes a vērtība (laika momentā t4) ir: %o(oct)\n",a); // prognoze - 20;
	printf("Konstantes a vērtība (laika momentā t4) ir: %o(oct)\n",a); // prognoze - 20;

	a = 65;
	printf("Konstantes a vērtība (laika momentā t4) ir: %d\n",a);
	printf("Konstantes a vērtība (laika momentā t4) ir: 0x%x\n",a);
	printf("Konstantes a vērtība (laika momentā t4) ir: %o(oct)\n",a);

	a = 'k';
	printf("Konstantes a vērtība (laika momentā t4) ir: %d\n",a);
	printf("Konstantes a vērtība (laika momentā t4) ir: 0x%x\n",a);
	printf("Konstantes a vērtība (laika momentā t4) ir: %o(oct)\n",a);
	// 1 byte -< 256 numbers
	// => without sign 0 ... 255
	// => with sign -128 ... 0 .. 127

	a = 258; // 258 = 256 + 2 -> 0000 0001 | 0000 0010 "
	printf("Mainīga a vērtība ir %d\n", a);

	unsigned char b = 128;
	printf("Mainīga b vērtība ir %d\n", b);

	// int
	int c;
	printf("int datu tipa izmērs baitos: %d\n",sizeof(c));
	// šoreiz int atbilst 4 baiti (32 biti)
	// => without sign 0 ... (2^32-1)
	// => with sign -(2^31) ... 0 ... (2^31-1)

	//---------------------------------------------------------------------------
	float d = 6.5; //double
	printf("float datu tipa izmērs baitos: %f\n",d);
	printf("float datu tipa izmērs baitos: %.2f\n",d);
	printf("float datu tipa izmērs baitos: %.f\n",d);

	}
