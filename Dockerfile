FROM ubuntu:latest

ENV DEBIAN_FRONTEND=noninteractive
ENV shell=/bin/bash

RUN addgroup -S swo3 && \
    adduser -r -d /home/swo3 -G swo3 swo3 && \
    apt update && \
    apt upgrade -y && \
    apt install -y build-essential procps cmake cppcheck valgrind neovim man-db less && \
    apt clean

WORKDIR /home/swo3
VOLUME [workdir /home/swo3]
USER swo3

CMD ["bash"]