from socket import *
from time import ctime

host = "localhost"
port = 21566
ADDRESS = (host, port)

server = socket(AF_INET, SOCK_STREAM)
server.bind(ADDRESS)
server.listen()

while True:
    print("Waiting for the connection")
    client, address = server.accept()
    print("Connected from ",  address)
    client.send(bytes(ctime() + "Have a nice day", 'ascii'))
    client.close()
server.close()t
