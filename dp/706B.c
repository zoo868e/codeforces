#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
	int c = *(int *) a;
	int d = *(int *) b;
	if(c < d)return -1;
	else if(c == d)return 0;
	else return 1;
}

int binarysearch(int*,int,int,int);

int main(){
	int n,q;
	scanf("%d",&n);
	int x[n];
	memset(x,0,sizeof(x));
	for(int i = 0; i < n;i++)scanf("%d",&x[i]);
	qsort((void *)x,n,sizeof(x[0]),comp);
	scanf("%d",&q);
	int Q[q];
	memset(Q,0,sizeof(Q));
	for(int i = 0;i < q;i++)scanf("%d",&Q[i]);
	for(int i = 0;i < q;i++){
		int temp = binarysearch(x,Q[i],0,n-1);
		printf("%d\n",temp + 1);
	}
	return 0;
}

int binarysearch(int *a,int target,int start,int end)
{
	int mid = (start+end) / 2;
	if(start == end){
		if(a[start] <= target)return start;
		else return -1;
	}
	if(a[start] > target)return -1;
	if(a[mid] <= target && a[mid + 1] > target)return mid;
	else if(a[mid] <= target)return binarysearch(a,target,mid + 1,end);
	else return binarysearch(a,target,start,mid);
}
