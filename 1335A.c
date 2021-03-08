#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void solve()
{
	int n = 0;
	while(n == 0)scanf("%d", &n);
	printf("%d\n", n % 2 ? n/2:n/2 - 1);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--)solve();
	return 0;
}

