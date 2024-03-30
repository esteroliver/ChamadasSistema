#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char dir[10];
    scanf("%s", dir);
    if(rmdir(dir) != 0){
        printf("error \n");
    }
    else{
        printf("diretório removido \n")
    }
}