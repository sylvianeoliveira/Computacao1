/* ftell example : getting size of a file */
#include <stdio.h>

int main(void){
    FILE * pFile;
    long size;

    pFile= fopen("myfile.txt","rb");
    if (pFile == NULL){
        perror("Error opening file.");
    }

    else{
        fseek(pFile , 0, SEEK_END); /*go to the end of file*/
        size= ftell(pFile);
        fclose (pFile);
        printf(" Sizeof myfile.txt: %ld bytes .\n", size);
    }

    return 0;
}