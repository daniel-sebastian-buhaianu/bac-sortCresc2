#include <fstream>
#define NRMIN 0
#define NRMAX 99
using namespace std;
ifstream fin("numere.in");
ofstream fout("numere.out");
bool uz[NRMAX+1];
int main()
{
    int x;
    while (fin >> x) uz[x] = 1;
    fin.close();
    for (x = NRMIN; x <= NRMAX; x++)
        if (uz[x]) fout << x << ' ';
    fout.close();
    return 0;
}
