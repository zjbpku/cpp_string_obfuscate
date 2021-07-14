# cpp_string_obfuscate



##### A simple method to obfuscate string text.



###### Usage

```
#include "obfuscator.h"
int main()
{
    std::cout << obfus::obfuscate("getObfuscatedText", "static secret") << std::endl;
    return 0;
}
```

after run the code, you will get below codes:

```
const char* getObfuscatedText() {
    return new char[12]{
        (char)(((((EAX << EAX ^ EAX) << EAX | EAX) << EAX << EAX << EAX ^ EAX) << EAX ^ EAX)),
        (char)((((((EAX << EAX ^ EAX) << EAX << EAX | EAX) << EAX ^ EAX) << EAX ^ EAX) << EAX ^ EAX)),
        (char)(((((EAX << EAX ^ EAX) << EAX << EAX | EAX) << EAX ^ EAX) << EAX << EAX ^ EAX)),
        (char)((((EAX << EAX ^ EAX) << EAX << EAX << EAX | EAX) << EAX << EAX ^ EAX)),
        (char)(EAX << EAX << EAX << EAX << EAX << EAX),
        (char)(((((EAX << EAX ^ EAX) << EAX | EAX) << EAX << EAX << EAX ^ EAX) << EAX ^ EAX)),
        (char)((((EAX << EAX ^ EAX) << EAX << EAX << EAX | EAX) << EAX << EAX ^ EAX)),
        (char)((((EAX << EAX ^ EAX) << EAX << EAX << EAX << EAX | EAX) << EAX ^ EAX)),
        (char)((((EAX << EAX ^ EAX) << EAX | EAX) << EAX << EAX << EAX ^ EAX) << EAX),
        (char)((((EAX << EAX ^ EAX) << EAX << EAX << EAX | EAX) << EAX << EAX ^ EAX)),
        (char)((((EAX << EAX ^ EAX) << EAX | EAX) << EAX << EAX ^ EAX) << EAX << EAX),
    };
}
```

 the method return  ```static secret```,  then you could add the method to your project.  




Refer to [obfus.go](https://github.com/GH0st3rs/obfus/blob/master/obfus.go) , thanks [GH0st3rs](https://github.com/GH0st3rs)

