#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int fd;
  fd = open("filename.txt",O_RDWR|O_CREAT);
  if (fd == -1) {
    perror("openerror");
  }
  else
  {
    printf("file created successfully\n" );
  }


  // reading from the file.
  char buf[5];int fd1;
  fd1 = read(fd,buf,5);
  if (fd1 == -1) {
    perror("read error");
  }
  else
  {
    printf("file read successfully.%s\n",buf );
  }
  //writin to the file
  char str[5] = "acde";
  write(fd,str,strlen(str));

  int fd3;
  char str2[11] = "appenda";
  fd3 = open("filename.txt",O_RDWR|O_APPEND);
  write(fd3,str2,strlen(str2));

  //deleting files.
  int ret = unlink("delete.txt");
   if(ret == -1 )
   {
     perror("delete errror");
   }
   else
   {
     printf("file deleted successfully\n" );
   }
  return 0;
}
