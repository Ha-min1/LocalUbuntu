#include <stdio.h>
int main()
{
	float one=1.0, zero=0.0, r1, r2;
	r1=one/zero;
	r2=-one/zero;
	printf("1/0=%f\n", r1);
	printf("-1/0=%f\n", r2);
	return 0;
}
