#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d",&n);
	char x[n + 1];
	scanf("%s",x);
	int A = 0, D = 0;
	for(int i = 0;i < (int)strlen(x);i++){
		if(x[i] == 'A')A++;
		else D++;
	}
	if(A > D)printf("Anton\n");
	else if(A == D)printf("Friendship\n");
	else printf("Danik\n");
	return 0;
}

