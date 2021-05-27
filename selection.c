#include<stdio.h>
void selection_sort(int arr[],int n){
	int i,j,min_index;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(arr[min_index]>arr[j])
			min_index=j;
			if(min_index!=i){
				int temp=arr[i];
				arr[i]=arr[min_index];
				arr[min_index]=temp;
			}
		}
	}
}
int main(){
	int arr[10],n,i;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Array before sorting\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
	printf("Array after sorting\n");
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}
	

