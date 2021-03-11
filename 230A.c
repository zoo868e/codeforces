#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

int main(){
	int s, n;
	scanf("%d %d", &s, &n);
	int x[n], y[n];
	for(int i = 0;i < n;i++)scanf("%d %d", &x[i], &y[i]);
	int w[n];
	memset(w, 0, sizeof(w));
	int flag = 1;
	for(int i = 0;i < n;i++){
		int g = INT_MIN, G = INT_MIN;
		for(int j = 0;j < n;j++){
			if(w[j] == 0 && s > x[j]){
				if(g < s + y[j]){
					g = s + y[j];
					G = j;
				}
			}
		}
		if(g == INT_MIN)flag = 0;
		else{
		w[G] = 1;
		s = g;
		}
	}
	if(s >= 0 && flag == 1)printf("YES\n");
	else printf("NO\n");
	return 0;
}

