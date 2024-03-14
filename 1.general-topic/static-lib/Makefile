.PHONY : all clean

CC := gcc

CUR_DIR := .

BIN_DIR := $(CUR_DIR)/bin
OBJ_DIR := $(CUR_DIR)/objs
INC_DIR := $(CUR_DIR)/inc
SRC_DIR := $(CUR_DIR)/src

LIB_DIR := $(CUR_DIR)/libs
STATIC_LIB := $(LIB_DIR)/static

INC_FLAGS := -I $(INC_DIR)

LIB_NAME := test

EXE_NAME := app

mk_objs:
	$(CC) -c $(CUR_DIR)/main.c -o $(OBJ_DIR)/main.o	$(INC_FLAGS)
	$(CC) -c $(SRC_DIR)/hello.c -o $(OBJ_DIR)/hello.o $(INC_FLAGS)
	$(CC) -c $(SRC_DIR)/sum.c -o $(OBJ_DIR)/sum.o $(INC_FLAGS)

mk_static:
	ar rcs $(STATIC_LIB)/lib$(LIB_NAME).a $(OBJ_DIR)/hello.o $(OBJ_DIR)/sum.o

all: mk_objs mk_static
	$(CC) $(OBJ_DIR)/main.o -L$(STATIC_LIB) -l$(LIB_NAME) -o $(BIN_DIR)/$(EXE_NAME)

run: all
	$(BIN_DIR)/$(EXE_NAME)

clean:
	rm -rf $(OBJ_DIR)/*.o
	rm -rf $(STATIC_LIB)/*
	rm -rf $(BIN_DIR)/*


