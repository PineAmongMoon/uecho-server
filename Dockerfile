FROM gcc:latest

WORKDIR /root/uecho_server

COPY src/ .

RUN gcc *.c -o uecho

RUN rm *.c *.h

EXPOSE 60000/udp

CMD ./uecho