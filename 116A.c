#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int cap = 0, max = 0;
	int n, in, out;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d %d", &out, &in);
		cap = cap - out + in;
		max = max > cap ? max:cap;
	}
	printf("%d\n", max);
	return 0;
}

