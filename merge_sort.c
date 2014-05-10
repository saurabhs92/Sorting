#include<stdio.h>

void mergesort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
void print_array(int arr[], int len);

int main()
{
    int arr[] = {5, 7, 3, 1, 9, 4, 2};
    int len = sizeof(arr) / sizeof(int);
    
    print_array(arr, len);
    mergesort(arr, 0, len - 1);
    print_array(arr, len);
    
    getch();
    return 0;    
}


void mergesort(int arr[], int l, int r)
{
     if(l < r)
     {
          int m = l + (r - l) / 2;
          mergesort(arr, l, m);
          mergesort(arr, m + 1, r);  
          merge(arr, l, m, r);   
     }     
}
void merge(int arr[], int l, int m, int r)
{
     int n1 = m - l + 1, n2 = r - m;
     
     int L[n1], R[n2];
     
     int i, j, k;
     for(i = 0; i < n1; i++) 
           L[i] = arr[l + i];
     for(j = 0; j < n2; j++) 
           R[j] = arr[m + 1 + j];
           
     i = 0; 
     j = 0;
     k = l;
     
     while(i < n1 && j < n2)
     {
             if(L[i] <= R[j])
                     arr[k++] = L[i++];
             else
                     arr[k++] = R[j++];
                     
     }
     
     while(i < n1)
             arr[k++] = L[i++];
     
     while(j < n2)
             arr[k++] = R[j++];
          
}


void print_array(int arr[], int len)
{
     
     int i;
     
     printf("\n\n");
     for(i = 0; i < len; i++)
           printf("%d  ", arr[i]);
          
}
