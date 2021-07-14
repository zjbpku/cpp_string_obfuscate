// obfuscator.h
//
// created by zjbpku
//
//

#ifndef OBFUSCATOR_H
#define OBFUSCATOR_H

#include <iostream>
#include <string>
#include <time.h>
#define EAX sizeof(true)
#define ONE "EAX"
namespace obfus
{
    using namespace std;

    string getNumber(char ch)
    {
        string arr;
        int temp;
        while (ch - 0 > EAX)
        {
            temp = 0;
            if (ch % 2 == EAX)
            {
                temp = EAX;
            }
            arr = arr.append(to_string(temp).c_str());
            ch = ch >> EAX;
        }

        string result = ONE;

        srand(time(NULL));

        for (int i = arr.length() - 1; i >= 0; i--)
        {
            result = result + " << " + ONE;
            if (arr.c_str()[i] - '0' == EAX)
            {
                if (rand() % 2 == 0)
                {
                    result = "(" + result + " ^ " + ONE + ")";
                }
                else
                {
                    result = "(" + result + " | " + ONE + ")";
                }
            }
        }
        return result;
    }

    string obfuscate(const string &methodName, const string &text)
    {
        string lines;
        int length = text.length();
        for (int i = 0; i < length; i++)
        {
            lines += "        (char)(" + obfus::getNumber(text.c_str()[i]) + "),\n";
        }
        return "const char* " + methodName + "() {\n    return new char[" + to_string(length + 1) + "]{\n" + lines + "    };\n}";
    }

}

#endif