FROM avatao/lesp:ubuntu-14.04

USER root

COPY ./solvable/ /

RUN gcc login.c loginVerification.c -o login -fno-stack-protector -m32 \
    && chown root:root loginVerification.c \
    && chown root:root loginVerification.h \
    && chmod 700 loginVerification.c \
    && chmod 700 loginVerification.h \
    && rm loginVerification.c \
    && rm loginVerification.h

VOLUME ["/tmp"]

EXPOSE 2222

WORKDIR /

USER user

CMD ["/usr/sbin/sshd", "-Df", "/etc/ssh/sshd_config_user"]

