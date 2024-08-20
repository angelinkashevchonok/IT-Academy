#include <cstring>
#include "reverse.h"
void reverseString(char* str) {
	for (int i = 0; i < strlen(str)/2; i++) {
		char el = str[i];
		str[i] = str[strlen(str)-i-1];
		str[strlen(str)-i-1] = el;
	}
}