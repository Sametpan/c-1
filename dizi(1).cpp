#include <iostream>
using namespace std;

int main(void) {
	setlocale(LC_ALL, "Turkish");
  int n;
  int i;
  cout << "l�tfen girmek istedi�iniz dizi say�s�n� yaz�n�z : ";
  cin >> n;
  int dizi[n];
  for(i=0; i<n; i++){
  
  dizi[i] = i;
  cout << dizi[i] << " ";
  }
  cout << endl;
  for (i=0; i<n; i++){
  	dizi[i] = i*i;
  	
  	cout << dizi[i] << " ";
  	
  	
  }
  
  
  return 0;
}
