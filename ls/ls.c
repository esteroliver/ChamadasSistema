#include <stdio.h> //input output
#include <dirent.h>

int main(){
    char nome_dir[10];
    DIR *p;
    struct dirent *d;
    scanf("%s", nome_dir);
    p = opendir(nome_dir);
    if(p == NULL){
        printf("DIRETÓRIO NÃO ENCONTRADO");
    }
    while(NULL != (d = readdir(p))){
        printf("%s\n", d->d_name);
    }
}