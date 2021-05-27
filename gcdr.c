#include<stdio.h>
int gcd(int m,int n){
	if(m%n==0)
	return n;
	else
	return gcd(n,m%n);
}
int main(){
	int m,n,a,b;
	int g;
	printf("Enter the numbers\n");
	scanf("%d%d",&a,&b);
	if(a>b){
		m=a;
		n=b;
	}
	else{
		m=b;
		n=a;
	}
	g=gcd(m,n);
	printf("Gcd of %d and %d = %d\n",a,b,g);
}
