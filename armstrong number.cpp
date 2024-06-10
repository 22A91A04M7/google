#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,q,r,s=0;
	scanf("%d",&n);
	d=log10(n)+1;
	q=n;
	while(q!=0)
	{
		r=q%10;
		s=s+pow(r,d);
		q=q/10;
	}
	if(s==n)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not Armstrong number");
	}
}
