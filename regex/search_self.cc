#include <string.hh>
#include <regex_impl.hh>
#include <exception.hh>

using namespace Kakoune;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    String data_str{(const char*)data, (ByteCount)size};

    try
    {
        Vector<String::iterator> matches;
        CompiledRegex re = compile_regex(data_str, RegexCompileFlags::None);
        regex_search(data_str.begin(), data_str.end(), matches, re);
    }
    catch (runtime_error&) {}
    catch (utf8::invalid_codepoint&) {}

    return 0;
}
