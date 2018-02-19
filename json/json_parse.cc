#include <string.hh>
#include <exception.hh>
#include <value.hh>

using namespace Kakoune;

namespace Kakoune {
    std::tuple<Value, const char*> parse_json(StringView json);
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    StringView data_str{(const char*)data, (ByteCount)size};

    try
    {
        parse_json(data_str);
    }
    catch (runtime_error&) {}
    catch (utf8::invalid_codepoint&) {}
    catch (bad_value_cast&) {}

    return 0;
}
