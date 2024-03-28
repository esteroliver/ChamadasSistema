#include <time.h>
#include <stdio.h>

int main(){
    time_t t = time(NULL);
    printf(ctime(&t));
    //object t = date [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]
    return 0;
}
