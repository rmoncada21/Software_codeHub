#target: prerrequisites
#	command to build target
CC = cc
CLANG = clang
CFLAGS = -g -Wall -Wextra
SOURCES = $(wildcard *.c)
EXECUTABLES = $(SOURCES:.c=)

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES)

gitignore:
	echo $(EXECUTABLES) >> .gitignore

.PHONY: all clean gitignore

