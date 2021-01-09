#include<stdio.h>
#include<string.h>

int main(){
	int a,b,ans = 0;
	scanf("%d%d",&a,&b);
	if(a < 2 && b < 2);
	else {
		while(a > 0 && b > 0){
			if(a > b){
				a -= 2;
				b += 1;
			}
			else{
				a += 1;
				b -= 2;
			}
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
