CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lX11 -lxdo
EXECUTABLE = gamemoded
INSTALL_DIR = /usr/bin/

all: $(EXECUTABLE)

$(EXECUTABLE): main.c
	$(CC) $(CFLAGS) main.c -o $(EXECUTABLE) $(LDFLAGS)

install: $(EXECUTABLE)
	sudo mv $(EXECUTABLE) $(INSTALL_DIR)

clean:
	rm -f $(EXECUTABLE)
