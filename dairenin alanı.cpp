#include <stdio.h>
#include <conio.h>
#define pisay 3.1428
#define dairealan(r) pisay*r*r
float yaricap,alan;
int main(void){
	   printf("yaricapi giriniz:"); scanf("%f",&yaricap);
	   alan=dairealan(yaricap);
	   printf("daire alani=%f\n" ,alan);
	   printf("daire cevresi= �f" ,alan);
	   printf("daire cevresi= �f" ,2*pisay*yaricap);
	   #undef pisay
	   getch();
	   return 0;
}

