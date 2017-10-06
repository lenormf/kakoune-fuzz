#include <diff.hh>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const *data, size_t size_data) {
    Kakoune::find_diff((const char*)data, size_data, "а́ы́", 4);

    return 0;
}
