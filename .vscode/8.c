#include<stdio.h>
int main()
{
	int length, width;;
	scanf("%d %d", &length, &width);

	int area, perimeter;

	area = length * width;
	perimeter = 2* (length + width);
	
	printf("%d %d", area, perimeter);
	return 0;
}
