#include <stdio.h>
#include <string.h>
#include <cstdlib>

double func(int* arr, int length)
{
    int x;
    int s = 0;
    int min;
    int max;
    int b = 0;
    int c = 0;
    int z = 0;
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < length; i++)
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
    if (b > c)
    {
        for (int i = c; i <= b; i++)
        {
            s += arr[i];
            z++;
        }
        x = s / z;
    }
    else 
    {
        for (int i = b; i <= c; i++)
        {
            s += arr[i];
            z++;
        }
        x = s / z;
    }
    return x;
}

double func(double* arr, int length)
{
    double x;
    double s = 0;
    double min;
    double max;
    int b = 0;
    int c = 0;
    int z = 0;
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < length; i++)
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
    if (b > c)
    {
        for (int i = c; i <= b; i++)
        {
            s += arr[i];
            z++;
        }
        x = s / z;
    }
    else
    {
        for (int i = b; i <= c; i++)
        {
            s += arr[i];
            z++;
        }
        x = s / z;
    }
    return x;
}

int main()
{
    int arr[10];
    double arr1[10];
    double x;
    double y;
    for (int i = 0; i < 10; i++)
    {
        scanf_s("%d", &arr[i]);
        arr1[i] = arr[i];
    }
    x = func(arr, 10);
    y = func(arr1, 10);
    printf("Your result:\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
    system("pause");
    return 0;
}