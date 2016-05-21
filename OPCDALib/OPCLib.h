#ifndef OPCLIB_H
#define OPCLIB_H

#include <Windows.h>
#include <Winerror.h>
#include <stdio.h>
#include <tchar.h>
#include <objbase.h>
#include <olectl.h>
#include <comcat.h>
#include <atlconv.h>
#include <atlbase.h>
#include <string>
#include <vector>

using namespace std;

vector<string> getOpcServers(char* host);
vector<string> getOpcServerTags(char* host, char* progId);

#endif