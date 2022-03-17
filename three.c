#include"stdio.h"


main(){
	char ch;
	FILE *fpt;
	
	fpt = (fopen("C:\\Users\\it404\\Desktop\\C_Ep8\\ITSubject.txt","r"));
	
	if(fpt == NULL){
		printf("Error open file...\n");
		return;
	}
	//read data form file
	while((ch=getc(fpt)) != EOF){ //EOF = End of file
		printf("%c",ch);
	}
	
	
	getch();
}
