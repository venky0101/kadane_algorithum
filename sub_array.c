#include <stdio.h>
#include<limits.h>


int main()
{
    int t;
    scanf("%d",&t);
    int a[1010];
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int maxSofar=INT_MIN,maxIndex=0,temp=0;
        for(int index=0;index<n;index++)
        {
            temp=maxIndex+a[index];
            maxIndex=temp<a[index]?a[index]:temp;
            if(maxSofar<maxIndex)
            {
                maxSofar=maxIndex;
            }
            
        }
        printf("%d",maxSofar);
    }
    return 0;
}
