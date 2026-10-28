#include <stdio.h>
#include <math.h>
int main ()
{
    int x1, y1, x2, y2, d, m;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    m = (y1 + y2) / 2;

    printf("Distance between the two points: %d\n", d);
    printf("Midpoint of the line segment joining the two points: %d\n", m);

    return 0;

}