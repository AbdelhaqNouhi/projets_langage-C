

#include<stdio.h>
#include<stdlib.h>
double  Ad(double x, double y)
{
    double r;

    r = x+y;
    return r;
}


int	main()
{
	double i;
	double j;
	double res;
	int choice;

start:


	printf("please enter first number:");
	scanf("%lf", &i);

	do
	{
		printf("please choice the process you want:\n");
		printf("the choice 1:Ad:'+'\nthe choice 2:Mu:'x'\nthe choice 3:So:'-'\nthe choice 4:Di:'/'\nthe choice 5:Rest:\n");
		scanf("%d", &choice);
	}while(choice  < 0 ||  choice > 5);

	printf("please enter last number:");
        scanf("%lf", &j);


	switch(choice)
	{
		case 1:
			res = Ad(i,j);

			break;
		case 2:
			res = i*j;

			 break;
		case 3:

			res = i-j;

			break;
		case 4:
			while(choice == 4 && j == 0)
			{
				printf("please enter another number:");
				scanf("%lf", &j);
			}

			res = i/j;

			break;
		case 5:
			res = i -(int) i/j*j;

			break;
	default:
		break;
	}

	printf("%f\n", res);

	goto start;
}
