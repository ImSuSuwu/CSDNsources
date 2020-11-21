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
	//注意 & 和 && 的区别
	//使表达式为真
	if (CPAN_Value1 & CPAN_TEXT1 && CPAN_Value1 & CPAN_TEXT2 && CPAN_Value1 & CPAN_TEXT3)
	{
		printf("CPAN_Value1 值全部匹配\n");
	}
	else printf("CPAN_Value1 值并未完全匹配\n");
	//表达式为真                                   排列顺序不同也可以
	if (CPAN_Value2 & CPAN_TEXT5 && CPAN_Value2 & CPAN_TEXT1 && CPAN_Value2 & CPAN_TEXT4)
	{
		printf("CPAN_Value2 值全部匹配\n");
	}
	else printf("CPAN_Value2 值并未完全匹配\n");
	//表达式为假       CPAN_TEXT4 值不同不行
	if (CPAN_Value3 & CPAN_TEXT2 && CPAN_Value3 & CPAN_TEXT3)
	{
		printf("CPAN_Value3 值全部匹配\n");
	}
	else printf("CPAN_Value3 值并未完全匹配\n");
	//为真  少一个值也可以
	if (CPAN_Value4 & CPAN_TEXT1 && CPAN_Value4 & CPAN_TEXT2 && CPAN_Value4 & CPAN_TEXT3)
	{
		printf("CPAN_Value4 值全部匹配\n");
	}
	else printf("CPAN_Value4 值并未完全匹配\n");
	//为假  多一个值 CPAN_TEXT3
	if (CPAN_Value5 & CPAN_TEXT4 && CPAN_Value5 & CPAN_TEXT5 && CPAN_Value5 & CPAN_TEXT2 && CPAN_Value5 & CPAN_TEXT3)
	{
		printf("CPAN_Value5 值全部匹配\n");
	}
	else printf("CPAN_Value5 值并未完全匹配\n");
	//正确
	if (CPAN_Value6 & CPAN_TEXT1)
	{
		printf("CPAN_Valu6e 值全部匹配\n");
	}
	else printf("CPAN_Value6 值并未完全匹配\n");

	return 0;
}