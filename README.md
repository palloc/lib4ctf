# lib4ctf
## How to use

### function

#### int connect(string addr, int port)
Make TCP connection to the server(IP address=addr,port=port).

#### string receive(int sock, int len) 
Receive some message(max length=len) from the server and return it.

#### void send(int sock,string message)
Send message to the server.

### sample

- echo "test"|nc -l 1024  (prepare the test server)
- open other terminal
- g++ samplemain.cpp -L ./src -l lib4ctf
- ./a.out

``` <string> is already included ```

