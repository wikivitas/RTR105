// cikls while(izteiksmei){darbību bloks}
// while(izteiksme) viena_darbība;
//        izteiksmes rezultāts - vai 0 vai nav 0

#include <stdio.h>
#include <math.h>

int main(){
  while(0){
    printf("Šīs teksts netiks attēlots\n");
  }
  
/*  while(1){ // lai to apturētu terminālā ir jāspiež Ctrl + C
      printf("Šīs teksts tiks attēlots visu laiku - novērosim bezgalīgu ciklu\n");
*/  }

  double a = 3.5e-1l // matemātikā šīs skaitlis ir 0.35, 3.5 * 10^(-1) = 3.5 * 0.1 = 0.35
  double s = 0.5e-2;

  while(a<=1.0){
    printf("a = %.2f (vai ar peldošo punktu %g)\n",a,a);
  }

  double precision = s/2;

  while( fabs(a - 1.0) > precision ) // a!=1.0 - neapstāsies
  {
    printf(a = %.20f (vai ar peldošo punktu %e)\n",a,a);
    printf(a-1.0 = %.20f (vai ar peldošo punktu %e)\n",a-1.0,a-1.0);
           
    a = a + s; // divas operācijas - + un =, operācijām (darbībām) katra ir sava prioritāte
               // + operācija ir prioritārā salīdzinājumā ar = operāciju => tā tiks izpildīta pirmā
               // laika momentā t1 no atmiņas uz procesoru aizbrauks a mainīgā (0.35), s  mainīga vērtība (0.05)
               // šis vērtības tiks saskaitītas, 0.40 (ar double datu tipu)
               // laika momentā t2 iepriekšējās operācijas rezultāta vērtība tiks piešķirta a mainīgajam
    a += s; // kompakts pierakts tam pašām darbībām a = a + s;
  }

  return 0;
}
