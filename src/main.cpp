#include <stdio.h>
#include <switch.h>

// Main program entrypoint
int main(int argc, char* argv[])
{
    consoleInit(NULL);

    printf("Hello World!\n");

    while (appletMainLoop())
    {
        consoleUpdate(NULL);
    }

    consoleExit(NULL);

    return 0;
}