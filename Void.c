#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void tong(int *x){
	*x = *x + 1;
}
int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int c;
	scanf("%d",&c);
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    tong(&c);
    printf("%d",c);

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
