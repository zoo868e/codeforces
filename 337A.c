#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
	int c = *(int*) a;
	int d = *(int*) b;
	if(c > d)return 1;
	else if(c == d)return 0;
	else return -1;
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int f[m];
	for(int i = 0;i < m;i++)scanf("%d",&f[i]);
	qsort((void *)f, m, sizeof(f[0]), comp);
	int max = f[n - 1] - f[0];
	for(int i = n; i < m;i++){
		max = max < (f[i] - f[i - n + 1]) ? max:(f[i] - f[i - n + 1]);
	}
	printf("%d\n", max);
	return 0;
}

