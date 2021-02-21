#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n, h, t, ans = 0;
	scanf("%d %d", &n, &h);
	for(int i = 0;i < n;i++){
		scanf("%d", &t);
		if(t % h)ans++;
		ans += t / h;
	}
	printf("%d\n", ans);
	return 0;
}

