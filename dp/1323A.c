#include<stdio.h>
#include<string.h>

void solve()
{
	int n, odd = 0;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++)scanf("%d",&a[i]);
	for(int i = 0;i < n;i++){
		if(a[i] % 2){
			if(odd != 0){
				printf("2\n");
				printf("%d %d\n",odd,i + 1);
				return;
			}
			else{
				odd = i + 1;
			}
		}
		else{
			printf("1\n");
			printf("%d\n",i + 1);
			return;
		}
	}
	printf("-1\n");
	return;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
