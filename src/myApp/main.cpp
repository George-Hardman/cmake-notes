#include <iostream>
#include "mylib.h"

using namespace std;

int main() {
    cout << "This is from the main executable\n";

    // If the library has been correctly linked then this will run.
    functionFromLibrary();

    return 0;
}