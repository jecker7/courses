# target executables
TARGETS = problem1 problem2 problem3 problem4 hexConversion stringSort


# adding .c
SOURCES = $(TARGETS:.c)

# compiler details
CC = gcc
FLAGS = -Wall -Werror
LIBS = -lm

# building
all: $(TARGETS)

problem5: problem5.c
	$(CC) $(FLAGS) -o $@ $< $(LIBS)

%: %.c
	$(CC) $(FLAGS) -o $@ $<

clean:
	rm $(TARGETS)
