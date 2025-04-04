CC = gcc
CFLAGS = -Wall -Wextra #-Werror
LDFLAGS = -lcheck -lsubunit -lm
GCOV_FLAGS = --coverage

# Source files
SRC_AR = $(wildcard Arithmetic/*.c)
SRC_COMP = $(wildcard Comparison/*.c)
SRC_CONV = $(wildcard Convertors/*.c)
SRC_OTH = $(wildcard Other_functions/*.c)
SRC_HELP = $(wildcard Helpers/*.c)
ALL_SRC = $(SRC_COMP) $(SRC_CONV) $(SRC_OTH) $(SRC_HELP) $(SRC_AR)

# Test files
TEST_FILES = $(wildcard tests/test_*.c)
TEST_OBJS = $(TEST_FILES:.c=.o)
TEST_MAIN = tests/test.c
TEST_MAIN_OBJ = $(TEST_MAIN:.c=.o)

# Object files
OBJS = $(patsubst %.c, %.o, $(ALL_SRC))

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

all: s21_decimal.a

s21_decimal.a: $(OBJS)
	ar rcs $@ $(OBJS)

# Regular test build
test: s21_decimal.a $(TEST_OBJS) $(TEST_MAIN_OBJ)
	$(CC) $(TEST_OBJS) $(TEST_MAIN_OBJ) s21_decimal.a -o $@ $(LDFLAGS)
	./$@

# Test with valgrind
test_valgrind: s21_decimal.a $(TEST_OBJS) $(TEST_MAIN_OBJ)
	$(CC) $(TEST_OBJS) $(TEST_MAIN_OBJ) s21_decimal.a -o $@ $(LDFLAGS)
	valgrind --tool=memcheck --leak-check=yes ./$@

# Coverage report
gcov_report: CFLAGS += $(GCOV_FLAGS)
gcov_report:
	mkdir -p coverage_report
	$(CC) $(CFLAGS) -o tests/test $(ALL_SRC) $(TEST_FILES) $(TEST_MAIN) $(LDFLAGS)
	./tests/test
	lcov -t "Coverage Report" -c -d . --output-file coverage_report/coverage.info
	lcov --remove coverage_report/coverage.info "*/tests/*" -o coverage_report/filtered.info
	genhtml coverage_report/filtered.info --output-directory coverage_report/
	xdg-open coverage_report/index.html || open coverage_report/index.html

clang-format:
	clang-format -i $(ALL_SRC) tests/*.c

clean:
	rm -f $(OBJS) s21_decimal.a test test_valgrind
	rm -rf coverage_report
	rm -f tests/*.gcno tests/*.gcda tests/*.o
	rm -f $(ALL_SRC:.c=.gcno) $(ALL_SRC:.c=.gcda)