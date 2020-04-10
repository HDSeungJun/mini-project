CC = gcc 
CFLAGS = -W -Wall 
TARGET = market
DTARGET = market_debug
OBJECTS = product.o manager.o saver.o searcher.o market.c 
 
$(TARGET) : $(OBJECTS) 
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS) 
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^ 
 
clean : 
	 rm *.o $(TARGET) $(DTARGET) 
