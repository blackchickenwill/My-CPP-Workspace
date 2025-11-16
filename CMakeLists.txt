cmake_minimum_required(VERSION 3.20)
project(My_CPP_Workspace CXX)

set(CMAKE_CXX_STANDARD 17)

# =====================================================
# Section 1: LeetCode 题目
# =====================================================
add_executable(LeetCode_BinaryTree LeetCode/二叉树与递归/1.cpp)
# ... 把你 LeetCode 文件夹下其他的 .cpp 文件都像这样加进来 ...
# add_executable(TargetName LeetCode/FolderPath/File.cpp)


# =====================================================
# Section 2: 编程网格作业 (Programming Grid)
# =====================================================
# 假设你把文件放在了 ProgrammingGrid/Midterm2025/ 目录下
add_executable(OJ_Main ProgrammingGrid/Midterm2025/main.cpp)
add_executable(OJ_Sort ProgrammingGrid/Midterm2025/排序.cpp)
add_executable(OJ_Operation ProgrammingGrid/Midterm2025/操作.cpp)
add_executable(OJ_DataTypeConversion ProgrammingGrid/Midterm2025/数据类型转换.cpp)
add_executable(OJ_PatientQueue ProgrammingGrid/Midterm2025/病人排队.cpp)
add_executable(OJ_Zhuxun ProgrammingGrid/Midterm2025/竹竿.cpp)
add_executable(OJ_TilePasting ProgrammingGrid/Midterm2025/贴瓷砖.cpp)


# =====================================================
# Section 3: 亚马逊棋大作业 (Amazon Chess Assignment)
# =====================================================
# 这里是为你未来的大作业预留的位置。
# 当你开始写代码后，比如创建了 AmazonChessAssignment/main.cpp，
# 你就可以取消下面这行的注释来让它生效。
# add_executable(AmazonChess AmazonChessAssignment/main.cpp)