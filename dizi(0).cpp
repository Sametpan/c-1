#include <iostream>
using namespace std;

int main () {
	setlocale(LC_ALL, "Turkish");
	
 int sayilar[5];
 for(int i=1; i<=5; i++){
 	
 	cout << i <<  ". sayý : ";
 	cin >> sayilar[i];
 	
 	
 }
for (int j=5; j<=1; j--) {
	
	cout << sayilar[j] << endl;
}	
	
	

return 0;
	}	
	
