TARGET=test
CC=clang
CC?=clang
CC_FLAGS=
CC_EXTRA?=
CC_FLAGS+=$(CC_EXTRA)

.DEFAULT:all clean

.PHONY:all clean $(TARGET) help

all:$(TARGET)

.c.o:
	$(CC) $(CC_FLAGS) -c $< -o $@ 

$(TARGET): test.o
	$(CC) $^ $(LD_FLAGS) -o $@

clean:
	rm -f *.o *~ $(TARGET)

help:
	@echo "all is the default target"
	@echo "there is delete."
	@echo "there is clean."
