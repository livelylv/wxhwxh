#include <stdio.h>
int minst(int a[],int n)
{

    int i,min=a[0];
    for(i=1;i<n;i++)
        if(a[i]<min)                        
        min=a[i];
        return min;
}
void swap(int a[],int b[],int n)  
{ 
	int i,t;  
    for(i=0;i<n;i++)
		{
		    t=a[i]; a[i]=b[i]; b[i]=t; }
}
int  main()
{
    int a[4][4]={{3,4,3,6},{8,4,1,5},{5,1,3,0},{1,2,3,4}},i,j; 
    for(i=0;i<3;i++)
		{
		    for(j=i+1;j<4;j++)    
				{
					if(minst(a[j],4)<minst(a[i],4))
                        swap(a[j],a[i],4);
				}
		}
                        for(i=0;i<4;i++)
							{
								for(j=0;j<4;j++)
									printf("%d ",a[i][j]);
                                    printf("\n");
							}
                                   
}
