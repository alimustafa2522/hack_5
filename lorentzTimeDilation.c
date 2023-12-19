#include<stdio.h>
#include<math.h>

double lorentzTimeDilation(double t, double percentC);

    // copy the function from hacks;

 double lorentzTimeDilation(double t, double percentC)
 {
        double percentage;
        // percenatge to calculate the speed of light ;

        percentage = percentC/100;

        // this will calculate the ratio of velocity and speed of light;

        // now calculate dilated time and return it;

        // formula is complex we use math.h that has all the built functions sqrt and pow;


        double dilated_time = (t/sqrt(1.0 - pow(percentage,2.0)));
        
        return dilated_time;


 }


 int main()
 {
    double t;

    printf("Enter the normal time (in years\n)");
    // ask user to enter normal time in years;
    scanf("%lf",&t);

    double per;
    // ask user to enter the speed percentage at which the object is moving;
    printf("Enter percentage of speed of light at which object is moving");
    scanf("%lf",&per);

    printf("The time dilation of the object is %.2lf",lorentzTimeDilation(t,per));

    return 0;


 }