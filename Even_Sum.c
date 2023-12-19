#include<stdio.h>
int main()
{
    int N,i;
    int arr[N];
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    scanf("%d ",&arr[i]);
    int sum=0;
    for(i=0;i<=N;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
    }
    printf("%d",sum);
    
}