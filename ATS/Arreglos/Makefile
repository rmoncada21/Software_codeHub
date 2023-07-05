APP=
EXECUTABLES=$(APP)

COMPILER=g++
FLAGS=-Wall -Wextra

all: $(EXECUTABLES)

$(APP): $(APP).cpp
		$(COMPILER) $(FLAGS) $(APP).cpp -o $(APP)


.PHONY: clean
clean:
	rm -rf $(EXECUTABLES)
