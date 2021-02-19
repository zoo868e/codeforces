#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int islucky(int);

int main(){
	int n;
	scanf("%d", &n);
	int lucky[1001];
	memset(lucky, 0, sizeof(lucky));
	for(int i = 1;i <= 1000;i++){
		if(islucky(i))lucky[i] = 1;
	}
	for(int i = 1;i <= 1000;i++){
		if(lucky[i] == 0){
			for(int j = 1;j <= i;j++){
				if(lucky[j]){
					if((i % j) == 0)lucky[i] = 1;
				}
			}
		}
	}
	if(lucky[n])printf("YES\n");
	else printf("NO\n");
	return 0;
}

int islucky(int a)
{
	int flag = 1;
	while(a != 0){
		if((a % 10) != 4 && (a % 10) != 7)flag = 0;
		a = a / 10;
	}
	return flag;
}

