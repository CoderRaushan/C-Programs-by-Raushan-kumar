#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	char s1[99],s2[99];
	printf("Enter string 1: ");
	scanf("%s",s1);
	a=strlen(s1);
	printf("Enter string 2: ");
	scanf("%s",s2);
	b=strlen(s2);
	printf("\n\nFinding lengths of both strings:");
	printf("\nLength of string 1 is: %d",a);
	printf("\nLength of string 2 is: %d",b);
	if (strcmp(s1,s2)==0){
	    printf("\nStrings are same.");
	}
	else{
	    printf("\nStrings are not same.");
	}
	printf("\n\nAdding string 2 at end of string 1:");
	printf("\nThe concatenated string is: %s\n",strcat(s1,s2));
	printf("\n\nCopying string 2 in string 1:");
	strcpy(s1,s2);
	printf("\nThe first string is: %s\nThe second string is: %s",s1,s2);
	printf("\n\nRaushan\n2217063");
}