#include<stdio.h>

void hemanth(int a[], int n){
	int i,j;int small;int temp;
	for(i=0;i<=n-1;i++){
		small =i;
		for(j=i+1;j<=n-1;j++){
			if(a[j]<a[small]){
				small = j;
				
			}
		    temp = a[small];
		    a[small] = a[i];
		    a[i]=temp;
		}
		
	}
}


int main(){
	int n,i;
	int a[] = { 12, 31, 25, 8, 32, 17 };
	n = sizeof(a)/sizeof(a[0]);
	printf("array before sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	hemanth(a,n);
	printf("\narray after sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

