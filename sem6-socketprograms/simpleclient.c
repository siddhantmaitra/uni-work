//Program for simple client...
#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<string.h>
#include<sys/un.h>
#include<unistd.h>
void main() {
	int client_sockfd;
	int client_len;
	char out_buf[100];
	char in_buf[100];
	struct sockaddr_un client_address;
	client_sockfd=socket(AF_UNIX, SOCK_STREAM, 0);
	client_address.sun_family=AF_UNIX;
	strcpy(client_address.sun_path, "server_socket");
	client_len=sizeof(client_address);
	connect(client_sockfd, (struct sockaddr *)&client_address, client_len);
	recv(client_sockfd, in_buf, sizeof(in_buf), 0);
	printf("Received from server...data='%s'\n", in_buf);
	strcpy(out_buf, "Test message from client to server...");
	send(client_sockfd, out_buf, (strlen(out_buf)+1), 0);
	close(client_sockfd);
}
