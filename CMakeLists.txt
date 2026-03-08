cmake_minimum_required(VERSION 3.10)
project(MyStudyProject)

# Указываем стандарт C++ (важно для вакансий)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Создаем программу 'my_prog' из файла 'main.cpp'
add_executable(prog main.cpp)
