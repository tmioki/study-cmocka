cmake_minimum_required(VERSION 3.10)
project(CMockaExample C)

# CMocka ライブラリの設定
find_package(CMocka REQUIRED)

# C標準の設定
set(CMAKE_C_STANDARD 99)

# ソースファイル
set(SRC src/main.c src/mylib.c)

# テストファイル
set(TEST_SRC test/test_main.c)

# 実行ファイルを作成
add_executable(main ${SRC})

# テスト用実行ファイルを作成
include_directories(include)
add_executable(test_runner ${TEST_SRC} src/mylib.c)
target_link_libraries(test_runner cmocka)

# テストターゲットを追加
#enable_testing()
#add_test(NAME test_runner COMMAND test_runner)
