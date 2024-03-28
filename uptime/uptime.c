#include <sys/sysinfo.h>
#include <stdio.h>

int main ()
{
    struct sysinfo info;
    sysinfo(&info); //construtor
    int minutos = info.uptime/60;
    printf("%d",minutos);
    printf("\n");
    return 0;
}