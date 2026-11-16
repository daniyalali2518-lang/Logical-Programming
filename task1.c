#include<stdio.h>
int main(){
	
	int d1,d2,d3,d4,d5,num,n,reverse;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
	printf("Enter the 5digit number: ");
	scanf("%d",&n);
	
	num=n;
	
	d5=n%10;
	n=n/10;
	
	d4=n%10;
	n=n/10;
	
	d3=n%10;
	n=n/10;	
	
	d2=n%10;
	n=n/10;
	
	d1=n%10;
	
	reverse=d5*10000+d4*1000+d3*100+d2*10+d1;
	
	if(num==reverse)
	{
		printf("Number and its reverse are equal \n");
		}
		
	else {
		printf("Number and its reverse are not equal \n");
	}
}
