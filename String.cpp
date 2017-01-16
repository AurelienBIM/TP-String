#include "String.h"
#define init_capacity = 255;

String::String() {
	chaine_ = new char[init_capacity];
	capacity_ = init_capacity;
	length_=0;
}

String::String( char* c ) {

}

String::String( String s ) {

}
