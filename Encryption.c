#include<stdio.h>
#include<stdlib.h>
int main()
{
	char inputfile[20],outputfile[20],ch;
	int numAscii;
	FILE *fd1,*fd2;
	printf("\n enter the name of file to be encrypted\n");
	scanf("%s",inputfile);
	printf("enter the name of the output file:\n");
	scanf("%s",outputfile);
	fd1=fopen(inputfile,"r");
	fd2=fopen(outputfile,"w");
	if(fd1==NULL){
		printf("input file doesnot exists\n");
		exit(0);
	}else{
		fd2=fopen(outputfile,"w");
		ch=fgetc(fd1);
		while(ch!=EOF){
			numAscii=(int)ch;
			numAscii=numAscii+5;
			fprintf(fd2,"%c",numAscii);
			ch=fgetc(fd1);
		}
		
	}
	fclose(fd2);
	fclose(fd1);
	printf("\n File is encrypted with name %s",outputfile);
	return 0;
}

