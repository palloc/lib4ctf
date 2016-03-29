#ifndef INCLUDED_CONNECT_H
#define INCLUDED_CONNECT_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <string>

int connect(std::string addr,int port);
std::string receive(int sock, int len);
void send(int sock, std::string message);


#endif/*INCLUDED_CONNECT_H*/
