#pragma once
#define EXPORT __declspec(dllexport)

#ifndef HEADER_FILE
#define HEADER_FILE
#else
#define HEADER_FILE
#endif

extern "C" HEADER_FILE void calculateHighestExpense();
extern "C" HEADER_FILE void calculateMonthlyExpense();
