CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g -D_POSIX_C_SOURCE=200809L

TARGET1 = ex3_qst1
TARGET2 = ex3_qst2


all: $(TARGET1) $(TARGET2)


$(TARGET1): ex3_qst1.c
	$(CC) $(CFLAGS) ex3_qst1.c -o $(TARGET1)

$(TARGET2): ex3_qst2.c
	$(CC) $(CFLAGS) ex3_qst2.c -o $(TARGET2)


clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET1) $(TARGET2)

re: fclean all


run1: $(TARGET1)
	./$(TARGET1)

run2: $(TARGET2)
	./$(TARGET2)

.PHONY: all clean fclean re run1 run2
