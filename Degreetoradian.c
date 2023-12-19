#include<stdio.h>
#include<math.h>
double degreesToRadians(double degree);

double degreesToRadians(double degree)
{
    double radian;
    radian =  (degree*3.14)/180.00;
    
    return radian;

}







int main()
{
    double degree;
    printf("Enter degrees that you want to convert:");
    scanf("%lf",&degree);

    printf("The result of degree into radians is %.2f",degreesToRadians(degree));

}