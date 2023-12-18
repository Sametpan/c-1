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
	
	cout << "      *****HESAP MAKÝNESÝNE HOÞGELDÝNÝZ ***** : " << endl;
	sleep(2);
	system("cls");
	a:
	cout << "birinci sayý giriniz : ";
	cin >> sayi1;
	cout << "yapýcaðýnýz iþemi giriniz : ";
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
								cout << "bölme iþleminde payda sýfýr olmaz : ";
							}   
							break;
							case 'k':
								
								if (sayi1 > 0){
									sayi2=0;
									sonuc = sqrt(sayi1);	
								}
								else{
									cout << "reel sayýlarda karekökün içi sýfýr olmaz : ";
									
								}
    	                            break;
		}
	cout << "iþlemin sonucu = " << sonuc;
	cout << "\n";
	cout << "iþleme devam etmek istiyormusunuz y/n = ";
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
