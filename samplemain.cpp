#include <iostream>
#include "src/lib4ctf.h"

int main(){
	int sock;
	std::string recv;
	std::string buf;
	/* Domain or IPaddress */
	sock = connect("localhost", 1024);
	if(sock == -1){
		std::cout << "error.";
		return 0;
	}
	recv = receive(sock, 10000);
	std::cout << recv;
	buf = "test";
	send(sock, buf);
	close(sock);
	return 0;
}
