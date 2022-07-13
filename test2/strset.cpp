#include <iostream>
#include <cstring>

char* strset(char* x1, char* x2){
	for(int i = 0; i < strlen(x1); ++i){
		x1[i] = *x2;
	}
	return x1;
}

int main(){
	char k[] = "hellow";
	char ch[] = "*";

	std::cout << strset(k, ch) << std::endl;
	return 0;
}
