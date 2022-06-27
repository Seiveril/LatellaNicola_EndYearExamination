#pragma once
#ifndef DLLCLASSES_H
#define DLLCLASSES_H

#ifdef DllExport
#define DECLSPEC __declspec(dllexport)
#else 
#define DECLSPEC __declspec(dllimport)
#endif

#endif