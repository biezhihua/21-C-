//
// Created by biezhihua on 2017/7/21.
//

#include <cstring>
#include <algorithm>

// 程序的主函数
int main() {

    float cubeNormals[2] = {0.1f, 0.2f};
    float cubeNormalsBuffer[2 * 2 * 2 * 2];

    std::fill_n(cubeNormalsBuffer, 2 * 2 * 2 * 2, 0);

    for (int i = 0; i < (2 * 2 * 2); i++) {
        memcpy((cubeNormalsBuffer + i * 2),cubeNormals,
               sizeof(float) * 2);
    }

    return 0;
}