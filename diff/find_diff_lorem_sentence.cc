#include <diff.hh>

extern "C" int LLVMFuzzerTestOneInput(uint8_t const *data, size_t size_data) {
    Kakoune::find_diff((const char*)data, size_data, "Quos animi ut officia quia. Iste ut quisquam placeat quia. Exercitationem culpa et placeat et aut enim.", 103);

    return 0;
}
