#include <stdlib.h>
#include <stdio.h>



int main(int argn, char **argc) {
    
	printf("Hello World! Ich habe %d Argumente bekommen\n", argn);


    for (int i = 1; i < argn; i++) {
        
        char *arg = argc[i];
        
		printf("Arg %d = %s\n", i, arg);
        
        if (arg[0] == '-') {
            
        }
/*
        if (strlen(arg) == 1) {
            switch(arg) {
                case 'a':
                    break;
                case 'b':
                    if (b < 1) {
                        printf("Arg %s out out range (%d)\n", arg, );
                        exit(1001);
                    }
                    else if (b > 1000) {
                        
                    }
                    break;
                default:
                    printf("Unknown arg %s\n", arg);
                    exit(1001);
            }
            
        }
*/
	}

    int a[100];
    int *b;
    
    b = malloc(b * sizeof(int));

    
    
	exit(0);
}


void test() {
    
}