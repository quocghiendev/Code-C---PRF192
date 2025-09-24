#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int smallest(int a,int b,int c){
	int min=a;
	if (min>=b) min = b;
	if (min>=c) min = c;
}
int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    printf("%d",smallest(a,b,c));

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
