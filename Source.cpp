#include <stdio.h>
#include <math.h>
#include <cstdlib>

double func(int* arr, int length)
{
	int x;
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	x = sum / length;
	return x;
}

double func(double* arr, int length)
{
	double x;
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	x = sum / length;
	return x;
}

int main(void)
{
	int arr[10];
	double min = 0;
	double max = 0;
	int b = 0;
	int c = 0;
	double x;
	double y;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			b = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			c = i;
		}
	}
	int a;
	int z = 0;
	if (b > c)
	{
		a = b - c;
	}
	if (c > b)
	{
		a = c - b;
	}
	double arr1[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int arr2[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	if (b > c)
	{
		for (int i = c; i <= b; i++)
		{
			arr1[z] = arr[i];
			arr2[z] = arr[i];
			z++;
		}
	}
	if (c > b)
	{
		for (int i = b; i <= c; i++)
		{
			arr1[z] = arr[i];
			arr2[z] = arr[i];
			z++;
		}
	}
	int u;
	u = a - z;
	x = func(arr1, z);
	y = func(arr2, z);
	printf("%f", x);
	printf("\n%f\n", y);
	system("pause");
	return 0;
}
