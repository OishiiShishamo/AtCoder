@echo off
setlocal enabledelayedexpansion

:: ソースファイルの決定（引数が無い場合は main.cpp）
set "SOURCE_FILE=%~1"
if "%SOURCE_FILE%"=="" set "SOURCE_FILE=main"

:: "atcoder" の出現回数をカウント
set "ATCODER_COUNT=0"
for /f %%A in ('findstr /c:"atcoder" "%SOURCE_FILE%" ^| find /c /v ""') do set "ATCODER_COUNT=%%A"

:: "gmpxx.h" の出現回数をカウント
set "GMP_COUNT=0"
for /f %%A in ('findstr /c:"gmpxx.h" "%SOURCE_FILE%" ^| find /c /v ""') do set "GMP_COUNT=%%A"

:: コンパイルオプションの決定
set "CXX_FLAGS=-std=gnu++20 -O2 -Wall -Wextra"
set "LINK_FLAGS="

:: 第二引数に "debug" があればオプション追加
if /i "%~2"=="debug" (
    set "CXX_FLAGS=!CXX_FLAGS! -fsanitize=address -fsanitize=undefined"
)

:: "atcoder" が含まれていれば ac-library をインクルード
if %ATCODER_COUNT% GEQ 1 (
    set "CXX_FLAGS=!CXX_FLAGS! -I./ac-library"
)

:: "gmpxx.h" が含まれていればライブラリをリンク
if %GMP_COUNT% GEQ 1 (
    set "LINK_FLAGS=!LINK_FLAGS! -lgmpxx -lgmp"
)

:: コンパイル実行
g++ !CXX_FLAGS! "%SOURCE_FILE%.cpp" -o %SOURCE_FILE% !LINK_FLAGS!
