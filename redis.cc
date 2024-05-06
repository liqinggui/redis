#include <locale>
#include <random>
#include <sys/time.h>

#include <boost/program_options.hpp>

int main()
{
    std::locale defaultLocale("");
    std::locale::global(defaultLocale);

    struct timeval tv;
    gettimeofday(&tv, NULL);
    return 0;
}