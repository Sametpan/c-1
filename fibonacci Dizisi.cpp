#include <iostream>
using namespace std;

int main() {
	
	int t1,t2,a,sayi,i;
	t1=0;
	t2=1;
	
	
	
	cout << "sayi = "; cin >> sayi;
	
	
	for (i=1; i<=sayi; i++) {
		
		
		a=t1+t2;
		t1=t2;
		t2=a;
		
		
		cout << "fibonacci dizisi = " << t1 << endl;
		
		
		
	}
return 0;	
}
