#include <stdio.h>
int main() {
    float fsc,nts;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Enter F.Sc percentage marks: ");
    scanf("%f", &fsc);
    printf("Enter NTS percentage marks: ");
    scanf("%f", &nts);

    if (fsc > 70.0 && nts >= 70.0)
        printf("Allocated: Oxford University - IT Department\n");
    else if (fsc > 70.0 && nts >= 60.0)
        printf("Allocated: Oxford University - Electronics Department\n");
    else if (fsc > 70.0 && nts >= 50.0)
        printf("Allocated: Oxford University - Telecommunication Department\n");
    else if (fsc >= 60.0 && fsc <= 70.0 && nts >= 50.0)
        printf("Allocated: MIT - IT Department\n");
    else if (fsc >= 50.0 && fsc <= 59.0 && nts >= 50.0)
        printf("Allocated: MIT - Chemical Department\n");
    else if (fsc > 40.0 && fsc < 50.0 && nts >= 50.0)
        printf("Allocated: MIT - Computer Department\n");
    else
        printf("Not Eligible for seat allocation based on given marks.\n");

}
