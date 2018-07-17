#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <string.h>

int main()
{
    char s[201];
    int n,f = open("text.dat", O_RDWR | O_CREAT);
    while (fgets(s,200,stdin) != NULL)
        write(f, s,sizeof(s));
    close(f);
    return 0;
}
