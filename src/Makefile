CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lcheck -lsubunit -lm

SRC_COMP = $(wildcard Comparison/*.c)
SRC_CONV = $(wildcard Convertors/*.c)
SRC_OTH = $(wildcard Other_functions/*.c)

ALL_SRC = $(SRC_COMP) $(SRC_CONV) $(SRC_OTH)

SRC_COMP_OBJ = $(patsubst %.c, %.o, $(SRC_COMP))
SRC_CONV_OBJ = $(patsubst %.c, %.o, $(SRC_CONV))
SRC_OTH_OBJ = $(patsubst %.c, %.o, $(SRC_OTH))

ALL_SRC_OBJ = $(SRC_COMP_OBJ) $(SRC_CONV_OBJ) $(SRC_OTH_OBJ)
%.o: %.c
	$(CC) -c $< -o $@ 

all: s21_decimal.a

s21_decimal.a: $(ALL_SRC_OBJ)
	ar rcs $@ $(ALL_SRC_OBJ)

test: s21_decimal.a
	$(CC) -o tests/test_decimal tests/s21_decimal.c -L -l s21_decimal.a $(LDFLAGS)

clang:
	clang-format -i $(ALL_SRC) tests/*.c

clean:
	rm -rf $(ALL_SRC_OBJ) s21_decimal.a tests/test_decimal