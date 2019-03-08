FROM ubuntu:12.04

USER root

COPY ./solvable/cow.c /home/user/

RUN useradd -ms /bin/bash user

RUN apt-get update \
    && apt-get install -y openssh-server \
    && touch /home/user/zzz \
    && chmod 644 /home/user/zzz \
    && echo 111111222222333333 > /home/user/zzz \
    && chmod 777 /home/user/cow.c

VOLUME ["/home/user", "/etc/nginx", "/run", "/tmp"]

EXPOSE 2222

WORKDIR /

USER user

CMD ["/usr/sbin/sshd", "-Df", "/etc/ssh/sshd_config_user"]
