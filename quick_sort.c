#include<stdio.h>

void quicksort(int arr[], int l, int h);
int partition(int arr[], int l, int h);
void swap(int *a, int *b);

int main()
{
    int arr[] = {5, 8, 2, 11, 26, 9, 8, 7, 19};
    int len = sizeof(arr) / sizeof(int);
    quicksort(arr, 0, len - 1);
    int i;
    
    for(i = 0; i < len; i++)
    {
          printf("%d  ", arr[i]);      
    }    
    
    getch();
    return 0;    
}


void quicksort(int arr[], int l, int h)
{
     if(l < h)
     {
          int p = partition(arr, l, h);
          quicksort(arr, l, p - 1);
          quicksort(arr, p + 1, h);
               
     }
          
}

int partition(int arr[], int l, int h)
{
    int i = l - 1, x = arr[h], j;

    for(j = l; j < h; j++)
    {
          if(arr[j] < x)
          {
                    i++;
                    swap(&arr[i], &arr[j]);          
          }      
    }    
    swap(&arr[i + 1], &arr[h]);
    
    return i + 1;
    
        
}

void swap(int *a, int *b)
{
     int temp;
     temp = *a;
     *a = *b;
     *b = temp;
          
}
