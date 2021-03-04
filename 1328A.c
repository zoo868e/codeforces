#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void solve()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", a % b ? b - (a % b):0);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--)solve();
	return 0;
}

