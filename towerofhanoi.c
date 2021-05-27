#include<stdio.h>
#include<stdlib.h>
int count =0;
int towers(int n, char src, char temp, char dest)
{

    if(n==1){
        printf(" Move disk 1 from %c to %c",src,dest);
        return n;
    }

    towers(n-1,src,dest,temp);
    
    printf("\n Move disk %d from %c to %c\n",n,src,dest);
    towers(n-1,temp,src,dest);
   

    return 0;
}
int main(){
    int n;
    printf("Enter the number of disks: \n");
    scanf("%d",&n);
    towers(n,'S','T','D');
}
