#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	int p[n];
	int ans[n + 1];
	for(int i = 0;i < n;i++)scanf("%d", &p[i]);
	for(int i = 0;i < n;i++){
		ans[p[i]] = i + 1;
	}
	for(int i = 1;i <= n;i++)printf("%d ", ans[i]);
	return 0;
}

