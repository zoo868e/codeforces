#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
	int up = 0, lo = 0;
	char s[110];
	scanf("%s", s);
	for(int i = 0;i < (int)strlen(s);i++){
		if(s[i] <= 'Z')up++;
		else lo++;
	}
	if(up > lo){
		char *n = s;
		while(*n){
			*n = toupper((unsigned char) *n);
			n++;
		}
	}
	else{
		char *n = s;
		while(*n){
			*n = tolower((unsigned char) *n);
			n++;
		}
	}
	printf("%s\n",s);
	return 0;
}

