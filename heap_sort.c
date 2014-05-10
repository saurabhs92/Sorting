#include<stdio.h>

struct maxheap
{
       int size;
       int *array;
};

void heapsort(int *array, int size);
struct maxheap* create_and_build_heap(int *array, int size);
void heapify(struct maxheap* heap, int index);
void print_array(int arr[], int len);
void swap(int *a, int *b);


int main()
{
    int arr[] = {4, 8, 9, 1};
    int length = sizeof(arr) / sizeof(int);
    
    print_array(arr, length);
    heapsort(arr, length);
    
    print_array(arr, length);
    int a = 0 % 2;
    printf("\n%d", a);
    getch();
    return 0;    
}


void heapsort(int *array, int size)
{
     struct maxheap* heap = create_and_build_heap(array, size);
     
     while(heap -> size > 1)
     {
              swap(&heap -> array[0], &heap -> array[heap -> size - 1]);
              --heap -> size;

              heapify(heap, 0);
     }
}

struct maxheap* create_and_build_heap(int *array, int size)
{
     struct maxheap* heap = (struct maxheap*)malloc(sizeof(struct maxheap));
     heap -> array = array;         // put the starting address of the array in array field of heap
     heap -> size = size;
     
     int i;
     for(i = (heap -> size - 2) / 2; i >= 0; i--)
           heapify(heap, i);
     
     return heap;
}

void heapify(struct maxheap* heap, int index)
{
     int largest = index;
     
     int left = (index << 1) + 1;     // = 2*index + 1;
     int right =(index + 1) << 1;    // = 2*index + 2;
     
     if(heap -> size > left && heap -> array[left] > heap -> array[index])
             largest = left;
     
     
     if(heap -> size > right && heap -> array[right] > heap -> array[index])
             largest = right;
             
     if(largest != index)
     {
            swap(&heap -> array[largest], &heap -> array[index]);
            heapify(heap, largest);
            
                       
     }
          
}

void print_array(int arr[], int len)
{
     int i;
     printf("\n\n");
     for(i = 0; i < len; i++)
           printf("%d  ", arr[i]);
          
}


void swap(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;     
}





