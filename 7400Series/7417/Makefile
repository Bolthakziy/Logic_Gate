CC = gcc
TARGET = design_7417IC.out
OBJS = design_7417IC.o
SRCS = design_7417IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
