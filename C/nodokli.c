#include <stdio.h>
#define NL1 0.2 //1. slēkšņa nodokļu likme
#define NL2 0.23 //2. slēkšņa nodokļu likme
#define VSAOI 0.11 //sociālais nodoklis

#define ATVAPG 3000 //gada atvieglojums par 1 apgadāmo
#define ATVINVI 1848 //gada atvieglojums I un II grupas invalidiem
#define ATVINVIII 1440 //gada atvieglojums III grupas invalidiem
#define ATVREP 1848 //gada atvieglojums represēta personam un nacionālas kustības dalībniekiem

#define GNMMAX 3600 //maksimālais gada neapliekamais minimums
#define GNMPEN 3600 //gada neapliekamais minimums pensionāram
#define AIMIN 6000 //gada apliekamā ienākuma apmērs, līdz kuram piemēro maksimālo gada neapliekamo minimumu
#define AIMAX 14400 //gada apliekamā ienākuma apmērs, virs kura nepiemēro diferencēto neapliekamo minimumu

float tax_likme(float*, char*);
float neap_min(float*, char*);
float inv(char*);
float rpr(char*);

int main()
{
    float alga;float a=0.0;float b=0.0;float c=0.0;
    float* nm=&a;float* in=&b;float* re=&c;
    char n_gram, pens, inval, rep; signed char apg;
    printf("Nodokļu kalkulātors\n-------------------\n");
    A:printf("Jūsu menēša bruto alga (EUR): ");scanf("%f",&alga);
    if(alga<=0) goto A;
    B:printf("Vai Jūms ir nodokļu gramatiņa? (1 - jā; 2 - nē): ");scanf(" %c",&n_gram);
    if(n_gram!='1' && n_gram!='2') goto B;
    if(n_gram=='1'){
        C:printf("Cik Jums ir apgadāmo skaits(no 0 līdz 9): ");scanf("%hhi",&apg);
        if(apg<0 || apg>9) goto C;
        D:printf("Vai Jūs esat pensionārs? (1 - jā; 2 - nē): ");scanf(" %c",&pens);
        if(pens!='1' && pens!='2') goto D;
        E:printf("Vai Jūs esat invalīds?\n(1 - I gr, 2 - II gr, 3 - III gr, 0 - nē): ");scanf(" %c",&inval);
        if(inval!='1' && inval!='2' && inval!='3' && inval!='0') goto E;
        F:printf("Vai Jūs esat represēta persona/nac. kustības dalībnieks?\n(1 - jā; 2 - nē): ");scanf(" %c",&rep);
        if(rep!='1' && rep!='2') goto F;
        *nm = neap_min(&alga,&pens);
        *in = inv(&inval);
        *re = rpr(&rep);
    }
    float tl = tax_likme(&alga,&n_gram);
    printf("\nNeapliekamais minimums: %.2f EUR\n",(*nm)/12);
    float neto_alga = alga*(1-VSAOI)-tl*(alga*(1-VSAOI)-apg*ATVAPG/12-(*nm)/12-(*in)/12-(*re)/12);
    printf("Jūsu menēša neto alga: %.2f EUR\n\n",neto_alga);
    H:printf("Vai Jūs gribat veikt aprēķinu vēlreiz?");
    printf("(1 - jā, 2 - nē): ");scanf(" %c",&n_gram);
    *nm=0.0;*in=0.0;*re=0.0;
    if(n_gram=='1'){
	goto A;
    }
    if(n_gram=='2'){
        printf("Paldies, ka Jūs izmantojāt kalkulātoru!\n");
	printf("Visu labu!\n");
    }
    else goto H;
    return 0;
}

float tax_likme(float* alga, char* n_gram){
    float k;
    if(*alga<1667 && *n_gram=='1') k=(float)NL1;
    if(*alga>=1667 || *n_gram=='2') k=(float)NL2;
    return k;
}

float neap_min(float* alga, char* pens){
    if(*pens=='1') return GNMPEN;
    if(*pens=='2'){
        float k=(float)GNMMAX/((float)AIMAX-(float)AIMIN);
        float gnm = (float)GNMMAX-k*((*alga)*12-(float)AIMIN);
        if(gnm>=(float)GNMMAX) return GNMMAX;
    	else return gnm;
    }
}

float inv(char* inval){
    float k;
    if(*inval=='1' || *inval=='2') k=(float)ATVINVI;
    if(*inval=='3') k=(float)ATVINVIII;
    if(*inval=='0') k=0.0;
    return k;
}

float rpr(char* rep){
    float k;
    if(*rep=='1') return ATVREP;
    if(*rep=='2') return 0;
}
