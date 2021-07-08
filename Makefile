OBJS = Lab6_group4.o Employee.o Node.o FileUtil.o SortUtil.o

TestOut: $(OBJS)
	g++ -o TestOut $(OBJS)
	rm -f $(OBJS)
	

Node.o:
	g++ -c Node.cpp

SortUtil.o:
	g++ -c Util/SortUtil.cpp	
	
FileUtil.o:
	g++ -c Util/FileUtil.cpp

Employee.o:
	g++ -c Employee.cpp

test.o:
	g++ -c Lab6_group4.cpp


clean:
	rm -f core TestOut $(OBJS)