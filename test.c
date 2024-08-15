#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, small, temp;  // local variables
      
    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray  
    {  
        small = i; //minimum element in unsorted array  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small]){
           small = j;	
		}     
        temp = arr[small];     
        arr[small] = arr[i];  
        arr[i] = temp;  
    }  
}  
   
  
int main()  
{    
    int i;
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    for(i=0;i<n;i++){
    	printf("%d\t",a[i]);
	}
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    for(i=0;i<n;i++){
    	printf("%d\t",a[i]);
	} 
    return 0;  
}    
