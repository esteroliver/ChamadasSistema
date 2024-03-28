#include <stdio.h> //input output
#include <dirent.h> //manipulação de diretórios
#include <errno.h> //manipulação de erros

void ls_f(const char *dir, int op1, int op2){
    struct dirent *d;
    DIR *dh = opendir(dir); //buscando um fluxo do diretório
    if(!dh){ //se der null (diretorio não encontrado)
        printf("sem diretório aqui!!!");
    }

    while((d = readdir(dh)) != NULL){ //percorre os elementos do fluxo do diretório
        if(!op1 && d->d_name[0] == '.') //continue se arquivos escondidos forem encontrados
            continue;
        printf("%s", d->d_name);
        if(op2) printf("\n")
    }
    if(!op2) printf("\n");
}

int main(int argc, const char *args[]){
    if(argc == 1){
        ls_f(".", 0, 0);
    }
    else if(argc == 2){
    }
}