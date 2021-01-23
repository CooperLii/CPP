cmake_minimum_required(VERSION 3.13)
project(Account)

set(CMAKE_CXX_STANDARD 14)

add_executable(Account "Account Inheritance main.cpp" SavingsAccount.cpp SavingsAccount.h CheckingAccount.cpp CheckingAccount.h Account.cpp Account.h)