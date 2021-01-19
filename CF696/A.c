#include<stdio.h>
#include<string.h>

void solve()
{
	int n;
	scanf("%d",&n);
	char a[1000000];
	scanf("%s",a);
	char ans[1000000];
	for(int i = 0;i < n;i++)ans[i] = '0';
	a[0] = a[0] + 1;
	ans[0] = '1';
	for(int i = 1;i < n;i++){
		if(a[i] == a[i - 1]){
			a[i] = a[i] + 1;
			ans[i] = '1';
		}
		else {
			if(a[i] + 1 == a[i - 1]){
				ans[i] = '0';
			}
			else {
				a[i]++;
				ans[i] = '1';
			}
		}
	}
	printf("%s\n",ans);
}

int main(){

	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
