#include <stdio.h>
#include "String.h"
#define INIT_CAPACITY 255

String::String() {
	chaine_ = new char[INIT_CAPACITY];
	capacity_ = INIT_CAPACITY;
	length_=0;
}

String::String( char* c ) {

}

// String::String( String s ) { }

String::~String( void ) {
	delete [] chaine_;
}