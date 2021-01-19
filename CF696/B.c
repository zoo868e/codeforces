#include<stdio.h>
#include<string.h>

void solve()
{
	long long int n;
	scanf("%lld",&n);
	long long int prime[40000];

	memset(prime,1,sizeof(prime));
	for(int i = 2;i < 200;i++){
		if(!prime[i])continue;
		for(int j = i+i;j < 40000;j = j + i){
			prime[j] = 0;
		}
	}
	long long int second,third;
	second = n + 1;
	while(prime[second] == 0)second++;
	third = second + n;
	while(prime[third] == 0)third++;
	long long int ans;
	if(second*second*second < third * second)ans = second*second*second;
	else ans = third * second;
	printf("%lld\n",ans);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
