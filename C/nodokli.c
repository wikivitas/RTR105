#include <stdio.h>
#define NL1 0.2 //1. slēkšņa nodokļu likme
#define NL2 0.23 //2. slēkšņa nodokļu likme
#define VSAOI 0.11 //sociālais nodoklis
#define ATVAPG 250 //atvieglojums par 1 apgadāmo

#define GNMMAX 3600 //maksimālais gada neapliekamais minimums
#define AIMIN 6000 //gada apliekamā ienākuma apmērs, līdz kuram piemēro maksimālo gada neapliekamo minimumu
#define AIMAX 14400 //gada apliekamā ienākuma apmērs, virs kura nepiemēro diferencēto neapliekamo minimumu

float tax_likme(float*, char*);
float neap_min(float*, char*);

int main()
{
    float alga; 
    char n_gram; signed char apg;
    printf("Nodokļu kalkulātors\n-------------------\n");
    A:printf("Jūsu menēša bruto alga (EUR): ");scanf("%f",&alga);
    if(alga<=0) goto A;
    B:printf("Vai Jūms ir nodokļu gramatiņa? (1 - jā; 2 - nē): ");scanf(" %c",&n_gram);
    if(n_gram!='1' && n_gram!='2') goto B;
    C:printf("Cik Jums ir apgadāmo skaits: ");scanf("%hhi",&apg);
    if(apg<0) goto C;
    float nm = neap_min(&alga,&n_gram);
    float tl = tax_likme(&alga,&n_gram);
    printf("Neapliekamais minimums: %.2f EUR\n",nm/12);
    float neto_alga = alga*(1-VSAOI)-tl*(alga*(1-VSAOI)-apg*ATVAPG-nm/12);
    printf("Jūsu menēša neto alga: %.2f EUR",neto_alga);
    return 0;
}

float tax_likme(float* alga, char* n_gram){
    float k;
    if(*alga<1667 && *n_gram=='Y') k=NL1;
    if(*alga>=1667 || *n_gram=='N') k=NL2;
    return k;
}

float neap_min(float* alga, char* n_gram){
    if(*n_gram=='N'){ 
        return 0;
    }
    if(*n_gram=='Y'){
        float k=(float)GNMMAX/((float)AIMAX-(float)AIMIN);
        float gnm = (float)GNMMAX-k*((*alga)*12-(float)AIMIN);
        if(gnm>=(float)GNMMAX) return GNMMAX;
        else return gnm;
    }
}
