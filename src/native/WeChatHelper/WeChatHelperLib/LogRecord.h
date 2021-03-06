#pragma once

#ifdef DLLEXPORT

#define DLLAPI _declspec(dllexport)

#else

#define DLLAPI _declspec(dllimport)

#endif

#include <fstream>
#include <iostream>
#include <string>

extern std::ofstream ofs;

DLLAPI BOOL LogRecord(const TCHAR* fmt, std::ofstream& oFile, ...);

BOOL LogFileCreate(std::ofstream& oFile);
char* TCHAR2char(const TCHAR* STR);
TCHAR* char2TCAHR(const char* str);