all: cevir test2

cevir: cevir.cpp
	g++ -o cevir cevir.cpp

test2: test2.cpp
	g++ -o test2 test2.cpp

clean:
	rm *.o *~


