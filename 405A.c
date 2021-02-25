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
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++)scanf("%d", &a[i]);
	qsort((void*)a, n, sizeof(a[0]), comp);
	for(int i = 0;i < n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

