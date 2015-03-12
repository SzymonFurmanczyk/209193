CPPFLAG= -c -g -Iinc -Wall -pedantic
__start__: generate
	./generate

generate: ./generate.o
	g++ -Wall -pedantic -o generate ./generate.o

clean:
	rm -f ./*.txt ./*.o generate
