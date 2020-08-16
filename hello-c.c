#include <unistd.h>
#include <stdlib.h>

int main()
{
    write(1, "Hello World!\n", 13);
    
    exit(0);
}