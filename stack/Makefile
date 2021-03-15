TARGET = run
OBJS = main.o
CFLAGS = -g -Wall
LIBS = -lm

.PHONY:clean

all: $(TARGET)

$(TARGET): $(OBJS)
	     $(CXX) -o $(TARGET) $(OBJS) $(LIBS)

clean: 
	rm -f $(TARGET) $(OBJS) core*

main.o: header.h
