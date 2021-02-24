#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int a,b,c,w,x,y,z,aa,bb;
	scanf("%d %d %d", &a, &b, &c);
	aa = a + b + c;
	bb = a * b + c;
	w = a + b * c;
	x = a * (b + c);
	y = a * b * c;
	z = (a + b) * c;
	w = w > aa ? w:aa;
	w = w > bb ? w:bb;
	w = w > x ? w:x;
	w = w > y ? w:y;
	w = w > z ? w:z;
	printf("%d\n", w);
	return 0;
}

