#include <stdio.h>
#include<stdio.h>

char *Example(){
	static char *str="Hello World!!";
	return str;
}

int main() {
	char *s=Example();
	cout<<s<<endl;
	return 0;
}
