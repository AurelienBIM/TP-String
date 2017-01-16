#include <stdio.h>
#include <stdlib.h>
#ifndef STRING_H 
#define STRING_H
class String {
	
	protected :
		char* chaine_;
		int length_;
		int capacity_;
		const static int max_size=1000000;
		
	public :

	// Constructeurs
	String();
	String(char* c);
	// String(String s);
	//Destructor
	~String(void);
	
	int length(char* c = chaine_);
	
};
  
  
  
#endif // String_H
