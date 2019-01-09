# Dockerfile

FROM debian:stretch-backports

ENV DEBIAN_FRONTEND noninteractive

RUN apt-get --quiet update && apt-get --assume-yes --no-install-recommends --quiet install g++ && apt-get --quiet clean && rm -rf /var/cache/apt/archives/* /var/lib/apt/lists/*

RUN mkdir -p /tmp/atcoder
ADD bits /tmp/atcoder/bits
ADD include /tmp/atcoder/include
ADD main.cpp /tmp/atcoder/main.cpp

WORKDIR /tmp/atcoder
RUN g++ main.cpp

ENTRYPOINT ./a.out

