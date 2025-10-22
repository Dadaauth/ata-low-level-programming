#include <stdio.h>

/**
 * main - Menu-driven program to calculate areas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	float radius, length, width, base, height, area;
	const float PI = 3.14;

	printf("Menu:\n");
	printf("1. Calculate Area of Circle\n");
	printf("2. Calculate Area of Rectangle\n");
	printf("3. Calculate Area of Triangle\n");
	printf("4. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Enter the radius of the circle: ");
		scanf("%f", &radius);
		if (radius <= 0)
		{
			printf("Error: Radius must be positive.\n");
			return (1);
		}
		area = PI * radius * radius;
		printf("Area of Circle = %.2f\n", area);
		break;
	case 2:
		printf("Enter the length of the rectangle: ");
		scanf("%f", &length);
		printf("Enter the width of the rectangle: ");
		scanf("%f", &width);
		if (length <= 0 || width <= 0)
		{
			printf("Error: Dimensions must be positive.\n");
			return (1);
		}
		area = length * width;
		printf("Area of Rectangle = %.2f\n", area);
		break;
	case 3:
		printf("Enter the base of the triangle: ");
		scanf("%f", &base);
		printf("Enter the height of the triangle: ");
		scanf("%f", &height);
		if (base <= 0 || height <= 0)
		{
			printf("Error: Dimensions must be positive.\n");
			return (1);
		}
		area = 0.5 * base * height;
		printf("Area of Triangle = %.2f\n", area);
		break;
	case 4:
		printf("Exiting program.\n");
		break;
	default:
		printf("Invalid choice.\n");
		return (1);
	}

	return (0);
}
