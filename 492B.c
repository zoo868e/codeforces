#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
	int c = *(int*)a;
	int d = *(int*)b;
	if(c > d)return 1;
	else if(c == d)return 0;
	else return -1;
}

int main(){
	int n, l;
	scanf("%d %d", &n, &l);
	int a[n];
	for(int i = 0;i < n;i++)scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), comp);
	int max = 2*a[0];
	for(int i = 1;i < n;i++){
		max = max > (a[i] - a[i - 1]) ? max:(a[i] - a[i - 1]);
	}
	max = max > 2*(l - a[n - 1]) ? max:2*(l - a[n - 1]);
	printf("%f\n", max/2.0);
	return 0;
}

