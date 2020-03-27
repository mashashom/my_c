#include <stdio.h>

int count_digits(char *s){
int i, j, dig=0;

  for (i=0; i<10; i++){
  for (j = 48; j < 58; j++)
   if (s[i]==j){
        dig++;
   }
   }
return dig;
}

int main(){
char s[10];

printf( "Vvedite stroku: " );
fgets( s, 10, stdin );
printf("kolichestvo chisel:%d", count_digits(s));

return 0;
}
