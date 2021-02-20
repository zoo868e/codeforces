#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int comp(const void* a, const void* b)
{
	int c = *(int*)a;
	int d = *(int*)b;
	if(c < d)return 1;
	else if(c == d) return 0;
	else return -1;
}
int main(){
	int n, sum = 0;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	qsort((void*)a, n, sizeof(a[0]), comp);
	sum = sum / 2;
	int c = 0, i;
	for(i = 0;i < n;i++){
		if(c > sum){
			break;
		}
		c += a[i];
	}
	printf("%d\n",i);
	return 0;
}

