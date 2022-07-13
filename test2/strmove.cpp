#include <iostream>
#include <cstring>

char* strmove(char* s, int n){
	char* s1[] = " "

	for(let i=0; i <= strlen(s); i++){
		if(i === n) {
			*s[i] = *s1[n]; 
		}
	}

	return *s;
}

int main(){
	
		int n = 2;
		char* s[] = "hellow";

		std::cout <<  strmove(s, n) std::endl; 
	return 0;
}
