#include <stdio.h>
#include <string.h>
#include <ctype.h>
void userRequest();
int main(int argc, char const *argv[]) {
  int nc = 0;
  int word = 0;
  char str[] = "this is a test string";
  int len = strlen(str);
  int i;

  void userRequest()
    {
      holder = strtok(str,",.-");
      while (holder != NULL)
      {
          for(j=0; j < len ; j++)
          {
            length[j]= holder[i]
          }
      }
    }

  for(i=0; i < len ; i++)
  {
    if (isspace(str[i])) {
      ++word;
      continue;
    }
    ++nc;
  }
  if (len>0) word++;
   printf("number of letters  is %d number of words  %d\n",nc,word );
   userRequest();



    return 0;
}
