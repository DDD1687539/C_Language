CXX = gcc

OBJ_DIR = obj

TARGET := execFile

OBJS := $(patsubst %.c, $(OBJ_DIR)/%.o, $(notdir $(wildcard *.c)))

all: $(OBJ_DIR)
$(OBJ_DIR):
	$(shell if [ -d $(OBJ_DIR) ]; then echo "exist obj"; else mkdir $(OBJ_DIR); fi)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

$(OBJ_DIR)/%.o: %.c
	$(CXX) -c $(CXXFLAGS) -o $@ $<

.PHONY:clean
clean:
	$(shell if [ -f execFile ]; then rm -f execFile; fi)
	$(shell if [ -d $(OBJ_DIR) ]; then rm -rf $(OBJ_DIR); fi)
	
