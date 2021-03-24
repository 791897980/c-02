#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//{
//	printf("are you ok??");
//	return 0;
//}
//int main()
//{
//	printf("c:\\test\\32\\test.c");
//	return 0;
////}
//int main()
//{
//	//printf("%c\n", '\'');
//	printf("%s\n", "\'");
//	return 0;
//}
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));//\32是两个8进制数字、//32作为8进制代表的那个十进制数字，作为ASCII码，对应的字符。
//	//32-10进制26--》作为ASCII码值代表的字符
//	printf("%c\n", '\x61');
//	return 0;
//}// /**/ 这种注释不支持嵌套
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码, %d\n", line);
//		line++;
//
//	}
//	if(line>=20000)
//		printf("好offer");
//
//
//	return 0;
//}
//int Add(int x, int y)//自定义函数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//
//	//sum = num1 + num2;
//	//sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//
	//定义一个存放10个整数数字的数组
	//char ch[20];
	//float arr2[5];
	//printf("%d\n", arr[4]);//下标的形式可以访问元素
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 5 % 2;// 取模
//		printf("%d\n", a);
//	return 0;

//int main()
//{
	////移位（2进制位）操作符
	////<<左移操作符
	////>>右移操作符
	//int a = 1;
	////整型1占4个字节-32个bit位
	////00000000000000000000000000000001
	//int b = a<<2;
	//printf("%d\n", b);
	//printf("%d\n", a);//a不变 

	//（2进制位）位操作
	//&按位与
	//|按位或
	//^按位异或
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//异或：对应的二进制位相同，则为0，对应的二进制位相异，则为1.
//	printf("%d\n", c);
//
//	return 0;
//}
//	a = a + 10  a += 10…… &= -= ……  //复合赋值符
//单目操作符
//双目操作符
//三目操作符
int main()
{
	////int a = 10;
	////int b = 20;
	////a + b;//+操作符（双目）有两个操作数
	////c语言中0-假 非0-真
	//int a = 10;
	///*int a = -2;
	//int b = -a;
	//int c = +3;*/
	//printf("%d\n", sizeof a);//4  //sizeof计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof (a));//括号可以省略（仅限变量）
	////printf("%d\n", !a);
	int sz = 0;
	int arr[10] = { 0 };//10个整型元素的数组
	printf("%d\n", sizeof (arr));
	//计算数组中的元素个数
	//个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
		printf("sz = %d\n", sz);











	return 0;
}






























