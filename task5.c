#include <stdio.h>

int main() {
    int wolfA,wolfB,sheep,distA,distB;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
    printf("Enter position of WolfA (x-coordinate): ");
    scanf("%d", &wolfA);

    printf("Enter position of Wolf B(x-coordinate): ");
    scanf("%d", &wolfB);

    printf("Enter position of Sheep (x-coordinate): ");
    scanf("%d", &sheep);


    if (wolfA>sheep)
        distA=wolfA-sheep;
    else
        distA=sheep-wolfA;
    if (wolfB>sheep)
        distB=wolfB-sheep;
    else
        distB=sheep-wolfB;


    if (distA<distB)
       printf("Wolf A\n");
    else if (distB < distA)
        printf("Wolf B\n");
    else
        printf("Wolves distracted, Sheep escaped\n");

}
