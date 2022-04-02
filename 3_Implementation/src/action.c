#include "Unit_Convert.h"

void callmmfunction(float n)
{
    printf("%f milimetter = %f milimetter\n", n, mmTomm(n));
    printf("%f millimeter = %f centimeter\n", n, mmTocm(n));
   printf("%f millimeter = %f inch\n", n,mmToin(n)); 
   printf("%f millimeter = %f feet\n", n,mmToft(n)); 
}

void callcmfunction(float n)
{
    printf("%f centimeter = %f millimeter\n", n,cmTomm(n));
   printf("%f centimeter = %f centimeter\n", n, cmTocm(n));
   printf("%f centimeter = %f inch \n", n, cmToin(n));
   printf("%f centimeter = %f feet \n\n", n, cmToft(n));
}

void callinfunction(float n)
{
    printf("%f inch = %f millimeter\n", n, inTomm(n));
    printf("%f inch = %f centimetre \n", n, inTocm(n));
    printf("%f inch = %f inch\n ", n, inToin(n));
    printf("%f inch = %f feet\n", n, inToft(n));
}

void callftfunction(float n)
{
    printf("%f feet = %f millimeter\n", n, ftTomm(n));
   printf("%f feet = %f centimeter\n", n, ftTocm(n));
   printf("%f feet = %f inch \n", n, ftToin(n));
    printf("%f feet = %f \n", n, ftToft(n));
}
