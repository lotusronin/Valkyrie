VER=Valkyrie0.1
CC=g++
CFLAGS=-c -Wall
GTK=`pkg-config --libs --cflags gtk+-2.0`

$(VER): main.o
	$(CC) main.o -o $(VER) $(GTK)

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp $(GTK)
