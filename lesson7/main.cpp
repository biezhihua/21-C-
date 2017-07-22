
#include <cstring>
#include <algorithm>
#include <iostream>
#include<iostream>
#include<array>
#include "Cubes.h"
#include <vector>

using namespace std;

int main() {

    Cubes *cubes = new Cubes();
    vector<float> *cube = cubes->generatorCubeData(3, false, false);

    return 0;
}