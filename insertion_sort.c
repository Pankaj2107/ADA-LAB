#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void insertion_sort(int a[],int n){
	int key,i,j;
    for(i=1;i<n;i++){
      key=a[i];
      j=i-1;
      while(j>=0&&a[j]>key){
           a[j+1]=a[j];
           j=j-1;
      }
      a[j+1]=key;
   }
}

int main(){
	int i,n,j;
	int a[15000],ch;
	clock_t start,end;
	while(1){
		printf("1:For manual entry of N value and array elements\n");
        printf("2:To display time taken for sorting number of elements N in the range 500 to 14500\n");
        printf("3:To exit\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch(ch){
			case 1: printf("Enter the number of elements \n");
			        scanf("%d",&n);
			        printf("Enter the elements\n");
			        for(i=0;i<n;i++)
			        scanf("%d",&a[i]);
			        start=clock();
			        insertion_sort(a,n);
			        end=clock();
			        printf("Sorted array:\n");
			        for(i=0;i<n;i++)
			        printf("%d\n",a[i]);
			        printf(" Time taken to sort %d numbers is %f Secs\n",n, (((double)(end-start))/CLOCKS_PER_SEC));
			        break;
			case 2: n=500;
	                while(n<=14500) {
	                for(i=0;i<n;i++){
                           a[i]=n-i;
			       }
	               start=clock();
	               insertion_sort(a,n);
           //Dummy loop to create delay
	                for(j=0;j<1000000;j++){}
	                end=clock();
                    printf(" Time taken to sort %d numbers is %f Secs\n",n, (((double)(end-start))/CLOCKS_PER_SEC));
                    n=n+1000;
                    }
                    break;

            case 3: exit(0);
		}
	}
}

   



