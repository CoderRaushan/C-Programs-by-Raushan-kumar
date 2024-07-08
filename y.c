#include<stdio.h>
int main()
{
	
	char sub[8][25]={"Maths","Chemistry","PPS","English","Chemistry Lab","PPS Lab","English Lab","Manufacturing Practices"};
	int credit[8]={4,4,4,3,1,1,1,2};
	int gc[8];
	float sumgc=0,sumc=0;
	
	float marks[10];
	int grade[10];
	float percent[10];
	printf("Enter Marks out of 100.\n\n");
	for (int i=0;i<8;i++){
		printf("Enter your marks in %s: ",sub[i]);
		scanf("%f",&marks[i]);
		if (i==3){
			printf("\nEnter Marks out of 50.\n");
		}
	}
	for (int i=0;i<8;i++){
		if (i<=3){
	    	percent[i]=marks[i];
		}
	    else{
	        percent[i]=marks[i]*2;
	    }
	    if (percent[i]>=90)
	         grade[i]=10;
	    else if(percent[i]>=80 && percent[i]<90)
	          grade[i]=9;
	    else if(percent[i]>=70 && percent[i]<80)
	          grade[i]=8;
	    else if(percent[i]>=60 && percent[i]<70)
	          grade[i]=7;
	     else if(percent[i]>=50 && percent[i]<60)
	          grade[i]=6;
	     else if(percent[i]>=40 && percent[i]<50)
	          grade[i]=5;
	     else if(percent[i]>=30 && percent[i]<40)
	          grade[i]=4;
	     else if(percent[i]>=20 && percent[i]<30)
	          grade[i]=3;
	     else if(percent[i]>=10 && percent[i]<20)
	          grade[i]=2;
	     else if(percent[i]>=0 && percent[i]<10)
	          grade[i]=1;
	}
	for (int i=0;i<8;i++){
    	gc[i]=credit[i]*grade[i];
    	sumgc=sumgc+gc[i];
    	sumc=sumc+credit[i];
	}
	printf("\n\nYour SGPA for semester 1 is: %.2f",sumgc/sumc);
/*	
	for (int i = 0; i < 8; i++)
    {
       printf("%d  ", gc[i]);
    }*/
}
