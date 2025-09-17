#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int i1,i2,k,tong=0,dem=0;
	scanf("%d%d",&i1,&i2);
    

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE
    if(i1>=i2){
		for(k=i2;k<=i1;k++){
			tong=tong+k;
			dem=dem+1;
		}
	}else{
		for(k=i1;k<=i2;k++){
			tong=tong+k;
			dem=dem+1;
		}	
	}
	printf("%.2f",(float)tong/dem);
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}

