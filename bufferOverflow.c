#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]) {


            char *char1 = malloc(sizeof(char)*10),
                 *char2 = malloc(sizeof(char)*10);

        printf("Addr :\n   char1:%d\nchar2:%d\n", char1, char2);
 
        printf("set char1 : ");
        scanf("%s", char1);

        printf("char1 : %s, char2 : %s\n", char1, char2);
}
