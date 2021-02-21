#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int a,b,n, ans = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		if((b - a) >= 2)ans++;
	}
	printf("%d\n",ans);
	return 0;
}

