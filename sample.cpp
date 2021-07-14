#include "obfuscator.h"

int main()
{
    std::cout << obfus::obfuscate("getObfuscatedText", "some secret") << std::endl;
    return 0;
}

