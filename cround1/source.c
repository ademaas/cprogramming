#include <stdio.h>
#include <math.h>
double equlidian(double x,double y, double z ){
double sum = pow(x, 2) + pow(y,2)+ pow(y,2);
double vect = sqrt(sum);
return vect;
}
int main(void)
{
    /* The following line will print out some text */
    double vector = equlidian(5,4,8);

   printf("The length of the vector is %f\n",vector);
}
