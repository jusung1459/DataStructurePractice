//
// Created by jusung lee on 2018-05-02.
//
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


int microArray() {
    int t,n,k;
    int m;
    int min;
    int add;

    //number of test cases
    cin >> t;

    for(int i=0; i<t; i++) {
        cin >> n >> k;
        int a[n];
        for(int j=0; k>n; j++) {
            int num;
            cin >> num;
            if(num < min) {
                add = k - num;
            }
            a[j] = num;
        }

        for(int k=0; k<n; k++) {
            a[k] = a[k] + add;
        }
    }
    return 0;

}


//Unfortunately, Conan is in a real danger! Conan discovered who
// is the killer after searching for the evidence in a dangerous cave.
// Now, he is standing in front of a bomb that about to explode.
// The bomb will explode after m seconds.
int willHeDie() {
    int t,n,m;
    int p,q;
    cin >> t;

    for(int i=0; i<t; i++) {
        cin >> n >> m;

        p = n;
        q = pow(2,3);
        cout << (p % (int)std::pow(10,9)+7)/q;
    }
}
