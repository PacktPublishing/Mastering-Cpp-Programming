all: GSTVisitor.o Item.o main.o
	g++ -o gst.exe GSTVisitor.o Item.o main.o

GSTVisitor.o: GSTVisitor.cpp Visitable.h Visitor.h
	g++ -c GSTVisitor.cpp

Item.o: Item.cpp
	g++ -c Item.cpp

main.o: main.cpp
	g++ -c main.cpp
