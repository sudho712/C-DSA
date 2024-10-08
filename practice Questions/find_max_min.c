#include<stdio.h>
//using namespace std;
int main()
{
    int n,i;
    printf("Enter the No of element :");
    scanf("%d",&n);
    int arr[n];
     printf("Enter the elements of array : ");
     for(i=0; i<n; i++)
     {
        scanf("%d",&arr[i]);        
     }

     int min=arr[0];
     int max=arr[0];
     for(i=0; i<n; i++)
     {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {

            min=arr[i];
        }
     }
     printf("\nMaximin : %d",max);
     printf("\nMinimum : %d",min);
     return 0;
}
