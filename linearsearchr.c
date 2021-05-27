#include<stdio.h>
int search(int a[],int b,int e,int key){
	if(b>e)
	return -1;
	else if(key==a[b])
	return b;
	else if(key==a[e])
	return e;
	else 
	return search(a,b+1,e-1,key);
}
int main(){
	int a[10],n,i,key;
	printf("Enter no. of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	int index=search(a,0,n-1,key);
	if(index==-1)
	printf("Element not found in the list\n");
	else
	printf("Element is present at index %d",index);
}
	
