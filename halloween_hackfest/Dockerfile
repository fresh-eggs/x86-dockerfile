FROM ubuntu:18.04
RUN apt-get update -y
RUN apt-get install -y git gcc vim make libtesseract-dev gcc-multilib
RUN mkdir reversing; mkdir reversing/exercises; cd reversing
RUN git clone https://github.com/radare/radare2
RUN cd radare2; sys/install.sh
COPY re_0 re_1 re_2 /reversing/exercises/

