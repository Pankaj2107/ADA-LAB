#include<stdio.h>
#include<stdlib.h>
void max_heapify(int a[],int size,int i){
	int largest = i;
	int left = (2*i)+1;
	int right = (2*i)+2;
	if( left<size && a[left]>a[largest] )
	largest=left;
	if(right<size && a[right]>a[largest])
	largest=right;
	if(largest!=i){
		int temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		max_heapify(a,size,largest);
	}
}
void heap_sort(int a[],int size){
	int i;
	for(i=size/2-1;i>=0;i--)
	max_heapify(a,size,i);
	for(i=size-1;i>=0;i--){
		int temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		max_heapify(a,i,0);
	}
}
		
int main(){
	int a[20],n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	heap_sort(a,n);
	printf("Array after sorting\n");
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}
			
		
	
	
	
