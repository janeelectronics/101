#include<stdio.h>
#include<math.h>
 int main ()
{
    float r, h;
    float volume, curved_surface_area, total_surface_area;
    const double PI = 3.14159

    printf("Enter the radius of the cylindrical tank: ");
    scanf("%f", &r); 
    printf("Enter the height of the cylindrical tank: ");
    scanf("%f", &h);

    volume = PI * r * r * h;
    curved_surface_area = 2 * PI * r * h; 
    total_surface_area = 2 * PI * r * (r + h);

    printf("Volume of the cylindrical tank: %f\n", volume);
    printf("Curved Surface Area of the cylindrical tank: %f\n", curved_surface_area);
    printf("Total Surface Area of the cylindrical tank: %f\n", total_surface_area);

    return 0;
}

