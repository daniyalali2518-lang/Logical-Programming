#include<stdio.h>
int main(){
	
	int ram,shyam,ajay;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
	printf("Enter the ram,shyam and ajay ages: ");
	scanf("%d %d %d", &ram, &shyam, &ajay);
	
	if(ram<shyam && ram<ajay)
		printf("Ram is youngest");
    else if(shyam<ram && shyam<ajay)
    	printf("Shyam is youngest");
	else
		printf("Ajay is younguest");
}
