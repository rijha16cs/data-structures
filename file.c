#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp_usn,*fp_name,*fp_out;
	char usn[50],name[50];
	fp_usn=fopen("usn.txt","r");
	fp_name=fopen("name.txt","r");
	fp_out=fopen("output.txt","w");
	
	if(fp_usn==NULL||fp_name==NULL)
	{
		printf("error in opening file");
		exit(0);
	}
	
	fprintf(fp_out,"student name \t USN");
	while(1)
	{
		fscanf(fp_name,"%s",name);
		fscanf(fp_usn,"%s",usn);
		
		if(!feof(fp_name) && !feof(fp_usn))
		{
			fprintf(fp_out,"\n%s\t%s",name,usn);
		}
		else
		{
			break;
		}
	}
	
	fclose(fp_usn);
	fclose(fp_name);
	fclose(fp_out);
	return 0;
}
