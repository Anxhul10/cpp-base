all: file1 file2 main link end

make: $(all)

file1:
	g++ -c file1.cpp
file2:
	g++ -c file2.cpp
main:
	g++ -c main.cpp
link:
	g++ main.o file1.o file2.o
end: 
	printf './a.out generated'

clean:
	rm -rf file1.o file2.o main.o a.out