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
//	//printf("%d\n", strlen("c:\test\32\test.c"));//\32������8�������֡�//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII�룬��Ӧ���ַ���
//	//32-10����26--����ΪASCII��ֵ������ַ�
//	printf("%c\n", '\x61');
//	return 0;
//}// /**/ ����ע�Ͳ�֧��Ƕ��
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���, %d\n", line);
//		line++;
//
//	}
//	if(line>=20000)
//		printf("��offer");
//
//
//	return 0;
//}
//int Add(int x, int y)//�Զ��庯��
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
	//����һ�����10���������ֵ�����
	//char ch[20];
	//float arr2[5];
	//printf("%d\n", arr[4]);//�±����ʽ���Է���Ԫ��
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
//	int a = 5 % 2;// ȡģ
//		printf("%d\n", a);
//	return 0;

//int main()
//{
	////��λ��2����λ��������
	////<<���Ʋ�����
	////>>���Ʋ�����
	//int a = 1;
	////����1ռ4���ֽ�-32��bitλ
	////00000000000000000000000000000001
	//int b = a<<2;
	//printf("%d\n", b);
	//printf("%d\n", a);//a���� 

	//��2����λ��λ����
	//&��λ��
	//|��λ��
	//^��λ���
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//��򣺶�Ӧ�Ķ�����λ��ͬ����Ϊ0����Ӧ�Ķ�����λ���죬��Ϊ1.
//	printf("%d\n", c);
//
//	return 0;
//}
//	a = a + 10  a += 10���� &= -= ����  //���ϸ�ֵ��
//��Ŀ������
//˫Ŀ������
//��Ŀ������
int main()
{
	////int a = 10;
	////int b = 20;
	////a + b;//+��������˫Ŀ��������������
	////c������0-�� ��0-��
	//int a = 10;
	///*int a = -2;
	//int b = -a;
	//int c = +3;*/
	//printf("%d\n", sizeof a);//4  //sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof (a));//���ſ���ʡ�ԣ����ޱ�����
	////printf("%d\n", !a);
	int sz = 0;
	int arr[10] = { 0 };//10������Ԫ�ص�����
	printf("%d\n", sizeof (arr));
	//���������е�Ԫ�ظ���
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
		printf("sz = %d\n", sz);











	return 0;
}






























