#include <stdio.h>
#define CPAN_TEXT1      2
#define CPAN_TEXT2      4
#define CPAN_TEXT3      8
#define CPAN_TEXT4      16
#define CPAN_TEXT5      32
int main()
{

	int CPAN_Value1 = CPAN_TEXT1 | CPAN_TEXT2 | CPAN_TEXT3; //14
	int CPAN_Value2 = CPAN_TEXT5 | CPAN_TEXT4 | CPAN_TEXT1; //50
	int CPAN_Value3 = CPAN_TEXT4 | CPAN_TEXT3;              //24
	int CPAN_Value4 = CPAN_TEXT5 | CPAN_TEXT3 | CPAN_TEXT1 | CPAN_TEXT2;//46
	int CPAN_Value5 = CPAN_TEXT3 | CPAN_TEXT5 | CPAN_TEXT2; //44
	int CPAN_Value6 = CPAN_TEXT1;//2
	//ע�� & �� && ������
	//ʹ���ʽΪ��
	if (CPAN_Value1 & CPAN_TEXT1 && CPAN_Value1 & CPAN_TEXT2 && CPAN_Value1 & CPAN_TEXT3)
	{
		printf("CPAN_Value1 ֵȫ��ƥ��\n");
	}
	else printf("CPAN_Value1 ֵ��δ��ȫƥ��\n");
	//���ʽΪ��                                   ����˳��ͬҲ����
	if (CPAN_Value2 & CPAN_TEXT5 && CPAN_Value2 & CPAN_TEXT1 && CPAN_Value2 & CPAN_TEXT4)
	{
		printf("CPAN_Value2 ֵȫ��ƥ��\n");
	}
	else printf("CPAN_Value2 ֵ��δ��ȫƥ��\n");
	//���ʽΪ��       CPAN_TEXT4 ֵ��ͬ����
	if (CPAN_Value3 & CPAN_TEXT2 && CPAN_Value3 & CPAN_TEXT3)
	{
		printf("CPAN_Value3 ֵȫ��ƥ��\n");
	}
	else printf("CPAN_Value3 ֵ��δ��ȫƥ��\n");
	//Ϊ��  ��һ��ֵҲ����
	if (CPAN_Value4 & CPAN_TEXT1 && CPAN_Value4 & CPAN_TEXT2 && CPAN_Value4 & CPAN_TEXT3)
	{
		printf("CPAN_Value4 ֵȫ��ƥ��\n");
	}
	else printf("CPAN_Value4 ֵ��δ��ȫƥ��\n");
	//Ϊ��  ��һ��ֵ CPAN_TEXT3
	if (CPAN_Value5 & CPAN_TEXT4 && CPAN_Value5 & CPAN_TEXT5 && CPAN_Value5 & CPAN_TEXT2 && CPAN_Value5 & CPAN_TEXT3)
	{
		printf("CPAN_Value5 ֵȫ��ƥ��\n");
	}
	else printf("CPAN_Value5 ֵ��δ��ȫƥ��\n");
	//��ȷ
	if (CPAN_Value6 & CPAN_TEXT1)
	{
		printf("CPAN_Valu6e ֵȫ��ƥ��\n");
	}
	else printf("CPAN_Value6 ֵ��δ��ȫƥ��\n");

	return 0;
}