#include<stdio.h>
int main()
{
while(1==1)
{
	int a,b,e,num,sub;
	float n1,n2,f,c;
	printf("no 1:addition\n");
	printf("no 2:odd or even\n");
	printf("no 3:subtraction\n");
	printf("no 4:multiplication\n");
	printf("no 5:division\n");
	printf("enter any number which is you want to operate: ");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("Enter two numbers");
		scanf("%f %f", &n1, & n2);
		c = n1+n2;
		printf("the sum is %f \n",c);
		break;
	case 2:
		printf("Enter the number\n");
		scanf("%d",&a);
		if (a%2==0)
			printf("given number is even number \n");
		else
			printf("given number is odd number \n");
		break;
	case 3:
		printf("Enter two numbers=");
		scanf("%d %d", &a, &b);
		sub = a - b;
		printf("the subtract of two number is %d \n",sub);
		break;
	case 4:
	printf("Enter two number");
	scanf("%d %d",&a,&b);
	e=a*b ;
	printf("the multiplication of two number is %d\n",e);
	break;
	case 5:
	printf("Enter the numbers");
	scanf("%f %f",&n1,&n2);
	f=n1/n2 ;
    printf("the division of two number is %f\n",f);
	default:
		printf("nothiing");
	}
	}
	return 0;
}

