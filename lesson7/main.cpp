
#include <cstring>
#include "Cubes.h"
#include "GenData.h"
#include "CubesClientSide.h"

using namespace std;

int main() {


    GenData *genData = new GenData();

    CubesClientSide *cubes = reinterpret_cast<CubesClientSide *>(genData->genCube(3, false, false));

    return 0;
}