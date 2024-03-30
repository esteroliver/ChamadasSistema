#include <stdio.h>

// argc - numero de entradas
// argv[] - nome das entradas
// ./code a1.txt a2.txt
//   0      1       2
// argc = 3
int main(int argc, char * argv[]){
    FILE *fp1, *fp2;
    fp1 = fopen(argv[1], "r"); // nome do arquivo e modo. O modo r abre um arquivo texto para leitura
    fp2 = fopen(argv[2], "w"); // o modo w abre o arquivo para gravação

    if(!fp1 || !fp2 || argc != 3){
        printf("error");
    }

    char c;
    while((c = fgetc(fp1)) != EOF){ // percorrendo o fp1 para carregá-lo no fp2
        fputc(c, fp2); //copiando no fp2
    }

    //fechando os arquivos
    fclose(fp1);
    fclose(fp2);
}
