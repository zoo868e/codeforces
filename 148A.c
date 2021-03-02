#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int k[4], d;
	scanf("%d %d %d %d %d", &k[0], &k[1], &k[2], &k[3], &d);
	int a[d + 1];
	memset(a, 0, sizeof(a));
	for(int i = 0;i < 4;i++){
		for(int j = k[i];j <= d;j+=k[i]){
			a[j]++;
		}
	}
	int sum = 0;
	for(int i = 1;i <= d;i++){
		if(a[i] != 0)sum++;
	}
	printf("%d\n", sum);
	return 0;
}

