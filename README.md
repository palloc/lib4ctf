# lib4ctf
CTF library for C++er.

## How to use
See sample.

### function

#### int connect(string addr, int port)
Make TCP connection to the server.
[addr] is ip address or hostname.


#### string receive(int sock, int len) 
Receive a message(max length=len) from the server and return it.

#### void send(int sock,string message)
Send a message to the server.

### sample

- echo "test"|nc -l 1024  (prepare the test server)
- open other terminal
- g++ samplemain.cpp -L ./src -l lib4ctf
- ./a.out



