#include <iostream>
using namespace std;

int main() {
	int sayi, max, toplam, kat;
	float ort;
   toplam = 0;

	cout << "ekrana bir sayi giriniz : "; cin >> sayi;
	cout << "ekrana max sayiyi giriniz :: "; cin >> max;

     
     
     
	      for (int i; i*sayi <=max; i++) {
	      	kat =i*sayi;
	      	
	      	if (kat % sayi ==0){
	      		
	      		cout << kat << endl;
			  }
	      	toplam =i*sayi+toplam;
	      	
			  
	      	
	      }
	      	
	      	ort = (toplam*sayi)/max;
	      	
	    
	    
	    
	    cout << "sayinin katlarinin toplami : " << toplam << endl;
	    cout << "sayinin katlarinin ortalamasi : " << ort;
			  
			  
			  
	      	 
	      	 
	      	 
	         
	         
	      	
	      	
	      	return 0;
		  }
	       
		
		
			 
			
			
		
		

            

		
		
		


		

		
	
	




