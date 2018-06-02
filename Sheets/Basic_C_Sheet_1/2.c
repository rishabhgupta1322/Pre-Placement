#include <stdio.h>

int main(){
	float marks;
	char grade='A';
	printf("Enter percentage marks of student: ");
	scanf("%f",&marks);
	if(marks>90)
		grade='A';
	else if(marks>80)
		grade='B';
	else if(marks>70)
		grade='C';
	else if(marks>60)
		grade='D';
	else if(marks>50)
		grade='E';
	else
		grade='F';
	printf("Grade of student is: %c\n",grade);
	return 0;
}
