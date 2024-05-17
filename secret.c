#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "assembly.h"

#define RAND_POINTS_TOTAL 100000000

unsigned long is_thrown_random_point_inside_circle(void)
{
    double x = (double) rand() / RAND_MAX;
    double y = (double) rand() / RAND_MAX;
    return sqrt(x*x + y*y) <= 1.0;
}

int main(void)
{
    srand(42);

    unsigned long points_inside_circle = throw_random_points_into_circle_with_assembly();
    double secret = 4.0 * points_inside_circle / RAND_POINTS_TOTAL;
    printf("The secret value is %.2f\n", secret);

    return 0;
}
