CC = gcc
TARGET = design_7413IC.out
OBJS = design_7413IC.o
SRCS = design_7413IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)