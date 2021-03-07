#include <memory>
#include <vector>
#include <cstdlib>

namespace camstr
{

    template <typename __CTYPE,
              __CTYPE __EOF_FLAG,
              void *(*__MALLOC)(size_t) = malloc,
              void *(*__REALLOC)(void *, size_t) = realloc,
              void (*__FREE)(void *) = free>
    class basic_str
    {
    private:
    public:
        cam_basic_str(/* args */);
    };

} // namespace cam