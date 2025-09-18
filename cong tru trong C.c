# include <stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d / %d ",a,b);
	// co the dung a * 1.0 de chuyen a thanh float roi *a voi b thi b se co dang float
	printf("= %f",(float)a/b);
	return 0;
}