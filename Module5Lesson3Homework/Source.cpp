#include<stdio.h> 
#include<locale.h> 
#include<iostream> 

void task1()
{
	/*1. 1.	¬вести два массива действительных чисел, состо€щих из 9 и 7 элементов.
	—формировать третий массив из упор€доченных по возрастанию значений обоих массивов*/
	int i, A[9] = { 0 }, B[7] = { 0 }, C[16] = { 0 };
	int count1 = 0;

	printf("First array:\n");
	for (i = 0; i < 9; i++)
	{
		count1++;
		A[i] = 0 + rand() % 15;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nSecond array:\n");
	for (i = 0; i < 7; i++)
	{
		B[i] = 0 + rand() % 15;
		printf("B[%d] = %d\n", i, B[i]);
	}

	printf("\nNew array:\n");
	for (i = 0; i < count1; i++)
	{
		C[i] = A[i];
	}

	int j = 0;
	for (i = count1; i < 16; i++)
	{
		C[i] = B[j];
		j++;
	}

	int c;
	for (i = 0; i < 15; i++)
	{
		for (j = 14; j >= i; j--)
		{
			if (C[j] > C[j + 1])
			{
				c = C[j];
				C[j] = C[j + 1];
				C[j + 1] = c;
			}
		}
	}

	for (i = 0; i < 16; i++)
	{
		printf("C[%d] = %d\n", i, C[i]);
	}

	system("pause");
}

void task2()
{
	int i, R[9] = { 0 }, ind, max = 0;

	printf("Given array:\n");
	for (i = 0; i < 9; i++)
	{
		R[i] = 0 + rand() % 30;
		printf("R[%d] = %d\n", i, R[i]);
	}

	for (i = 0; i < 9; i++)
	{
		if (R[i] > max && R[i] > 0 && R[i] % 2 != 0)
		{
			max = R[i];
			ind = i;
		}
	}

	printf("\nThe max positive odd number is R[%d] = %d\n", ind, max);
	system("pause");
}




void task3()
{
	int i, A[9] = { 0 }, B[9] = { 0 };

	for (i = 0; i < 9; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nNew array:\n");
	for (i = 0; i < 9; i++)
	{
		B[i] = (A[i] / 10) + (A[i] % 10);
		printf("B[%d] = %d\n", i, B[i]);
	}


	system("pause");
}


void task4()
{

	int i, A[10] = { 0 }, sumEven = 0, sumOdd = 0, prod;

	for (i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 30;
		printf("A[%d] = %d\n", i, A[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			sumOdd += A[i];
		}
	}

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			sumEven += A[i];
		}
	}
	printf("\nSum of numbers with odd indexes is %d\n", sumOdd);
	printf("Sum of numbers with even indexes is %d\n", sumEven);

	prod = sumEven * sumOdd;
	printf("\nTheir production is %d\n", prod);

	system("pause");
}

void task5()
{
	int i, A[14] = { 0 }, count = 0;

	for (i = 0; i < 14; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
	}

	int c;
	for (i = 0; i < 7; i++)
	{
		c = A[i];
		A[i] = A[i + 7];
		A[i + 7] = c;
		count++;
	}

	printf("\nNew array:\n");
	for (i = 0; i < 14; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}
	printf("\nAmount of transpositions is %d\n", count);

	system("pause");
}

void task6()
{
	int i, A[10] = { 0 }, count = 0;

	for (i = 0; i < 10; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nLocal maximums:\n");
	for (i = 1; i < 9; i++)
	{
		if (A[i] > A[i + 1] && A[i] > A[i - 1])
		{
			count++;
			printf("A[%d] = %d\n", i, A[i]);
		}
	}
	if (count != 0)
		printf("\nThe amount of local maximums is %d\n", count);

	else
		printf("There is no local maximums\n");
	system("pause");
}

void task7()
{

	int i, A[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 10;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nDecreasing seqeunce:\n");
	for (i = 0; i < 9; i++)
	{
		if (A[i] > A[i + 1] && A[i + 1] > A[i + 2])
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
		else if (A[i] > A[i + 1] && A[i + 1] <= A[i + 2])
		{
			printf("A[%d] = %d\n", i, A[i]);
			printf("A[%d] = %d\n\n", i + 1, A[i + 1]);
		}
	}


	system("pause");
}

void task8()
{
	int i, A[10] = { 0 }, B[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nNew array:\n");
	for (i = 0; i < 10; i++)
	{
		B[i] = (A[i] / 10) - (A[i] % 10);
		printf("B[%d] = %d\n", i, B[i]);
	}


	system("pause");
}


void task9()
{
	int i, A[10] = { 0 };

	for (i = 0; i < 10; i++)
	{
		A[i] = 0 + rand() % 10;
		printf("A[%d] = %d\n", i, A[i]);
	}

	int count = 0;
	printf("\nIncreasing seqeunces:\n");
	for (i = 0; i < 9; i++)
	{
		if (A[i] < A[i + 1] && A[i + 1] < A[i + 2])
		{
			printf("A[%d] = %d\n", i, A[i]);
		}
		else if (A[i] < A[i + 1] && A[i + 1] >= A[i + 2])
		{
			count++;
			printf("A[%d] = %d\n", i, A[i]);
			printf("A[%d] = %d\n\n", i + 1, A[i + 1]);
		}
	}

	printf("Amount of increasing sequences is %d\n", count);
	system("pause");
}

void task10()
{
	int i, A[10] = { 0 }, B[10] = { 0 }, max1 = 0, max2 = 0, maxInd1, maxInd2;

	printf("First array:\n");
	for (i = 0; i < 10; i++)
	{
		A[i] = 10 + rand() % 90;
		printf("A[%d] = %d\n", i, A[i]);
		if (A[i] > max1)
		{
			max1 = A[i];
			maxInd1 = i;
		}
	}
	printf("\The max number in the first array is %d\n", max1);

	printf("\nSecond array:\n");
	for (i = 0; i < 10; i++)
	{
		B[i] = 10 + rand() % 90;
		printf("B[%d] = %d\n", i, B[i]);
		if (B[i] > max2)
		{
			max2 = B[i];
			maxInd2 = i;
		}
	}
	printf("\The max number in the second array is %d\n", max2);

	int c;
	c = A[maxInd1];
	A[maxInd1] = B[maxInd2];
	B[maxInd2] = c;

	printf("\nNew array 1:\n");
	for (i = 0; i < 10; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nNew array 2:\n");
	for (i = 0; i < 10; i++)
	{
		printf("B[%d] = %d\n", i, B[i]);
	}
	system("pause");
}

int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("¬ведите номер задани€: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	}

	printf("’отите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}