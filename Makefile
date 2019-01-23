cc = gcc
prom = clox
source = chunk.c debug.c main.c memory.c value.c

$(prom): $(source)
	$(cc) -o $(prom) $(source)
