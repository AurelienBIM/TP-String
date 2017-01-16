#include <stdio.h>
#include "String.h"
#define INIT_CAPACITY 255

String::String() {
	chaine_ = new char[INIT_CAPACITY];
	capacity_ = INIT_CAPACITY;
	length_=0;
}

String::String( char* c ) {
	length_ = length(c);
	if (length_ < INIT_CAPACITY) {
		chaine_ = new char[INIT_CAPACITY];
		capacity_=INIT_CAPACITY;
		for (int i=0; i<= length_;i+=1) {
			chaine_[i] = c[i];
		}
	}
	else {
		chaine_ = new char[length_+1];
		capacity_=length_+1;
		for (int i=0; i<= length_;i+=1) {
			chaine_[i] = c[i];
		}
	}
}


// String::String( String s ) { }

String::~String( void ) {
	delete [] chaine_;
}

int String::length(char* c){
	int i=0;
	while( c[i]!='\0'){
		i=i+1;
	}
	return i;
}

int String::size(char* c /*= chaine_*/){
	int i=0;
	while( c[i]!='\0'){
		i=i+1;
	}
	return i;
}

/*String& string::operator=(String &str)
{
	String str2(str);
	delete [] chaine_;
    return str2*;
}*/


