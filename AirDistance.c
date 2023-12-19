#include<stdio.h>
#include<math.h>

double getAirDistance(double originLatitude,double originLongitude, double destinationLatitude, double destinationLongitude);

double getAirDistance(double originLatitude,
                      double originLongitude,
                      double destinationLatitude,
                      double destinationLongitude)
{
            // earth radius const so we use const keyword'
            const double earth_radius = 6371.00;

            // first convert all into radians;

            double originradLatitude = (originLatitude * 3.14)/ 180.00;
            double originradlongitude = (originLongitude* 3.14)/ 180.00;
            double destinationradLatitude = (destinationLatitude * 3.14)/ 180.00;
            double  destinationradlongitude = (destinationLongitude * 3.14)/ 180.00;

            // calculate air distance and then return it i copy the formula from hacks;

             double distance = acos(sin(originradLatitude) * sin(destinationradLatitude) +
                           cos(originradlongitude) * cos(destinationradlongitude) *
                           cos(destinationradlongitude - originradlongitude )) * earth_radius;

            return distance;
            







}










int main()
{
    double lat_1;
    double lat_2;
    double long_1;
    double long_2;
    

    printf("Enter origin latitude and longitude (in degrees):");
    scanf("%lf %lf",&lat_1,&long_1);

    
    printf("Enter origin latitude and longitude (in degrees):");
    scanf("%lf %lf",&lat_2,&long_2);

    double distance =  getAirDistance( lat_1,long_1,lat_2,long_2);

    printf("The distance between two location is %.2lf",distance);


    
}