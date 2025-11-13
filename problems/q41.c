/*
WAP FOR Writing and Reading a File IN FILE HANDLING
*/

#include <stdio.h>
int main() {
    //create file
    FILE *fp;
    char str[100];
    fp = fopen("data.txt","w"); //open for writing

    //fallback condition
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    //writing to the file
    fprintf(fp, "Name: Rahul\n");
    fprintf(fp, "Roll NUmber: %d\n", 20);
    fprintf(fp, "Rahul is a good boy");

    fclose(fp); //closing the file

    fp = fopen("data.txt","r"); //opening for reading

    //printing to terminal what is written in the file
    while(fgets(str,100,fp)!=NULL){
        printf("%s", str);
    }

    fclose(fp); //closing file
    return 0;
}