CC = gcc
TARGET = design_7405IC.out
OBJS = design_7405IC.o
SRCS = design_7405IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS) -lm

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
