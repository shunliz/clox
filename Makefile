cc = gcc
prom = clox
source = chunk.c debug.c main.c memory.c value.c vm.c scanner.c compiler.c object.c

$(prom): $(source)
	$(cc) -o $(prom) $(source)

clean:
	rm -rf clox
