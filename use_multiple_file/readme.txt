## Compilation

### method 1
```
g++ file1.cpp file2.cpp main.cpp
./a.out
```
### method 2

** compile all files into .o or .obj files then link them together

```
g++ -c file1.cpp file2.cpp main.cpp
# link them together
g++ file1.o file2.o main.cpp
```