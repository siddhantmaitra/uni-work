#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<string.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<netdb.h>
#include<fcntl.h>

#define PORT_NUM 2500

void main()
{
	int server_sockfd, client_sockfd;
	int server_len, client_len,count=0;
	char out_buf[100];
	char in_buf[100];

	struct in_addr client_ip_addr;
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;
	
	unlink("server socket");
	server_sockfd=socket(AF_INET, SOCK_STREAM, 0);

	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(PORT_NUM);
	server_address.sin_addr.s_addr=htonl(INADDR_ANY);

	server_len=sizeof(server_address);
	bind(server_sockfd,(struct sockaddr *)&server_address, server_len);
	listen(server_sockfd, 5);

	printf("\n\tSERVER IS WAITING FOR CLIENT REQUEST.....\n");

	client_len=sizeof(client_address);

	client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);
	memcpy(&client_ip_addr, &client_address.sin_addr.s_addr,4);

	printf("\n Accept completed (IP address of client=%s port No=%d)\n",inet_ntoa(client_ip_addr), ntohs(client_address.sin_port));

	while(count!=5)
	{
 		printf("\n \tEnter ur message.....");
 		scanf("%s",out_buf);
 		send(client_sockfd, out_buf, (strlen(out_buf)+1),0);

 		recv(client_sockfd, in_buf,sizeof(in_buf), 0);
 		printf("\nReceived from client....Message='%s'\n",in_buf);
 		count++;
	}
	close(server_sockfd);
	close(client_sockfd);
}





