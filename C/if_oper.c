/*
Palūgt lietotājam ievadīt 3 skaitļus
Noskaidrot kādas secībā viņš gribētu, lai tie tīktu sakārtoti - augoša vai dilstoša
Sakārtot atbilstoši lietotāja izvēlei un attēlot uz ekrāna
* - palūgt ievadīt 3 burtis
-"-
-"-
*/

int main(){
	// if( vieta izteiksmei vai biežāk vieta kādam nosacijumam )
	//   {vieta operatoriem, kuri tiks izpilditi, ja iekš (iekavām) nav nulle!}

	if (1)
	{
		printf("teksts būs redzams, jo 1!=0\n");
	}

	if (10)
	{
		printf("teksts būs redzams, jo 10!=0\n");
	}

	if (0)
	{
		printf("teksts nebūs redzams, jo 0==0\n");
	}

	char a = 10;
	if(a==10)
	{
		printf("jā, a mainīga vērtība ir 10\n");
		printf("a ir %d\n",a);
	}

	// if()
	// ()
	// else
	// {}

	if(a==9)
	{
		printf("jā, a mainīga vērtība ir 10\n");
		printf("a ir %d\n",a);
	}
	else
	{
		printf("nē, a mainīga vērtība nav 10\n");
		printf("a ir %d\n",a);
	}

	char b = 11;
	if(a!=b)
		printf("mainīga a vērtība (%d) nav vienāda ar b mainīgā vērtību (%d)\n",a,b);

	printf("Kad parādās šis teksts?\n");

	if(1)
	 ;

	if(a==10)
	{
		printf("jā, a mainīga vērtība ir 10\n");
		a = 11;
		if(a==11)
		{
			printf("a tagad ir %d\n",a);
		}
	}

	return 0;
}
