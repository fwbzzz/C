 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
			int i;
			float sum = 0.0, temp = 0.0;
			for (i = 1; i <= 100; i++)
			{
				temp = pow(-1, i + 1);
				sum = sum + temp * 1 / i;
			}
			printf("sum is %f\n", sum);
			system("pause");
			return 0;
}