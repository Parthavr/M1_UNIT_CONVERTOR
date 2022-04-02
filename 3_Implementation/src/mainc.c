#include "Unit_Convert.h"

int main()
{
    while (1)
    {
        int choice;
        float n;

        printf("welcome to unit converter");
        printf("\n1.millimeter\n");
        printf("2.centimeter\n");
        printf("3.inch\n");
        printf("4.feet\n");
        printf("\n enter you choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n enter the value : ");
            scanf("%f", &n);
            callmmfunction(n);
            break;
        case 2:
            printf("\n enter the value :");
            scanf("%f", &n);
            callcmfunction(n);
            break;

        case 3:
            printf("\n enter the value :");
            scanf("%f", &n);
            callinfunction(n);
            break;
        case 4:
            printf("\n enter the value :");
            scanf("%f", &n);
            callftfunction(n);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n Wrong choice\n");
            break;
        }
    }
    return 0;
}
