
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *arr1[] = {"Hibot", "HENTAI!", "Lolicon", "Loli", "Kakao", "talk", "stop", "hawawa", "scare", "eromanga", "Ctrl+a 09", "hak", "haro-?"},
*arr2[] = {"hawawa", "FBI", "OPEN", "UP", "!", "lolicon", "Je Seung", "Ppaeaeaeng", "Hawawa"};
void dream(char **param_1,int param_2)
{
  char cVar1;
  char *__src;
  ulong uVar2;
  ulong uVar3;
  char *__dest;
  char *__src_00;
  __src_00 = arr1[param_2 % 13];
  __src = arr2[(param_2 + 31) % 9];
  __dest = (char *)malloc(strlen(__src_00) + strlen(__src));
  *param_1 = __dest;
  strcpy(__dest,__src_00);
  strcat(__dest,".");
  strcat(__dest,__src);
  return;
}

int main(void)

{
  char *local_10 [2];
  dream(local_10,0xcad63);
  puts(local_10[0]);
  free(local_10[0]);
  return 0;
}
