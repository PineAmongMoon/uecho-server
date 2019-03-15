#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define BUFFER_SIZE 1200
#define PORT 60000

int main()
{
    int server_socket;
    uint8_t massage[BUFFER_SIZE];
    struct sockaddr_in server_addr, client_addr;
    socklen_t client_addr_len;
    size_t str_len;

    server_socket = socket(PF_INET, SOCK_DGRAM, 0);
    if (server_socket == -1)
    {
        perror("UDP scoket creation error!");
        exit(1);
    }

    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_addr.sin_port = htons(PORT);
    
    if (bind(server_socket, (const struct sockaddr*)&server_addr, sizeof(server_addr)) != 0)
    {
        perror("bind error!");
        exit(2);
    }

    memset(massage, 0, sizeof(massage));

    for(;;)
    {
        client_addr_len = sizeof(client_addr);
        str_len = recvfrom(server_socket, massage, BUFFER_SIZE, 0,
            (struct sockaddr*)&client_addr, &client_addr_len);
        sendto(server_socket, massage, str_len, 0, 
            (struct sockaddr*)&client_addr, client_addr_len);
    } 
    close(server_socket);
    return 0;
}