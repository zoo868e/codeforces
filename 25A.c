#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, d, e, odd = 0, ev = 0, temp;
	scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		scanf("%d", &temp);
		if(temp % 2){
			odd++;
			d = i;
		}
		else {
			ev++;
			e = i;
		}
	}
	printf("%d\n", odd < ev ? d:e);
	return 0;
}

