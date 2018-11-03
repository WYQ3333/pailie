#include<stdio.h>
#include<Windows.h>


int Pailienum(int size)
{
	if (size == 0)
	{
		return 0;
	}
	if (size == 1)
	{
		return 1;
	}
	int ret = size;
	int num = 1;
	for (ret; ret > 0; ret--)
	{
		num *= ret;
	}
	return num;
}

void ThePailiezuhe(int *array1, int array1Size,int *index1, int *array2, int array2Size,int *index2)
{
	
}

void printAllsort(int *array1, int array1Size, int *array2, int array2Size)
{
	int ret = Pailienum(array1Size+array2Size);
	printf("所有排列的个数为：%d\n", ret);
	printf("所有的排列组合为：");
	int index1 = array1Size;
	int index2 = array2Size;
	ThePailiezuhe(array1, array1Size, &index1, array2, array2Size, &index2);
}


int main()
{
	int array1[] = { 1, 2 };
	int array2[] = { 3, 4 };
	int array1Size = sizeof(array1) / sizeof(array1[0]);
	int array2Size = sizeof(array2) / sizeof(array2[0]);
	printAllsort(array1,array1Size,array2,array2Size);
	system("pause");
	return 0;
}