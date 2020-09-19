/*
 *  lab1exe_B.c
 *  ENSF 619 - Fall 2020 Lab 1, exercise B
 *  Created by Mahmood Moussavi
 *  Completed by: Student Name
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

int main(void)
{
    int n;
    double velocity;
    
    printf ("Please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf_s("%lf" ,&velocity);
    
    if(n != 1)
    {
        printf("Invlid input. Bye...");
        exit(1);
    }
    
    while (velocity < 0 )
    {
        printf ("please enter a positive number for velocity: ");
        n = scanf_s("%lf", &velocity);
        if(n != 1)
        {
            printf("Invlid input. Bye...");
            exit(1);
        }
    }
    
      create_table(velocity);
    return 0;
}
void create_table(double v) {
    printf("Angle\t\t\tt\t\t\td\n(deg)\t\t\t(sec)\t\t\t(m)\n");
    double a = 0;
    while (a <= 90) {
        printf("%-7lf\t\t%-7lf\t\t%-7lf\n",a,Projectile_travel_time(degree_to_radian(a),v),Projectile_travel_distance(degree_to_radian(a),v));
            a += 5;
    }



}

double Projectile_travel_time(double a, double v) {
    
    return 2 * v * sin(a) / G;
}
double Projectile_travel_distance(double a, double v) {
   
    return pow(v, 2) * sin(2 * a) / G;

}
double degree_to_radian(double a) {
    return PI / 180 * a;

}


