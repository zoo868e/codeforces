#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int ans = 0;
	while(a <= b){
		ans++;
		a *= 3;
		b *= 2;
	}
	printf("%d\n",ans);
	return 0;
}

