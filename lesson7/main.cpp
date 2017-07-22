
#include <cstring>
#include <algorithm>
#include <iostream>
#include<iostream>
#include<array>
#include "Cubes.h"
#include "CubesClientSide.h"
#include "GenData.h"
#include <vector>

using namespace std;

int main() {

    int requestedCubeFactor = 3;

    GenData *genData = new GenData();

    vector<float> *cubeData = genData->generatorCubeData(requestedCubeFactor, false, false)

    CubesClientSide *cubesClientSide = new CubesClientSide(
            &GenData::CUBE_NORMAL_DATA,
            &GenData::CUBE_TEXTURE_COORDINATE_DATA, cubeData, requestedCubeFactor);
    return 0;
}