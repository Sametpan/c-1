#include <iostream>
#include <math.h>
#include <conio.h>
#include <unistd.h>

using namespace std;

int main(void) {
	setlocale(LC_ALL, "Turkish");
	double sayi1, sayi2,sonuc;
	char islem;
	char secim;
	
	cout << "      *****HESAP MAK�NES�NE HO�GELD�N�Z ***** : " << endl;
	sleep(2);
	system("cls");
	a:
	cout << "birinci say� giriniz : ";
	cin >> sayi1;
	cout << "yap�ca��n�z i�emi giriniz : ";
	cin >> islem;
	cout << "ikinci sayiyi giriniz : ";
	cin >> sayi2;
	
	
		switch(islem){
    		case '+':
    			sonuc = sayi1+sayi2;
    			break;
    			case '-':
    				sonuc = sayi1-sayi2;
    				break;
    				
    				case '*':
    					sonuc = sayi1*sayi2;
    					break;
    					
    					case '/':
    						if (sayi2 != 0) {
    							sonuc = sayi1 / sayi2;
    							
							} 
							else{
								cout << "b�lme i�leminde payda s�f�r olmaz : ";
							}   
							break;
							case 'k':
								
								if (sayi1 > 0){
									sayi2=0;
									sonuc = sqrt(sayi1);	
								}
								else{
									cout << "reel say�larda karek�k�n i�i s�f�r olmaz : ";
									
								}
    	                            break;
		}
	cout << "i�lemin sonucu = " << sonuc;
	cout << "\n";
	cout << "i�leme devam etmek istiyormusunuz y/n = ";
	cin >> secim;
	if(secim == 'y'|| secim == 'Y'){
		cout << "\n";
		cout << " ****ekran siliniyor**** ";
		sleep(2);
		system("cls");
		goto a;
	}
	
	
	
	
	return 0;
}
