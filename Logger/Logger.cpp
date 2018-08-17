#include <iostream>
#include "Logger.h"

using namespace std;

static void Logger::writeLog(std::string information)
{
    cout << information << endl;
}