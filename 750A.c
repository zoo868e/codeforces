#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	int s = 240 - k;
	int ans = 0;
	while(ans < n && s >= (ans + 1) * 5){
		ans++;
		s -= ans * 5;
	}
	printf("%d\n", ans);
	return 0;
}

