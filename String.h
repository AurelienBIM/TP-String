#include <stdio>
#include <stdlib>

class String {
	
	protected :
		char* chaine_;
		int length_;
		int capacity_;
		const static int max_size=1000000;
		
	public :

	#Constructeurs
	String();
	String(char* c);
	String(String s);

};
  
  
  
