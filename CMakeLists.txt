cmake_minimum_required(VERSION 3.24)
project (SmartPtr)

set(CMAKE_CXX_STANDARD 17)

add_executable(SmartPtr main.cpp illness.cpp illness.h hospital.cpp hospital.h hcp.cpp hcp.h patient.cpp patient.h)
