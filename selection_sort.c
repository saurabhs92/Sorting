#include<stdio.h>

void selection_sort(int arr[], int len);

int main()
{
    int arr[] = {5, 9, 3, 18, 7, 4, 15, 23, 11, 1};
    int length = sizeof(arr)/sizeof(int);
    
    selection_sort(arr, length);
    
    getch();
    return 0;    
}

void selection_sort(int arr[], int len)
{
     int i, j, temp;
     for(i = 0; i < len - 1; i++)
     {
           for(j = i + 1; j < len; j++)
           {
                 if(arr[i] > arr[j])
                 {
                           temp = arr[i];
                           arr[i] = arr[j];
                           arr[j] = temp;
                                     
                 }      
           }
                 
     }
     
     printf("\n\n");
     for(i = 0; i < len; i++)
     {
           printf("%d ", arr[i]);      
     }
          
}
