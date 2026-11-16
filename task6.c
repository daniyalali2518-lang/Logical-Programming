#include<stdio.h>
int main() {
    int days;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    if(days<=0)
        printf("No fine! Book returned on time.\n");
    else if(days>=1&&days<=5)
        printf("Fine: 50 Paise (Rs. 0.50)\n");
    else if(days>=6&&days<=10)
        printf("Fine: 1 Rupee (Rs. 1.00)\n");
    else if(days>10&&days<=30)
        printf("Fine: 5 Rupees (Rs. 5.00)\n");
    else
        printf("Your membership has been CANCELLED due to delay of more than 30 days!\n");

}
