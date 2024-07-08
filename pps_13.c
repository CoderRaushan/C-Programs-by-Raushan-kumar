#include<stdio.h> //Q13
int main()
{
	int x,units;
	x = units;
	printf("enter the unit consumed = ");
	scanf("%d",&x);
	if(x<=100){
		printf("bill is : %f",x*2.50);
	}
	else if(x>100&&x<=200){
		printf("bill is : %f",100*2.50+(x-100)*3.50);
	}
	else if(x>200&&x<=300){
		printf("bill is : %f",100*2.50+100*3.50+(x-200)*4.50);
	}
	else {
		printf("bill is %f",100*2.50+100*3.50+100*4.50+(x-300)*5.50);
	}
	return 0;
}