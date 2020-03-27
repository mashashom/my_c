#include <stdio.h>

int nubmer_c(char *s, char c){
int i, j, dig=0;

  for (i=0; i<10; i++){
    if (s[i]==c)
 return i;
  }
return -1;
}

int main(){
char c;

printf ("Vvedite stroku i simvol: ");
scanf("%c", &c);
char s[10];
fgets( s, 10, stdin );
printf("adres:%d", nubmer_c(s, c));
return 0;
}
