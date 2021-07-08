OBJS = Lab6_group4.o Person.o FileUtil.o Node.o SortUtil.o

TestOut: $(OBJS)
	g++ -o TestOut $(OBJS)
	rm -f $(OBJS)
	

Node.o:
	g++ -c Node.cpp

SortUtil.o:
	g++ -c Util/SortUtil.cpp	
	
FileUtil.o:
	g++ -c Util/FileUtil.cpp

Person.o:
	g++ -c Person.cpp

test.o:
	g++ -c Lab6_group4.cpp


clean:
	rm -f core TestOut $(OBJS)