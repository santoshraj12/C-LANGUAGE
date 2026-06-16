#include <stdio.h>

int main(){
	FILE *fp;
	char text[100];
	
	fp=fopen("student.txt","r");
	
	fgets(text,100,fp);
	
	fprintf("%s",text);
	
	fclose(fp);
}
