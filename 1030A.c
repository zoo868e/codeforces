#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	int t,x = 0;
	while(n--){
		scanf("%d", &t);
		x += t;
	}
	if(x)printf("HARD\n");
	else printf("EASY\n");
	return 0;
}

