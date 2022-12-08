#include <stdio.h>
#include<string.h>
//int main()
//{
//	int arr1[] = { 0,2,4,8,10 };
//	int arr2[] = { 1,3,5,7,9 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr2[i]);
//	}
//	return 0;
int main()
{
	char a = "abcdef";
	int sz = sizeof(a);
	int len = strlen(a);
	printf("%d", len);
	return 0;
}