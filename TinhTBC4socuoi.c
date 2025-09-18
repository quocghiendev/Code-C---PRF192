#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int x,k,tong=0;
	do {
		scanf("%d",&x);
	}while (x<5);
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    for(k=x-3;k<=x;k++){
    	tong+=k;
	}
	printf("%.1f",(float)tong/4);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}
