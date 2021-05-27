#include<stdio.h>
#include<time.h>
#include<stdlib.h> /* To recognise exit function when compiling with gcc*/
void split(int[],int,int);

void combine(int[],int,int,int);
int main()
{
   int a[15000],n, i,j,ch,temp;
   clock_t start,end;

   while(1)
   {
 printf("1:For manual entry of N value and array elements\n");
 printf("2:To display time taken for sorting number of elements N in the range 500 to 14500\n");
 printf("3:To exit\n");
     printf("Enter your choice:\n");
     scanf("%d", &ch);
     switch(ch)
     {
       case 1:  printf("Enter the number of elements: \n");
		scanf("%d",&n);
		printf("Enter array elements: \n");
		for(i=0;i<n;i++)
		 {
		  scanf("%d",&a[i]);
		 }
		start=clock();
		split(a,0,n-1);
		end=clock();
		printf("Sorted array is: \n");
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
printf(" Time taken to sort %d numbers is %f Secs\n",n, (((double)(end-start))/CLOCKS_PER_SEC));
		break;
     case 2:
	       n=500;
	       while(n<=14500) {
	       for(i=0;i<n;i++)
		  {
                               a[i]=n-i;
		  }
	       start=clock();
	       split(a,0,n-1);
           //Dummy loop to create delay
	   for(j=0;j<1000000;j++)
	   temp=38/600;
	       end=clock();
printf(" Time taken to sort %d numbers is %f Secs\n",n, (((double)(end-start))/CLOCKS_PER_SEC));

             n=n+1000;
		  }
	      break;

   case 3: exit(0);
   }
   getchar();
    }
}

void split(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  split(a,low,mid);
  split(a,mid+1,high);
  combine(a,low,mid,high);
 }
}

void combine(int a[],int low,int mid,int high)
{
 int c[15000],i,j,k;
 i=k=low;
 j=mid+1;
 while(i<=mid&&j<=high)
 {
  if(a[i]<a[j])
  {
   c[k]=a[i];
   ++k;
   ++i;
  }
  else
  {
   c[k]=a[j];
   ++k;
   ++j;
  }
 }
 if(i>mid)
 {
  while(j<=high)
  {
   c[k]=a[j];
       ++k;
   ++j;
  }
 }
 if(j>high)
 {
  while(i<=mid)
  {
   c[k]=a[i];
   ++k;
   ++i;
  }
 }
 for(i=low;i<=high;i++)
 {
  a[i]=c[i];
 }
}
