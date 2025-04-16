CC = gcc
TARGET = design_7409IC.out
OBJS = design_7409IC.o
SRCS = design_7409IC.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)