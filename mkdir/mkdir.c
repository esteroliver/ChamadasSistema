#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char dir[] = "diretorio";
    mkdir(dir, S_IRWXU);
}