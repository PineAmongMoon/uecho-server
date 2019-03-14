FROM gcc:6

WORKDIR /root/uecho_server

COPY uecho_server.c .

RUN make uecho_server

EXPOSE 60000/udp

CMD ./uecho_server