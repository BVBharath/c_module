SRC:= $(wildcard *.c)

OBJ:= $(patsubst *.c, *.o, $(SRC))

address.exe: $(OBJ)
	gcc -o $@ $^

clean:
	rm *.o *.exe
