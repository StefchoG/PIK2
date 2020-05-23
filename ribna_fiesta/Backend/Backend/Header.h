#pragma once
#define EXPORT __declspec(dllexport)

#ifndef HEADER_FILE
#define HEADER_FILE

EXPORT void calculateHighestExpense();
EXPORT void calculateMonthlyExpense();

#endif