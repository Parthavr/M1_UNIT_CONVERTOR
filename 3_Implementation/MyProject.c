#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void mmTomm(float n)
{
    printf("%f milimetter = %f milimetter\n", n, n);
}

void mmTocm(float n)
{
    float out;
    out = n / 10;
    printf("%f millimeter = %f centimeter\n", n, out);
}

void mmToin(float n)
{
    float out;
    out = n / 25.4;
    printf("%f millimeter = %f inch\n", n, out);
}
void mmToft(float n)
{
    float out;
    out = n / 305;
    printf("%f millimeter = %f feet\n", n, out);
}
void cmTomm(float n)
{
    float out;
    out = n * 10;
    printf("%f centimeter = %f millimeter\n", n, out);
}
void cmTocm(float n)
{
    float out;
    out = n * 1;
    printf("%f centimeter = %f centimeter\n", n, out);
}
void cmToin(float n)
{
    float out;
    out = n * 3.93701;
    printf("%f centimeter = %f inch \n", n, out);
}
void cmToft(float n)
{
    float out;
    out = n / 30.48;
    printf("%f centimeter = %f feet \n\n", n, out);
}
void inTomm(float n)
{
    float out;
    out = n * 25.4;
    printf("%f inch = %f millimeter\n", n, out);
}
void inTocm(float n)
{
    float out;
    out = n * 2.54;
    printf("%f inch = %f centimetre \n", n, out);
}
void inToin(float n)
{
    float out;
    out = n * 1;
    printf("%f inch = %f inch\n ", n, out);
}
void inToft(float n)
{
    float out;
    out = n * 0.0833;
    printf("%f inch = %f feet\n", n, out);
}
void ftTomm(float n)
{
    float out;
    out = n * 304.8;
    printf("%f feet = %f millimeter\n", n, out);
}
void ftTocm(float n)
{
    float out;
    out = n * 30.48;
    printf("%f feet = %f centimeter\n", n, out);
}
void ftToin(float n)
{
    float out;
    out = n * 12;
    printf("%f feet = %f inch \n", n, out);
}

void ftToft(float n)
{
    float out;
    out = n * 1;
    printf("%f feet = %f \n", n, out);
}

void callmmfunction(float n)
{
    mmTomm(n);
    mmTocm(n);
    mmToin(n);
    mmToft(n);
}

void callcmfunction(float n)
{
    cmTomm(n);
    cmTocm(n);
    cmToin(n);
    cmToft(n);
}

void callinfunction(float n)
{
    inTomm(n);
    inTocm(n);
    inToin(n);
    inToft(n);
}

void callftfunction(float n)
{
    ftTomm(n);
    ftTocm(n);
    ftToin(n);
    ftToft(n);
}

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
