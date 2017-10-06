SRC = ../../src/memory.cc

CXX = clang++
INCLUDE = -I../../src
CFLAGS = -fsanitize=fuzzer,address -pedantic -std=gnu++14 -g -Wall -Wextra -Wno-unused-parameter -Wno-reorder -Wno-sign-compare -Wno-address -Wno-noexcept-type -Wno-unknown-attributes -Wno-unknown-warning-option
LDFLAGS = -fsanitize=fuzzer,address

all: fuzzer_find_diff_empty_string fuzzer_find_diff_lorem_sentence fuzzer_find_diff_lorem_paragraphs fuzzer_find_diff_graphemes

%.o: %.cc
	$(CXX) $(CFLAGS) $(INCLUDE) -c $< -o $@

fuzzer_find_diff_empty_string: find_diff_empty_string.o $(SRC:.cc=.o)
	$(CXX) $(LDFLAGS) -o $@ $^

fuzzer_find_diff_lorem_sentence: find_diff_lorem_sentence.o $(SRC:.cc=.o)
	$(CXX) $(LDFLAGS) -o $@ $^

fuzzer_find_diff_lorem_paragraphs: find_diff_lorem_paragraphs.o $(SRC:.cc=.o)
	$(CXX) $(LDFLAGS) -o $@ $^

fuzzer_find_diff_graphemes: find_diff_graphemes.o $(SRC:.cc=.o)
	$(CXX) $(LDFLAGS) -o $@ $^
