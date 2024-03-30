#include <stdio.h> //input output
#include <dirent.h>

int main(){
    char nome_dir[10]; //nome do diretorio
    DIR *p; //irá percorrer o diretório
    struct dirent *d; //estrutura de diretório
    scanf("%s", nome_dir); //aqui vamos ler o nome do diretório
    p = opendir(nome_dir); // iremos abrir um diretório que possua o nome digitado e armazenar no P
    if(p == NULL){
        printf("DIRETÓRIO NÃO ENCONTRADO");
    }
    while(NULL != (d = readdir(p))){  //percorrendo o diretório
        printf("%s\n", d->d_name);
    }
}