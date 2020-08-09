#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void){ 
    char *s = malloc(sizeof(char)*100);

    printf("s : ");
    scanf("%s", s);

    char *t = malloc(strlen(s)+1);
    
    for(int i=0, n=strlen(s); i<n+1; i++){
        t[i] = s[i];
        printf("s[%d] address : %p\n", i, &s[i]);
        printf("t[%d] address : %p\n", i, &t[i]);
    }
    printf("\ns address : %p\n", &s);
    printf("t address : %p\n", &t);

    printf("\n");

   t[0] = toupper(t[0]);
    printf("t[0] value after toupper : %c\n\n", t[0]);
   printf("s : %s\n", s);
   printf("t : %s\n", t);

   free(t);
   free(s);
}