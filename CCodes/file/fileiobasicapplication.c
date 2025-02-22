#include <stdio.h>

int main(int argc, char** argv) 
{

	FILE * pFile=NULL;

	    pFile=fopen("transflower.txt","w");
	        if(pFile !=NULL)
            {
		        fprintf(pFile, "Welcome to Transflower Learning Pvt. Ltd \n");
		        fclose(pFile);
            }
	char buffer[150];
	    pFile=fopen("transflower.txt","r");
	        if(pFile !=NULL)
            {
		        fgets(buffer, sizeof(buffer),pFile);
 		        printf("%s", buffer);
		        fclose(pFile);
	        }
	return 0;
}