CC = gcc
TARGET = design_4000IC.out
OBJS = design_4000IC.o
SRCS = design_4000IC.c

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -c -o $(OBJS) $(SRCS)

clean :
	rm $(OBJS)
	rm $(TARGET)
