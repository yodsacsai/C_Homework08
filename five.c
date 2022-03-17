#include"stdio.h"
#define l printf("-----------------------\n");
int menu;
char id[10];
int midscore, finalscore, quizscore, totalscore;

showheader(){
	l
	printf("  Program Study Result\n");
	l
	showmenu();
}

showmenu(){
	printf("1) Calculate data\n");
	printf("2) Save data\n");
	printf("3) Read all data\n");
	printf("4) Exit\n");
	l
	printf("Select menu : "); scanf("%d",&menu);
	l
	check();
}

check(){
	switch(menu){
		case 1 : cal(); break;
		case 2 : save(); break;
		case 3 : read(); break;
		default : exitpro();
	}
}

cal(){
	system("cls"); //clear screen
	l
	printf("  Calculate Data \n");
	l
	printf("Enter ID : "); scanf("%s",&id);
	printf("Enter Midterm Score : "); scanf("%d",&midscore);
	printf("Enter Final score : "); scanf("%d",&finalscore);
	printf("Enter Quiz score : "); scanf("%d",&quizscore);
	totalscore = midscore + finalscore + quizscore;
	printf("Total is : %d\n",totalscore);
	if(totalscore >= 50){
		printf("PASS Exam\n\n");
	}else{
		printf("NOT PASS Exam\n\n");
	}
	printf("Please any key to menu...\n");
	l
	getch();
	system("cls");
	showheader();
	
}

save(){
	FILE *fpt;
	system("cls"); //clear screen
	l
	printf("  Input and save Data \n");
	l
	printf("Enter ID : "); scanf("%s",&id);
	printf("Enter Midterm Score : "); scanf("%d",&midscore);
	printf("Enter Final score : "); scanf("%d",&finalscore);
	printf("Enter Quiz score : "); scanf("%d",&quizscore);
	totalscore = midscore + finalscore + quizscore;
	printf("Total is : %d\n",totalscore);
	if(totalscore >= 50){
		printf("PASS Exam\n\n");
	}else{
		printf("NOT PASS Exam\n\n");
	}
	fpt = (fopen("C:\\SAU\\StudentResult.txt","a"));
	if(fpt == NULL){
		printf("Error open file...\n");
		return;
	}
	//fprintf(fpt,"ID : %s\nMidterm : %d\nFinal : %d\nQuiz : %d\nTotal : %d\n\n",id,midscore,finalscore,quizscore,totalscore);
	fprintf(fpt,"ID : %s\n",id);
	fprintf(fpt,"Midterm : %d\n",midscore);
	fprintf(fpt,"Final : %d\n",finalscore);
	fprintf(fpt,"Quiz : %d\n",quizscore);
	fprintf(fpt,"Total : %d\n\n",totalscore);
	fclose(fpt);
	printf("Please any key to menu...\n");
	l
	getch();
	system("cls");
	showheader();
}

read(){
	FILE *fpt;
	char ch;
	system("cls");
	l
	printf("  Read All Data\n");
	l
	fpt = (fopen("C:\\SAU\\StudentResult.txt","r"));
	if(fpt == NULL){
		printf("Error open file...\n");
		return;
	}
	while((ch=getc(fpt)) != EOF){ //EOF = End of file
		printf("%c",ch);
	}
	fclose(fpt);
	printf("Please any key to menu...\n");
	l
	getch();
	system("cls");
	showheader();
}

exitpro(){
	printf("Thank you for use program.\n");
	printf("Please any key to exit...\n");
	l
}

main(){
	showheader();
	
	
	
	
	getch();
}
