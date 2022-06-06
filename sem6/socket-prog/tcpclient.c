#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<string.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<fcntl.h>
#include<unistd.h>

#define PORT_NUM 2500
#define IP_ADDR "127.0.0.1"

void main()
{
	int client_sockfd;
	int server_len,count=0;
	char out_buf[100];
	char in_buf[100];
	
	struct sockaddr_in server_address;

	client_sockfd=socket(AF_INET,SOCK_STREAM,0);
	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(PORT_NUM);
	server_address.sin_addr.s_addr=inet_addr(IP_ADDR);

	server_len=sizeof(server_address);
	connect(client_sockfd,(struct sockaddr *)&server_address,server_len);
	
	printf("\n\tSending Request to server for response....\n",in_buf);
	while(count!=5)
	{
		recv(client_sockfd,in_buf,sizeof(in_buf),0);
		printf("\nRecieved from server...message='%s'\n",in_buf);
		printf("\n\t enter ur message...");
		scanf("%s",out_buf);
		send(client_sockfd,out_buf,(strlen(out_buf)+1),0);
		count++;
	}
	close(client_sockfd);
}
