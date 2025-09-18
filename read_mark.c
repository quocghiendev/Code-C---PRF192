#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	float d;
	 do {
        scanf("%f", &d); // thuc hien cong viec nay 
    } while (d < 0 || d > 10); // trong khi cai nay dung 
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE

    if (d>=9) printf ("Excellent");
    else if (d>=8) printf ("Good");
    	else if (d>=6.5) printf ("Average Good");
    		else if(d>=5) printf ("Average");
    			else printf ("Weak");
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
