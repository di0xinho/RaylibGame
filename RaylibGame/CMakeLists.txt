cmake_minimum_required(VERSION 3.10)
project(RaylibGame)

# Ustawienia dla C++
set(CMAKE_CXX_STANDARD 17)

# Ustaw ścieżki do Raylib
set(RAYLIB_DIR "$ENV{VCPKG_ROOT}/packages/raylib_x64-windows")  # Zaktualizuj tę ścieżkę

# Dodaj pliki źródłowe
file(GLOB SOURCES "src/*.cpp")

# Tworzenie pliku wykonywalnego
add_executable(RaylibGame ${SOURCES})

# Ustawienia dla linkowania
include_directories(${RAYLIB_DIR}/include)
link_directories(${RAYLIB_DIR}/lib)

# Linkowanie z biblioteką Raylib
target_link_libraries(RaylibGame raylib opengl32 gdi32 winmm)
