CC = gcc 
CFLAGS = -W -Wall 
TARGET = shop 
OBJECTS = menu.o guest.o main.c 
 
$(TARGET) : $(OBJECTS) 
        $(CC) $(CFLAGS) -o $@ $^ 
 
clean : 
        rm *.o $(TARGET) 
