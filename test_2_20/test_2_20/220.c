#include <stdio.h>
/*void muin()
{
	printf("**************************\n");
	printf("**1.add  2.jian  3.cheng**\n");
	printf("**4.chu          0.�˳� **\n");
	printf("**************************\n");
}
int  add(int x, int y)
{
	return x + y;
}
int  jian(int x, int y)
{
	return x - y;
}
int  cheng(int x, int y)
{
	return x * y;
}
int  chu(int x, int y)
{
	return x / y;
}
 Clcs(int (*pf)(int, int))
{
	 int x = 0;
	 int y = 0;
	 printf("������\n");
	 scanf_s("%d%d", &x, &y);
	 printf("%d", pf(x, y));
}
int main()
{
	int input = 0;
	do
	{
		muin();
		printf("������->\n");
		scanf_s("%d",&input);
		switch (input)
		{
		case 1:
				Clcs(add);
				break;
		case 2:
			Clcs(jian);
			break;
		case 3:
			Clcs(cheng);
			break;
		case 4:
			Clcs(chu);
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	
	return 0;
}*/
void muin()
{
	printf("**************************\n");
	printf("**1.add  2.jian  3.cheng**\n");
	printf("**4.chu          0.�˳� **\n");
	printf("**************************\n");
}
int  add(int x, int y)
{
	return x + y;
}
int  jian(int x, int y)
{
	return x - y;
}
int  cheng(int x, int y)
{
	return x * y;
}
int  chu(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pf[])(int,int) = {0,add,jian,cheng,chu};
	do
	{
		muin();
		printf("������\n");
		scanf_s("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("����������ֵ\n");
			scanf_s("%d%d",&x,&y);
			int ret = pf[input](x, y);
			printf("%d",ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else

		{
			printf("�������\n");
		}
	} while (input);
	return 0;
}