#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	char x[110],y[110];
	scanf("%s",x);
	scanf("%s",y);
	int lenx = (int)strlen(x);
	int leny = (int)strlen(y);
	if(lenx != leny){
		printf("NO\n");
		return 0;
	}
	for(int i = 0;i < lenx;i++){
		if(x[i] != y[lenx - i - 1]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

