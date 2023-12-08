/*önisemci fonksiyon*/
#include <iostream>
using namespace std;
#define mutlak(a) ((a<0)? -a:a)
float x;
int main(void){
	cout<<"bir sayi giriniz:"; cin>>x;
	cout<<x<<"mutlak degeri:"<<mutlak(x)<<endl;
	system("pause");
	return 0;
}
