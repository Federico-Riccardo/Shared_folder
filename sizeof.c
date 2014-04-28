#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){



	int i;
	char **ArrX = calloc(10, sizeof(*ArrX));
	printf("%ld %ld\n", sizeof(*ArrX), sizeof(*(ArrX[i])));
    for ( i=0; i<10; i++ ){
        ArrX[i] = calloc(10, sizeof(*(ArrX[i])));
    }
	printf("%ld %ld\n", sizeof(*ArrX), sizeof(*(ArrX[i])));
	printf("%ld %ld %ld\n", sizeof(char), sizeof(char  *), sizeof("a"));


	char *id1 = "ciao";
	char *id2 = "ciao2";
	
	printf("%d\n", strncmp(id1,id2,4));

}