CC = gcc
TARGET = design_7401IC.out
OBJS = design_7401IC.o
SRCS = design_7401IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)

