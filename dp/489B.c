#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
	int c = *(int *)a;
	int d = *(int *)b;
	if(c < d)return -1;
	else if(c == d) return 0;
	else return 1;
}

void insert(int *heap,int x,int position);
void printarray(int *heap, int len);
int deletemax(int *heap,int len);
void swap(int *a, int *b);
void heapsort(int *heap,int *solution,int len);
int my_max(int a,int b);
int partner(int a,int b);
int main(){
	int boy_num,girl_num;
	scanf("%d",&boy_num);
	int boy[boy_num];
	memset(boy,0,sizeof(boy));
	for(int i = 0;i < boy_num;i++)scanf("%d",&boy[i]);
	qsort((void *)boy,boy_num,sizeof(boy[0]),comp);
	scanf("%d",&girl_num);
	int girl[girl_num];
	memset(girl,0,sizeof(girl));
	for(int i = 0;i < girl_num;i++){
		scanf("%d",&girl[i]);
	}
	qsort((void *)girl,girl_num,sizeof(girl[0]),comp);
	int dp[boy_num+2][girl_num+2];
	memset(dp,0,sizeof(dp));
	for(int i = 0; i < boy_num;i++)dp[i][0] = 0;
	for(int i = 0; i < girl_num;i++)dp[0][i] = 0;
	for(int b = 1;b <= boy_num;b++){
		for(int g = 1;g <= girl_num;g++){
			if(partner(boy[b - 1],girl[g - 1])){
				dp[b][g] = my_max(dp[b - 1][g - 1] + 1,my_max(dp[b][g - 1],dp[b - 1][g]));
			}
			else{
				dp[b][g] = my_max(dp[b - 1][g - 1],my_max(dp[b][g - 1],dp[b - 1][g]));
			}
		}
	}
	printf("%d\n",dp[boy_num][girl_num]);

	return 0;
}


void insert(int *heap,int x,int position)
{
	*(heap + position) = x;
	while(position > 0 &&  *(heap + position) > *(heap + position/2)){
		swap((heap + position),(heap + position/2));
		position /= 2;
	}
}

void printarray(int *heap, int len)
{
	while(len>0){
		printf("%d,",*heap);
		heap++;
		len--;
	}
}

int deletemax(int *heap,int len)
{
	int temp = *heap,position = 1,max = INT_MIN;
	if(len == 1)return *heap;
	len--;
	*heap = *(heap + len);
	while(2*position <= len){
		if((2*position + 1) > len){
			if(*heap < *(heap + position))swap(heap,heap + position);
			heap = heap + position;
		}
		else{
			max = *(heap + position) > *(heap + position + 1) ? position:position+1;
			if(*heap < *(heap + max)){
				swap(heap,heap + max);
				heap = heap + max;
			}
		}
		position = position * 2;
	}
	return temp;
}


void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}


void heapsort(int *heap,int *solution,int len)
{
	int x,count = len;
	while(count > 0){
		x = deletemax(heap,count);
		*(solution + (len - count)) = x;
		count--;
	}
}

int my_max(int a,int b)
{
	return a > b ? a:b;
}
int partner(int a,int b){
	if(a > b)a = a - b;
	else a = b - a;
	return a <= 1 ? 1:0;
}
