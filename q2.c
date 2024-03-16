#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){
	int n, sumEven = 0, sumOdd = 0;
	printf("Enter the total number of values:");
	scanf("%d", &n);
	int a[n];
	printf("Enter the value in array:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	pid_t p = fork();
	if (p > 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 == 0)
				sumEven = sumEven + a[i];
		}
		printf("Parent process (Sum of even numbers) \n");
		printf("%d\n", sumEven);
	}
	// If n is 0 i.e. we are in child process
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] % 2 != 0)
				sumOdd = sumOdd + a[i];
		}
		printf("Child process (Sum of odd numbers) \n");
		printf("%d\n", sumOdd);
	}
	return 0;
}