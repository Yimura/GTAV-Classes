FROM ubuntu:devel

RUN apt clean && apt update && apt install gcc g++ cmake make -y

WORKDIR /app

COPY . .
