#include<stdio.h>
int main()
{
    int i,n,k,a[100],j,numcheck,counter,pos,max;
 
 
	max=0;
	numcheck=0;
	scanf("%d",&n);
	for(j=0;j<n;++j)
	{
	    scanf("%d",&a[j]);
	}
	while(numcheck<n)
	{
	    for(j=0; j<n ;++j)
	    {
		if(a[j]==-1)
		    continue;
		counter=1;
		++numcheck;
		for(k=j+1;k<n;++k)
		{
		    if(a[j]==a[k])
		    {
			++counter;
			++numcheck;
			a[k]=-1;
		    }
		}
		if(counter>max)
		{
		    max=counter;
		    pos=j;
		}
		else if(counter==max)
		{
		    if(a[j]<a[pos])
		    {
			pos=j;
		    }
		}
	    }
	}
	printf("%d %d\n",a[pos],max);
 
    return 0;
}
