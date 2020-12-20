#include <stdio.h>
#include <string.h>

void PRINTF(int *a,int len)
{
	for(int i = 0;i < len;i++)printf("%d",a[i]);
}

int main(){
	int m,s,max,min,max_t,min_t;
	scanf("%d %d",&m,&s);
	max = s;
	min = s;
	max_t = 0;
	min_t = m-1;
	int ans_max[m];
	int ans_min[m];
	memset(ans_max,0,sizeof(ans_max));
	memset(ans_min,0,sizeof(ans_min));
	if(s == 0 && m == 1)printf("0 0\n");
	else if(s <= 0 || s > 9*m)printf("-1 -1\n");
	else {
		while(max > 9 && max_t < m){
			ans_max[max_t] = 9;
			max_t++;
			max -= 9;
		}
		while(max_t < m){
			if(max){
				ans_max[max_t] = max;
				max = 0;
				max_t++;
			}
			else{
				ans_max[max_t] = 0;
				max_t++;
			}
		}
		while(min > 9 && min_t >= 0){
			ans_min[min_t] = 9;
			min_t--;
			min -= 9;
		}
		if(min_t == 0)ans_min[0] = min;
		else{
			ans_min[0] = 1;
			min--;
		}
		while(min_t > 0){
			if(min){
				ans_min[min_t] = min;
				min = 0;
				min_t--;
			}
			else{
				ans_min[min_t] = 0;
				min_t--;
			}
		}
		PRINTF(ans_min,m);
		printf(" ");
		PRINTF(ans_max,m);
		printf("\n");
	}
	return 0;
}

