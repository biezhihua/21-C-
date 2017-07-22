
#include <cstring>
#include "Cubes.h"
#include "GenData.h"

using namespace std;

int main() {


    GenData *genData = new GenData();

    Cubes *cubes = genData->genCube(3, false, false);

    return 0;
}