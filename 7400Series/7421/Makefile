CC = gcc
TARGET = design_7421IC.out
OBJS = design_7421IC.o
SRCS = design_7421IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
