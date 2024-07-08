#include <stdio.h>
int main()
{
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Subtraction \n");
	printf("Enter 3 for Multiplication \n");
	printf("Enter your choice: ");
	int c,n1,n2,sum,sub,m;
	scanf("%d",&c);
	printf("Enter two numbers: \n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	switch (c)
	{
		case 1:
			sum=n1+n2;
			printf("Sum is: %d",sum);
			break;
			case 2:
				sub=n1-n2;
				printf("Subtraction is: %d",sub);
				break;
				case 3:
					m=n1*n2;
					printf("Multiplication is: %d",m);
					break;
					default:
					printf("Wrong choice input");
					
	}
}