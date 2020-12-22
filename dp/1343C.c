#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
	long long int t,n,pre,now,sum;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		scanf("%lld",&pre);
		sum = 0;
		for(int i = 1;i < n;i++){
			scanf("%lld",&now);
			if(pre < 0 && now < 0)pre = pre > now ? pre : now;
			else if(pre > 0 && now > 0)pre = pre > now ? pre : now;
			else {
				sum += pre;
				pre = now;
			}
		}
		sum += pre;
		printf("%lld\n",sum);
	}
	return 0;
}
