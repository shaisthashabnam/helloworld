#include <stdio.h>

int main(void) {
	int a[50],k,n,m,count=0,q,i;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    q=a[i]/k;
	    m=m+q;
	    if(a[i]%k!=0)
	    {
	        count++;
	    }
	}
	printf("%d",m+count);
	return 0;
}

