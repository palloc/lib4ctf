#include "lib4ctf.h"

int connect(std::string addr,int port){
	struct sockaddr_in server;
	int sock;
	struct addrinfo *res;
	int err;
	sock = socket(AF_INET, SOCK_STREAM, 0);
	server.sin_family = AF_INET;
	server.sin_port = htons(port);
	server.sin_addr.s_addr = inet_addr(addr.c_str());
	if(server.sin_addr.s_addr == 0xFFFFFFFF){
		if ((err = getaddrinfo(addr.c_str(), NULL, NULL, &res)) != 0) {
			return -1;
		}
		server.sin_addr.s_addr = ((struct sockaddr_in *)(res->ai_addr))->sin_addr.s_addr;
	}
	connect(sock, (struct sockaddr *)&server, sizeof(server));
	return sock;
}

std::string receive(int sock, int len){
	std::string temp;
	char buf[len];
	memset(buf,0,sizeof(buf));
	read(sock, buf, sizeof(buf));
	temp = buf;
	return temp;
}

void send(int sock, std::string message){
	char* temp;
	write(sock, message.c_str(), sizeof(message.c_str()));
}

