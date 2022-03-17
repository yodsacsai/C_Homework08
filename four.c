#include"stdio.h"
#define l printf("------------------------------\n");
int n;
char name[50];
double price, sale;
showheader(){
	l
	printf("    Program Product Sale\n");
	l
}

input1(){
	printf("Enter number product : ");
	scanf("%d",&n);
	l
}

input2(){
	int i;
	for(i = 1;i <= n;i++){
		printf("Product %d\n",i);
		printf("Enter name : ");
		scanf("%s",&name);
		printf("Enter price : ");
		scanf("%lf",&price);
		sale = price * 30 / 100;
		printf("Sale price 30%% : %.2lf\n\n",sale);
		save();
	}
	l
}

save(){
	FILE *fpt;
	
	fpt = (fopen("C:\\ProductSAU\\product.txt","a"));
	
	if(fpt == NULL){
		printf("Error open file...\n");
		return;
	}
	
	fprintf(fpt,"Name : %s\nPrice : %.2lf\nSale : %.2lf\n\n",name,price,sale);
	fclose(fpt);
}

main(){
	showheader();
	input1();
	input2();
	
	
	
	getch();
}

