#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char x[110];
	scanf("%s",x);
	int flag = 0;
	for(int i = 0;i < (int)strlen(x);i++){
		if(x[i] == 'H' || x[i] == 'Q' || x[i] == '9')flag++;
	}
	if(flag)printf("YES\n");
	else printf("NO\n");
	return 0;
}

