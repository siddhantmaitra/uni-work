//Program for simple server...
#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<string.h>
#include<sys/un.h>
#include<unistd.h>
void main() {
	int server_sockfd, client_sockfd;
	int server_len, client_len;
	char out_buf[100];
	char in_buf[100];
	struct sockaddr_un server_address;
	struct sockaddr_un client_address;
	unlink("server_socket");
	server_sockfd=socket(AF_UNIX, SOCK_STREAM, 0);
	server_address.sun_family=AF_UNIX;
	strcpy(server_address.sun_path, "server_socket");
	server_len=sizeof(server_address);
	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);
	listen(server_sockfd, 5);
	client_len=sizeof(client_address);
	client_sockfd=accept(server_sockfd, (struct sockaddr *)&client_address, &client_len);
	strcpy(out_buf, "Test message from server to client");
	send(client_sockfd, out_buf, (strlen(out_buf)+1), 0);
	recv(client_sockfd, in_buf, sizeof(in_buf), 0);
	printf("Received from client...data='%s'\n", in_buf);
	close(server_sockfd);
	close(client_sockfd);
}
