CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		main.o Employee.o Manager.o

LIBS =

TARGET =	inheritance

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
