FROM ubuntu:18.04
RUN apt-get update -y
RUN apt-get install -y git gcc vim make libtesseract-dev gcc-multilib
RUN mkdir reversing; mkdir reversing/exercises; cd reversing
RUN git clone https://github.com/radare/radare2
RUN cd radare2; sys/install.sh
COPY build.sh exercise_1.c exercise_2.c exercise_3.c exercise_4.c stack_example.c /reversing/exercises/
RUN chmod +x /reversing/exercises/build.sh; /reversing/exercises/build.sh

