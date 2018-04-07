/* 
 * File:   main.cpp
 * Author: bodey
 *
 * Created on April 7, 2018, 11:53 PM
 */

#include <bits/stdc++.h>

using namespace std;
#define sf scanf
#define pf printf
#define sfi1(a1) sf("%d", &a1)
#define sfi2(a1, a2) sf("%d%d",&a1, &a2)
#define pfi1(a1) pf("%d", a1)
#define FORI(i, s, e) for(int i=s; i<e; i++)
#define FORD(i, s, e) for(int i=s; i>e; i--)
#define lp(i, e) FORI(i, 0, e)

int main() {
    int n, t;
    sfi2(n,t);
    if(n == 1 && t == 10)
        pfi1(-1);
    else{
        pfi1(t);
        if(t == 10)
            lp(i, n-2)
                pf("0");
        else
            lp(i, n-1)
                pf("0");
    } 
    return 0;
}


