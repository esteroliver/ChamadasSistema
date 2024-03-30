#include <stdio.h>
#include <dirent.h>

int main(){
    struct dirent *d;
    DIR *dr;
    char buf[256];
    char nome_arq[10];
    scanf("%s", nome_arq);
    dr = opendir(nome_arq);
    while((d = readdir(dr)) != NULL){
      sprintf(buf, "%s/%s", nome_arq, d->d_name);
      remove(buf);
    }
}