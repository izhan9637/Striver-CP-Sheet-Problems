// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> polyhedronMapWithFaces;
    polyhedronMapWithFaces["Tetrahedron"] = 4;
    polyhedronMapWithFaces["Cube"] = 6;
    polyhedronMapWithFaces["Octahedron"] = 8;
    polyhedronMapWithFaces["Dodecahedron"] = 12;
    polyhedronMapWithFaces["Icosahedron"] = 20;

    int n;
    cin >> n;
    int sumOfFaces = 0;
    for(int i = 0; i < n; i++) {
        string polyhedron;
        cin >> polyhedron;
        sumOfFaces += polyhedronMapWithFaces[polyhedron];
    }
    cout << sumOfFaces;
}
