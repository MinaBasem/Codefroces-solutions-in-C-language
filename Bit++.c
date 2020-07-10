#include <stdio.h>
#include <string.h>
int main() {
	int count = 0, i = 0, c = 0 ;
	int x = 0;
	char strg[150];

	scanf("%d", &count);
	for (i = 0; i <= count; i++){
		gets(strg);
 		if ((strg[0]=='-' && strg[1]=='-') || (strg[1]=='-' && strg[2]=='-')){
 			c--;
		}
 		if ((strg[0]=='+' && strg[1]=='+') || (strg[1]=='+' && strg[2]=='+')){
 			c++;
		}
	}
	printf("%d \n", c);
	return x;
}
