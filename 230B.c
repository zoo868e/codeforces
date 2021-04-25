#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int Pnumber[1000000];
int count = 1;

void Gprime()
{
	memset(Pnumber, 0, sizeof(Pnumber));
	Pnumber[0] = 2;
	for(int i = 3;i < 1000000;i++){
		int flag = 1;
		for(int j = 0;flag && Pnumber[j] <= (int)sqrt(i);j++){
			if(i % Pnumber[j] == 0)flag = 0;
		}
		if(flag){
			Pnumber[count] = i;
			count++;
		}
	}
}

int findprime(int x, int start, int end)
{
	int mid = (start + end) / 2;
	int t = Pnumber[mid];
	//printf("start = %d, end = %d, t = %d\n", start, end, t);
	if(start >= end)return 0;
	if(t == x)return 1;
	else if(t > x)return findprime(x, start, mid); 
	else return findprime(x, mid + 1, end);
}

int main(){
	int t;
	scanf("%d", &t);
	long long int x;
	Gprime();
	for(int i = 0;i < t;i++){
		scanf("%lld", &x);
		if(x < 4)printf("NO\n");
		else if(x == 4)printf("YES\n");
		else if((long long int)sqrt(x)*(long long int)sqrt(x) == x && findprime((int)sqrt(x), 0, count))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

