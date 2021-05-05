#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	long long int a, b;
	while(t--){
		scanf("%lld %lld", &a, &b);
		if(a < b){
			int x = a;
			a = b;
			b = x;
		}
		printf("%lld\n", (a - b) / 10 + ((a - b) % 10 ? 1:0));
	}
	return 0;
}

