CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		cpp_examples.o

LIBS =

TARGET =	cpp_examples

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
