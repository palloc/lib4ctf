#include "lib4ctf.h"

int connect(std::string addr,int port){
	struct sockaddr_in server;
	int sock;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = inet_addr(addr.c_str());
	connect(sock, (struct sockaddr *)&server, sizeof(server));
	return sock;
}

std::string receive(int sock, int len){
	std::string temp;
	char buf[len];
	int n;
	memset(buf,0,sizeof(buf));
	n = read(sock, buf, sizeof(buf));
	temp = buf;
	return temp;
}

void send(int sock, std::string message){
	char* temp;
	strcpy(temp,message.c_str());
	int n;
	n = write(sock, temp, sizeof(temp));
}



