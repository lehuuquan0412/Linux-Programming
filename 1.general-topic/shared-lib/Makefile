.PHONY : all clean

cc := gcc

CUR_DIR := .
BIN_DIR := $(CUR_DIR)/bin
INC_DIR := $(CUR_DIR)/inc
SRC_DIR := $(CUR_DIR)/src

OBJ_DIR := $(CUR_DIR)/objs

LIB_DIR := $(CUR_DIR)/libs

INC_FLAGS := -I $(INC_DIR)

LIB_NAME := test

EXE_NAME := exam

mk_objs:
	$(cc) -c $(CUR_DIR)/main.c -o $(OBJ_DIR)/main.o $(INC_FLAGS)
	$(cc) -c -fPIC $(SRC_DIR)/add.c -o $(OBJ_DIR)/add.o $(INC_FLAGS)
	$(cc) -c -fPIC $(SRC_DIR)/answer.c -o $(OBJ_DIR)/answer.o $(INC_FLAGS)

mk_shared:
	$(cc) -shared $(OBJ_DIR)/add.o $(OBJ_DIR)/answer.o -o $(LIB_DIR)/lib$(LIB_NAME).so 

install:
	sudo cp -f $(LIB_DIR)/lib$(LIB_NAME).so /usr/lib

all: mk_objs mk_shared install
	$(cc) $(OBJ_DIR)/main.o -L$(LIB_DIR) -l$(LIB_NAME) -o $(BIN_DIR)/$(EXE_NAME)

run: all
	$(BIN_DIR)/$(EXE_NAME)

clean:
	rm -rf $(OBJ_DIR)/*.o
	rm -rf $(LIB_DIR)/*
	rm -rf $(BIN_DIR)/*
	sudo rm -rf /usr/lib/lib$(LIB_NAME).so
	
