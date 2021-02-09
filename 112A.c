#include<stdio.h>
#include<string.h>

int main(){
	char a[105],b[105];
	scanf("%s",a);
	scanf("%s",b);
	for(int i = 0;i < (int)strlen(a);i++){
		a[i] = a[i] | 0x20;
		b[i] = b[i] | 0x20;
	}
	int ans = strcmp(a,b);
	if(ans != 0)ans = ans > 0 ? 1:-1;
	printf("%d\n",ans);
}
