#include<stdio.h>

void bubble_sort(int arr[], int len);

int main()
{
    int arr[] = {6, 13, 42, 5, 21, 9, 26};
    int length = sizeof(arr)/sizeof(int);
    bubble_sort(arr, length);
    
    
    getch();
    return 0;    
}

void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for(i = 0; i < len - 1; i++)
    {
          for(j = 0; j < len - 1 - i; j++)
          {
                if(arr[j] > arr[j + 1])
                {
                          temp = arr[j];
                          arr[j] = arr[j + 1];
                          arr[j + 1] = temp;
                          
                }      
          }
          
    }
    
    printf("\nBubble sort result:");
    int k;
    for(k = 0; k < len; k++)
    {
          
          printf("%d ", arr[k]);
          
    }
    
}
