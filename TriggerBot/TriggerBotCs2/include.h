#pragma once
#ifndef INCLUDE_H
#define INCLUDE_H

#include <Windows.h>
#include <iostream>

#include <TlHelp32.h>
#include <vector>
#include <algorithm>

#include <thread>
#include <chrono>
#include "memory.h"


using namespace std;

#pragma once

#include <Windows.h>
#include <thread> 
#include <chrono>
#include <iostream>
#include <d3d11.h>

#include <vector>
#include <string>

#include <filesystem>
#include <fstream>

#include <mutex>
#include <map>
#include <unordered_map>

#include "memory.h"


#include "TriggerBot.h"

#include "offsets.hpp"
#include "struct.hpp"

#define M_PI 3.14159265358979323846

#pragma warning(disable: 4005)

#define DEBUG 1

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

template <typename T> T Read(uint64_t addr)
{
	T Novalue = {};
	if (!IsBadReadPtr((const void*)addr, sizeof(T)))
	{
		return *(T*)(addr);
	}
	else
	{
		return Novalue;
	}

};

#endif