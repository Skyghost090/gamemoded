CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lX11 -lxdo
EXECUTABLE = gamemode
INSTALL_DIR = /usr/bin/
SERVICE_DIR = $(HOME)/.config/systemd/user
SERVICE_FILE = gamemode.service

all: $(EXECUTABLE)

$(EXECUTABLE): main.c
	$(CC) $(CFLAGS) main.c -o $(EXECUTABLE) $(LDFLAGS)

install: $(EXECUTABLE)
	sudo mv $(EXECUTABLE) $(INSTALL_DIR)

clean:
	rm -f $(EXECUTABLE)
