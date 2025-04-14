CC = gcc
TARGET = design_7407IC.out
OBJS = design_7407IC.o
SRCS = design_7407IC.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)