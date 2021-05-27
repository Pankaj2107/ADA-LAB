#include<stdio.h>
int binsearch(int a[],int b,int e,int key){
	int mid;
	if(b>e)
	return -1;
	mid=(b+e)/2;
	if(a[mid]==key)
	return mid;
	else if(key>a[mid])
	return binsearch(a,mid+1,e,key);
	else 
	return binsearch(a,b,mid-1,key); 
}
void sort(int a[],int n){
	int i,j,temp=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int a[10],n,i,key;
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,n);
	printf("Array after sorting\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	int index=binsearch(a,0,n-1,key);
	if(index==-1)
	printf("Element not found in the list\n");
	else
	printf("Element is present at index %d",index);
}
	
