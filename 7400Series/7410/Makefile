CC = gcc
TARGET = design_7410IC.out
OBJS = design_7410IC.o
SRCS = design_7410IC.c

$(TARGET) : $(OBJS)
		$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
		$(CC) -c -o $(OBJS) $(SRCS)

clean :
		rm $(OBJS)
		rm $(TARGET)