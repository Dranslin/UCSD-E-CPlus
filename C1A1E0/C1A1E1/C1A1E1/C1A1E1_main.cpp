/*
* Nicholas Patience U07985691
* Nickspatience@gmail.com
* C/C++ Programming I : Fundamental Programming Concepts
* 132297 Ray Mitchell
* ##/##/2018
* C#A#E#
* Win 10
* Visual C++ 2017
*
* Indicate the major contents of this file, such as:
* names and brief descriptions of any functions defined;
* anything else relevant;
* etc.
* DO NOT COPY OR RESTATE MY INSTRUCTIONS IN THE TITLE BLOCK OR ANYWHERE ELSE.
*/


// Oblective: Write the following in a single cout statement using string literal, octal and hex
// 1. C/C++ (,;{=$?)
// 2. C / C++ (, ; { = $ ? )
// 3. C / C++ (, ; { = $ ? )
// 4. \"\\%\n33+

#include "stdafx.h"
#include <iostream>

int main()
{
    std::cout << "1. C/C++ (,;{=$?)" << std::endl <<
        "\62\56\40\103\57\103\53\53\40\50\54\73\173\75\44\77\51" << std::endl <<
        "\x33\x2e\x20\x43\x2f\x43\x2b\x2b\x20\x28\x2c\x3b\x7b\x3d\x24\x3f\x29" << std::endl <<
        "4. \\\"\\%\\n33+" << std::endl;

    system("pause");
    return 0;
}

