INPUT: 1 2 1 2 3
OUTPUT: 1 2 3 



#include<stdio.h>
void main()
{
    int a[100],i,n=5,j,k;
    for (i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }
   
    for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])
    		{
    			for(k = j; k < n; k++)
    			{
    				a[k] = a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
