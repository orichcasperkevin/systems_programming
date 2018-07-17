#include <stdio.h>
#include <string.h>
int main()
{
    /*declare and initialise variable*/
    char message[10][150],buffer[150];
    int i=0;
    FILE *file_in;
    file_in=fopen("filename.txt", "r");
    /*stores and prints the data from the string*/
    while(fgets(buffer,150,file_in)){
        strcpy(message[i],buffer);
        printf("Line %d: %s",i,message[i]);
        i++;
    }
    getchar();
    return 0;
}
