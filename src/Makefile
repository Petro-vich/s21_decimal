CC = gcc
CFLAGS = -Wall #Wextra #-Werror
LDFLAGS = -lcheck -lsubunit -lm

#################################################################################
TEST_FILES := $(filter-out big_dick_test/test.c, $(wildcard big_dick_test/test_s21_*.c))
TEST_OBJ_FILES := $(TEST_FILES:.c=.o)
TEST_MAIN := big_dick_test/test.c
TEST_MAIN_OBJ := big_dick_test/test.o
#################################################################################

SRC_AR = $(wildcard Arithmetic/*.c)
SRC_COMP = $(wildcard Comparison/*.c)
SRC_CONV = $(wildcard Convertors/*.c)
SRC_OTH = $(wildcard Other_functions/*.c)
SRC_HELP = $(wildcard Helpers/*.c)

ALL_SRC = $(SRC_COMP) $(SRC_CONV) $(SRC_OTH) $(SRC_HELP) $(SRC_AR)

SRC_AR_OBJ = $(patsubst %.c, %.o, $(SRC_AR))
SRC_COMP_OBJ = $(patsubst %.c, %.o, $(SRC_COMP))
SRC_CONV_OBJ = $(patsubst %.c, %.o, $(SRC_CONV))
SRC_OTH_OBJ = $(patsubst %.c, %.o, $(SRC_OTH))
SRC_HELP_OBJ = $(patsubst %.c, %.o, $(SRC_HELP))

ALL_SRC_OBJ = $(SRC_COMP_OBJ) $(SRC_CONV_OBJ) $(SRC_OTH_OBJ) $(SRC_HELP_OBJ) $(SRC_AR_OBJ)
%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS) 

all: s21_decimal.a

s21_decimal.a: $(ALL_SRC_OBJ)
	ar rcs $@ $(ALL_SRC_OBJ) 

test: s21_decimal.a
	$(CC) -D__DEBUG -o tests/test_decimal tests/s21_decimal.c -L -l s21_decimal.a $(LDFLAGS)
	./tests/test_decimal 

test_valgrind: s21_decimal.a
	$(CC) -o tests/test_decimal tests/s21_decimal.c -L -l s21_decimal.a $(LDFLAGS)
	valgrind --tool=memcheck --leak-check=yes ./tests/test_decimal

clang-format:
	clang-format -i $(ALL_SRC) tests/*.c

gcov_report:
		mkdir -p coverage_report
		$(CC) -o tests/test_decimal --coverage $(ALL_SRC) tests/s21_decimal.c $(LDFLAGS)
		./tests/test_decimal

		lcov -t "Coverage Report" -c -d . --output-file coverage_report/coverage.info
		genhtml coverage_report/coverage.info --output-directory coverage_report/
		xdg-open coverage_report/index.html

dick_test: s21_decimal.a $(TEST_OBJ_FILES) $(TEST_MAIN_OBJ)
	$(CC) $(TEST_OBJ_FILES) $(TEST_MAIN_OBJ) s21_decimal.a -o $@ $(LDFLAGS)
	@echo "Запуск тестов..."
	./$@


clean:
	rm -rf $(ALL_SRC_OBJ) s21_decimal.a tests/test_decimal tests/*.gcno tests/*.gcda coverage_report big_dick_test/*.gcno big_dick_test/*.gcda big_dick_test/*.o dick_test
