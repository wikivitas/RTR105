// cikls for( sākuma vērtības ; izteiksmei; cikla mainīgo izmaiņas ){darbību bloks}
// for( sākuma vērtības ; izteiksmei; cikla mainīgo izmaiņas ) viena_darbība;
//        izteiksmes rezultāts - vai 0 vai nav 0

#include <stdio.h>
#include <math.h>

int main(){
  for( ;0; ){
    printf("Šīs teksts netiks attēlots\n");
  }
  
/*  for( ;1; ){ // lai to apturētu terminālā ir jāspiež Ctrl + C
      printf("Šīs teksts tiks attēlots visu laiku - novērosim bezgalīgu ciklu\n");
*/  }

  double precision = s/2;
  
  for( a=0.35, s=0.05, precision = s/2 ; fabs(a - 1.0) > precision ; a+=s, s+=0.001 ) // a!=1.0 - neapstāsies
  {
    printf("a = %.2f (vai ar peldošo punktu %e; solis - %.3f\n",a,a,s);
    //printf("a-1.0 = %.20f (vai ar peldošo punktu %e)\n",a-1.0,a-1.0);
  }
  printf("Pēc cikla:\n");
  printf("a = %.2f (vai ar peldošo punktu %e)\n",a,a);

  return 0;
}

// faktoriāls:
// 5! = 1*2*3*4*5 = 4!*5 => 4! = 5! / 5
// 0! = 1

// palūgt lietotājam ievadīt vienu veselu skaitli
// palūgt izvēlēties datu tipu - char, int, long long
// vai nu aprēķināt faktoriālu ievādītājam skaitlim, vai nu paziņot, ka ievadītājam skaitlim nav iespējam
// aprēķināt faktoriāla vērtību
// nedrīkst izmantot datu tipu robežu konstantes, nedrīkst izmantot lielāku datu tipu par lietotāja norādīto
// tik ko faktoriāla aprēķins kļūst nepareizs, uzreiz pārtraukt aprēķinu
