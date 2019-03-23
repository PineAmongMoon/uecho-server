FROM gcc:latest

WORKDIR /root/uecho_server

COPY uecho_server.c .

RUN gcc *.c

EXPOSE 60000/udp

CMD ./uecho_server