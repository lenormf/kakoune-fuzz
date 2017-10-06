#include <diff.hh>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const *data, size_t size_data) {
    Kakoune::find_diff((const char*)data, size_data, "", 0);

    return 0;
}
