
#include<unistd.h>
#include<stdio.h>

int main()
{
	int clien[100];
	int choice;
	int i = 0;
	char b[10][11] = {"break fast","lunch", "dinner"};
	char c[10][10] = {"bad", "midil", "good", "very Good"};

	do
	{
		printf("hello dear ");
		printf("please select the number correspond to your meal:\n1: Break fast\n2: lunch\n3:Dinner\n");
		scanf("%d", &choice);

		printf("enter you'r feedback:\n1: Bad\n2: Midle\n3: Good\n4: Very Good\n");
		scanf("%d", &clien[i]);

		printf("thank you for you'r feedback : %s is %s\n ", b[choice - 1] , c[clien[i]-1]);
		i++;
	}
	while(i < 100);
	return 0;
}
