#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    auto h = CreateFileA("😊.txt",                // name of the write
                       GENERIC_WRITE,          // open for writing
                       0,                      // do not share
                       NULL,                   // default security
                       CREATE_NEW,             // create new file only
                       FILE_ATTRIBUTE_NORMAL,  // normal file
                       NULL);                  // no attr. template

    CloseHandle(h);

    std::cout << "สวัสดีชาวโลก\n"
              << "こんにちは世界\n"
              << "مرحبا بالعالم\n"
              << "你好，世界 😊\n";
}