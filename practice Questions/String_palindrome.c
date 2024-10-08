#include<stdio.h>
#include <string.h>  // Include string.h for strlen
#include <stdbool.h> // Include stdbool.h for bool
//using namespace std;
int main()
{
    char str[100];  // Declare a character array to hold the string

    printf("Enter the string: ");  // Fixed the message and added a semicolon
    scanf("%s", str); 

   bool ispal = true;  // Initialize ispal as true
    int n = strlen(str); // Use strlen to get the length of the string


    for(int i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-1-i])
        {
            ispal=false;            
        }
        if(ispal)
        {
            printf("Yhe Stirng is palindrome");
        }
        else
        {
            printf("String is not palidrome");
        }
        return 0;
    }
}
