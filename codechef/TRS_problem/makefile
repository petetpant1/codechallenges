CC=g++
CFLAGS=-I.
DEPS = $(wildcard *.h) $(wildcard */*.h)
SOURCES = $(wildcard *.cpp) $(wildcard */*.cpp)

%.o: $(SOURCES) $(DEPS)
	$(CC) -c -g $^ $(CFLAGS)


problem: main.o
	$(CC) -g -o main $^

clean:
	rm main main.o
  

