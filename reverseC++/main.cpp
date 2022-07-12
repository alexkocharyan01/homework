#include <iostream>
#include <string>
#include <cstring>

char *rev(char *str) {
  int i= 0;
int len=0;
  char temp;
  len=strlen(str);
 int  n=len-1;
  for(i = 0; i <=(len/2); i++){
    temp=str[i];
    str[i]=str[n];
    str[n]=temp;
    n--;
  }
  return str;
}

int main() { 
    char string[]="Alex Kocharyan";
    rev(string);
	std::cout << string << std::endl;
    return 0;
}
