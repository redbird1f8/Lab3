#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h> 
#include <unistd.h>


int main(int argc, char **argv)
{
    pid_t child_pid = fork();
    if(child_pid == 0)
    {
        execv("./sequential_min_max", argv );
    }
    else
    {
        wait(NULL);
    }
    return 0;
    
}