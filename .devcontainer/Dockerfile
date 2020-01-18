
FROM alpine:3

# Avoid warnings by switching to noninteractive
#ENV DEBIAN_FRONTEND=noninteractive

# This Dockerfile adds a non-root 'vscode' user with sudo access. However, for Linux,
# this user's GID/UID must match your local user UID/GID to avoid permission issues
# with bind mounts. Update USER_UID / USER_GID if yours is not 1000. See
# https://aka.ms/vscode-remote/containers/non-root-user for details.
ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Configure apk and install packages
RUN apk --update --no-cache add dialog \
#
# Verify git, process tools, lsb-release (useful for CLI installs) installed
 && apk --update --no-cache add git procps \
#
# Install C++ tools
 && apk --update --no-cache add cmake make g++ libc-dev cppcheck valgrind \
#
# Create a non-root user to use if preferred - see https://aka.ms/vscode-remote/containers/non-root-user.
 && addgroup -g $USER_GID $USERNAME \
 && adduser -s /bin/bash -u $USER_UID -G $USERNAME -S $USERNAME \
 && install -o $USERNAME -g $USERNAME /etc/profile /home/$USERNAME/.profile \
 # [Optional] Add sudo support for the non-root user
 && apk --update --no-cache add sudo \
 && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
 && chmod 0440 /etc/sudoers.d/$USERNAME
