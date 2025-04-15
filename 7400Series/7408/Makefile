CC = gcc
TARGET = design_7408IC.out
OBJS = design_7408IC.o
SRCS = design_7408IC.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)