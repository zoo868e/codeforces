#include <stdio.h>
#include <string.h>

int main(){
	int m,a[100100],ind = 1;
	char s[100100],in,pre = 0;
	memset(a,0,sizeof(a));
	in = getchar();
	while(in != '\n' && ind < 100100){
		if(pre != 0){
			if(in == pre)a[ind - 1] = a[ind - 2] + 1;
			else a[ind - 1] = a[ind - 2];
		}
		pre = in;
		in = getchar();
		ind++;
	}
	scanf("%d",&m);
/*	
	for(int i = 0;i < ind;i++){
		printf("a[%d] = %d \n",i,a[i]);
	}
	printf("\n");
*/	
	int lr[2][m];
	for(int i = 0;i < m;i++){
		scanf("%d %d",&lr[0][i],&lr[1][i]);
	}
	for(int i = 0;i < m;i++){
//		printf("l = %d, r = %d\n",lr[0][i],lr[1][i]);
		printf("%d\n",a[lr[1][i] - 1] - a[lr[0][i] - 1]);
	}
	return 0;
}

