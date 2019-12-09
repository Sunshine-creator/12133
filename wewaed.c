

# define N 10
#include<stdio.h>
# include<Windows.h>
# pragma warning (disable :4105)
int main()
{
	int i, j, k,max;
	static int a[N];
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	max = a[0];
	for (i = 0; i < N; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}