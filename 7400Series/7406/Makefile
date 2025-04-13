CC = gcc
TARGET = design_7406IC.out
OBJS = design_7406IC.o
SRCS = design_7406IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
