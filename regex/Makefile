SRC = \
    ../../src/regex_impl.cc \
    ../../src/string.cc \
    ../../src/exception.cc \
    ../../src/memory.cc \
    ../../src/unit_tests.cc

CXX = clang++
INCLUDE = -I../../src
CFLAGS = -fsanitize=fuzzer,address -std=gnu++14 -g -Wno-unused-parameter -Wno-reorder -Wno-sign-compare -Wno-address -Wno-noexcept-type -Wno-unknown-attributes -Wno-unknown-warning-option
LDFLAGS = -fsanitize=fuzzer,address

all: fuzzer_regex_match_self

%.o: %.cc
	$(CXX) $(CFLAGS) $(INCLUDE) -c $< -o $@

fuzzer_regex_match_self: $(SRC:.cc=.o) regex_fuzzer_match_self.o
	$(CXX) $(LDFLAGS) -o $@ $^