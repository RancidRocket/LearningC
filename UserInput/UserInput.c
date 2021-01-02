#include <stdio.h>
#include <stdlib.h>

int main()
{

	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("You are %d years old \n", age);

	double gpa;
	printf("Enter your GPA: ");
	scanf("%lf", &gpa);
	printf("You're GPA is %lf \n", gpa);	

	char name[20];
	printf("Please enter your name: ");
	scanf("%s", &name);
	printf("Your name is %s \n", name);

	char grade[1];
	printf("Enter your grade: ");
	scanf("%c", &grade);
	printf("Your grade is %c \n ", grade);

return 0;
}

