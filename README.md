# uecho-server

## 如何使用

### 直接编译

找到src目录下的main.c，将其中的PROT宏改为自己所需的端口。然后

```sh
cd src
cc *.c
```

### 使用docker

运行`dcoker build -t uecho .`构建镜像

运行`docker run -d -p [prot] {--name [name]} uecho`绑定端口，命名(可选)，并启动容器
