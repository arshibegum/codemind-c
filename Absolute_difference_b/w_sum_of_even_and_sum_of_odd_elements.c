#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    scanf("%d ",&arr[i]);
    int sum=0 , odd =0;
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
        else
        odd=odd+arr[i];
    }
    int diff=sum-odd;
    printf("%d",abs(diff));
}
    