CC = g++
SRC = ./src/Keylogger.cpp
OBJ = ./bin/Keylogger.o
AFL = ./bin/libkeylogger.a
EXE = ./bin/Keylogger.dll
CFLAGS = -c -DBUILDING_KEYLOGGER_DLL -luser32
LFLAGS = -shared -Wl,--out-implib,$(AFL)

all:
	$(CC) $(SRC) -o $(OBJ) $(CFLAGS)
	$(CC) $(OBJ) -o $(EXE) $(LFLAGS)
