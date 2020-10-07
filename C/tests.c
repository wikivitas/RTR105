/*
Autors: Vitalijs Kiseļovs
Kurss: 1., REBM0-I, 20/21
*/

//lai izmantotu paplašināto funkciju komplekti,
//vēlams pirmkārt pieslēgt attiecīgas bibliotēkas
#include <stdio.h>

/*bet lieta, bez kuras koda kompilācijai
nav jegas, ir procedura main:

main(){}
*/

int main(void){
 system("date"); //izskaukt komandas procesoru, lai paradītu datu
 float i,j; //lokalu veselu mainīgo i,j ieviešana
 printf("%s\n","i + j = ?"); //būs izvadīta rinda "i + j = ?", un tiks veikta pārēja uz jauno rindu
 printf("\n"); printf("%s\n","Enter i and j numbers through a space:");
 scanf("%f%f",&i,&j); //tiks prasīts ievadīt reālus skaitļus i un j caur atstarpi
 printf("%g + %g = %g\n",i,j,i+j); //ievietot ievadītas i,j un i+j vertības bez standartā formā, bez liekiem nullem
 getchar(); //gaidīts, kamēr nav spiests simbols

 return 0; //piešķirt sekmīgajai kompilācijas mainīgai 0 vērtību
}

/*pieviersiet uzmanību, ka pēc katra kodas
rindas jāstav ; zīmi*/
