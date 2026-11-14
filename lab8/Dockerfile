FROM docker.io/library/gcc
COPY Makefile .
COPY utest.h ./utest.h
COPY 590MakefileLab ./590MakefileLab
RUN make main
CMD ./main
