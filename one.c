#include"stdio.h"


main(){
	char name[25];
	int score;
	FILE *fpt; //*** create variable for file
	
	printf("Enter name : ");
	scanf("%s",&name);
	printf("Enter score : ");
	scanf("%d",&score);
	
	//create file
	
	fpt = (fopen("C:\\Users\\it404\\Desktop\\C_Ep8\\ITSubject.txt","w")); //w-write, a-append, r-read
	
	//check open file
	if(fpt == NULL){
		printf("Error open file...\n");
		return;
	}
	
	//write data to file
	fprintf(fpt,"Name : %s\nScore : %d\n\n",name,score);
	
	//close file
	fclose(fpt);
	
	getch();
}
