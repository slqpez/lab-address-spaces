#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    printf("location of code : %p\n", main);

    int pid = getpid();
    printf("El identificador del programa es: %d\n", pid);
    clock_t cl = clock();
    int size = atoi(argv[1]);
    int t = size*1e6;
    char *p = malloc(t);
    int x = 3;  
    if(argc == 2){
        for(int i = 0; i < t; i++){
            *(p +i)=255; 
        }
    }else{
        while ((clock() - cl)/CLOCKS_PER_SEC < atoi(argv[2])){
            for(int i = 0; i < t; i++){
                *(p +i)=100; 
               // printf("%c",*(p+i) );
            }        
        }
    }  
    
    
    printf("location of stack: %p\n", &x);
    return 0;

}