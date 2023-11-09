#include <stdio.h>
#include <string.h>

int main(void) {
   FILE* fp;
   char str[100];
   int i;
   fp=fopen("sample.txt","w");
   
   for (i=0;i<3;i++);
   {
  	printf("input a word");
   	scanf("%s",str); //&필요없음. 자체적으로 포인터
  	fprintf(fp,"%s\n",str); 
   
	}
   
   fclose(fp);
   
   return 0;
}

   
