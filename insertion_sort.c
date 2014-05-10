#include<stdio.h>

void insertion_sort(int arr[], int len);

int main()
{
    int arr[] = {8, 4, 11, 6, 19, 13, 7, 24, 16, 3};
    int length = sizeof(arr) / sizeof(int);
    
    insertion_sort(arr, length);
    getch();
    return 0;    
}

void insertion_sort(int arr[], int len)
{
     int i, j, k, temp;
     
     for(i = 1; i < len; i++)
     {
           for(j = 0; j < i; j++)
           {
                 if(arr[i] < arr[j])   // Reverse sign to change to descending order
                 {
                         temp = arr[i];            
                       
                         for(k = i; k > j; k--)
                               arr[k] = arr[k - 1];
                 
                         arr[j] = temp;
                 
                 }
                       
           }
                 
     }
     printf("\n\nInsertion Sort Result: ");
     for(i = 0; i < len; i++)
     {
           printf("%d ", arr[i]);      
     }
          
}
