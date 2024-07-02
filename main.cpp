#include <unistd.h>
#include <stdlib.h>

int main(){

    pid_t child;
    child=fork();
    if(child>0){
        sleep(60);
    }else
    {
        exit(0);
    }
}
