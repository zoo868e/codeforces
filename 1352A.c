#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void solve()
{
	int n;
	scanf("%d", &n);
	int x[5], c = 0;
	memset(x, 0, sizeof(x));
	for(int i = 0;i < 5 && n > 0;i++){
		x[i] = n % 10;
		n /= 10;
		if(x[i] != 0)c++;
	}
	printf("%d\n", c);
	int r = 1, flag = 0;
	for(int i = 0;i < 5;i++){
		if(x[i] != 0){
			if(flag == 1)printf(" ");
			printf("%d", x[i] * r);
			flag = 1;
		}
		r *= 10;
	}
	printf("\n");
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
	return 0;
}

