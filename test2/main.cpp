#include <iostream>
#include <string.h>

char* concat(char* s1, const char* s2){
	char* length = s1 + strlen(s1);

	while(*s2 != '\0'){
		*length++ = *s2++;
	}
	*length = '\0';
	return s1;
}

int main(){
	char x1[] = "Alex";
	char x2[] = "Kocharyan";

	std::cout << concat(x1, x2) << std::endl;
}
