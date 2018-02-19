SRC = \
    ../../src/alias_registry.cc \
    ../../src/assert.cc \
    ../../src/backtrace.cc \
    ../../src/buffer.cc \
    ../../src/buffer_manager.cc \
    ../../src/buffer_utils.cc \
    ../../src/changes.cc \
    ../../src/client.cc \
    ../../src/client_manager.cc \
    ../../src/color.cc \
    ../../src/command_manager.cc \
    ../../src/commands.cc \
    ../../src/completion.cc \
    ../../src/context.cc \
    ../../src/display_buffer.cc \
    ../../src/env_vars.cc \
    ../../src/event_manager.cc \
    ../../src/exception.cc \
    ../../src/face_registry.cc \
    ../../src/file.cc \
    ../../src/hash.cc \
    ../../src/hash_map.cc \
    ../../src/highlighter_group.cc \
    ../../src/highlighters.cc \
    ../../src/hook_manager.cc \
    ../../src/input_handler.cc \
    ../../src/insert_completer.cc \
    ../../src/json_ui.cc \
    ../../src/keymap_manager.cc \
    ../../src/keys.cc \
    ../../src/line_modification.cc \
    ../../src/memory.cc \
    ../../src/normal.cc \
    ../../src/option_manager.cc \
    ../../src/parameters_parser.cc \
    ../../src/ranges.cc \
    ../../src/ranked_match.cc \
    ../../src/regex.cc \
    ../../src/regex_impl.cc \
    ../../src/register_manager.cc \
    ../../src/remote.cc \
    ../../src/selection.cc \
    ../../src/selectors.cc \
    ../../src/shared_string.cc \
    ../../src/shell_manager.cc \
    ../../src/string.cc \
    ../../src/string_utils.cc \
    ../../src/unit_tests.cc \
    ../../src/window.cc \
    ../../src/word_db.cc

CXX = clang++
INCLUDE = -I../../src
CFLAGS = -fsanitize=fuzzer,address -std=gnu++14 -g -Wno-unused-parameter -Wno-reorder -Wno-sign-compare -Wno-address -Wno-noexcept-type -Wno-unknown-attributes -Wno-unknown-warning-option
LDFLAGS = -fsanitize=fuzzer,address

all: fuzzer_json_parse

clean:
	rm -f json_parse.o

%.o: %.cc
	$(CXX) $(CFLAGS) $(INCLUDE) -c $< -o $@

fuzzer_json_parse: $(SRC:.cc=.o) json_parse.o
	$(CXX) $(LDFLAGS) -o $@ $^
