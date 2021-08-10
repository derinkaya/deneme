all: cevir test2 perm

cevir: cevir.cpp
	g++ -o cevir cevir.cpp

test2: test2.cpp
	g++ -o test2 test2.cpp
perm: perm.cpp
	g++ -o perm perm.cpp
clean:
	rm *.o *~


