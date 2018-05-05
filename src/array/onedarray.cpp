//
// Created by jusung lee on 2018-05-02.
//
#include <iostream>
#include <cstdlib>

using namespace std;

#include "onedarray.h"

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
