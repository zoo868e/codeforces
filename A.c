#include<stdio.h>
#include<string.h>

void solve()
{
	long long int n;
	scanf("%lld",&n);
	int i = 9;
	if(n >= 2)printf("98");
	else if(n == 1)printf("9");
	n = n - 2;
	while(n > 0){
		printf("%d",i % 10);
		i++;
		n--;
	}
	printf("\n");
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	return 0;
}

