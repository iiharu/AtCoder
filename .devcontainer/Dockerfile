
FROM debian:10

# Configure APT
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
 && apt-get -y install --no-install-recommends apt-utils \
 && apt-get -y clean \
 && rm -rf /var/lib/apt/lists

# Install git, process tools, lsb-release (common in install instructions for CLIs)
RUN apt-get update \
 && apt-get -y install bash-completion git procps lsb-release \
 && apt-get -y clean \
 && rm -rf /var/lib/apt/lists/*

# Install C++ tools
RUN apt-get update \
 && apt-get -y install --no-install-recommends make cmake clang clang-format lldb \
 && apt-get -y clean \
 && rm -rf /var/lib/apt/lists/*

# Set the default shell to bash instead of sh
ENV SHELL /bin/bash
