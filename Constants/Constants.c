#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num = 5;
	printf("%d \n", num);
	num = 8;
	printf("%d \n", num);

	const int NUM2 = 5;
	printf("%d \n", NUM2);
      //NUM2 = 8;
	printf("%d \n", NUM2);
/*
 Uncommenting NUM2 = 8; will result in the compiler spitting this error:

	 Constants.c: In function ‘main’:
	Constants.c:12:12: error: conflicting type qualifiers for ‘NUM2’
  	 12 |  const int NUM2 = 5;
	      |            ^~~
	Constants.c:7:6: note: previous definition of ‘NUM2’ was here
	    7 |  int NUM2 = 5;
	      |      ^~~
	Constants.c:14:6: error: assignment of read-only variable ‘NUM2’
	   14 |  NUM2 = 8;
    	      |   

 Because in the second example, NUM2 is a const (constant) and is read only, and as such cannot be modified.

 NOTE: Tradition is to put the names of constant variables in all capitals

*/
	
	//Data printed through input in the script (i.e, without a variable) is also considered a constant, as it cannot be modified without changing it's value in the code.
	printf("Hello \n");
	printf("%d \n", 70);
	printf("%c \n", 'F');
return 0;
}
