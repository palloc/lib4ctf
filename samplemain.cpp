#include <iostream>
#include "src/lib4ctf.h"

int main(){
	int sock;
	std::string recv;
	sock = connect("127.0.0.1", 1024);
	recv = receive(sock, 32);
	std::cout << recv;
	send(sock, "aiueo");
	return 0;
}
