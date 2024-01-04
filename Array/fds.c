
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of array_elements:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the array_elements:");
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i=n-1;i>=0;i--) 
//     {
//         printf("%d ",arr[i]);
//     }  
// }


#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter the number of array_elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array_elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bool flag=false;
    for (int i=n-1;i>n/2;i--) 
    {
        for (int j=0;j<n/2;j++)
        {
            if(arr[i]==arr[j])
            {
                flag =true;
            }
        }
    }  
    
    if (flag)
    printf("It's a palindrome");
    else 
    printf("It's not a palindrome");
}