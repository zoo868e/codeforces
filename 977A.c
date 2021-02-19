#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	long long int a,b;
	scanf("%lld %lld", &a, &b);
	while(b != 0){
		b--;
		if(a % 10)a--;
		else a = a / 10;
	}
	printf("%lld\n", a);
	return 0;
}

