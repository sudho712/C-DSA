#include<stdio.h>
//using namespace std;
int main()
{
    int n,i;
    printf("Enter the no of Element : ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elemnts of the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed Array :");
    for(n=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
