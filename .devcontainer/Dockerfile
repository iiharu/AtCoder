#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
#-------------------------------------------------------------------------------------------------------------

FROM debian:9

RUN apt-get -y update \
 # Install git, process tools
 && apt-get -y install git procps \
 # Install C++ tools
 && apt-get -y --no-install-recommends install make cmake clang clang-format lldb \
 # Clean up
 && apt-get -y autoremove \
 && apt-get -y clean \
 && rm -rf /var/lib/apt/lists/*
