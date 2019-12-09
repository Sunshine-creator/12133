#pragma warning(disable : 4996)
#include<stdio.h>
#include<CoreWindow.h>
#include<math.h>
void DigitSum(int n)
{
	
	if (n > 9)
	{
		printf(n / 10);
	}
    printf(n % 10);

   
}

int main()
{
	int num =1234;
	DigitSum(1234);
	system("pause");
	return 0;
}