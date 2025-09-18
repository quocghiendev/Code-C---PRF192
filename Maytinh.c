# include <stdio.h>
main(){
	double x,y,kq;
	char dau,tp;
	printf("nhap so thu 1 can tinh: ");
	scanf("%lf",&x);
	printf("nhap so thu 2 can tinh: ");
	scanf("%lf",&y);
	printf("dau cong la : c\n");
	printf("dau tru la : t\n");
	printf("dau nhan la : n\n");
	printf("dau chia la : h\n");
	printf("phep tinh ban muon thuc hien: ");
	scanf("%*c%c%*c",&dau);
	if (dau == 'c'){
		kq = x + y;
		printf("ban muon ket qua co thap phan khong? ");
		scanf("%c",&tp);
		if (tp == 'c') printf("ket qua la: %lf",kq);
		if(tp == 'k') printf("ket qua la: %d",(int)kq);
	}if (dau == 't'){
		kq = x - y;
		printf("ban muon ket qua co thap phan khong? ");
		scanf("%c",&tp);
		if (tp == 'c') printf("ket qua la: %lf",kq);
		if(tp == 'k') printf("ket qua la: %d",(int)kq);
	}if (dau == 'n'){
		kq = x * y;
		printf("ban muon ket qua co thap phan khong? ");
		scanf("%c",&tp);
		if (tp == 'c') printf("ket qua la: %lf",kq);
		if(tp == 'k') printf("ket qua la: %d",(int)kq);
	}if (dau == 'h'){
		kq = x / y;
		printf("ban muon ket qua co thap phan khong? ");
		scanf("%c",&tp);
		if (tp == 'c') printf("ket qua la: %lf",kq);
		if(tp == 'k') printf("ket qua la: %d",(int)kq);
	}
	return 0;
} 