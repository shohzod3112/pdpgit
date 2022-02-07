//
//  main.cpp
//  s1vas2dannewsatr
//
//  Created by Shohzod on 22/01/22.
//  N1, N2 natural sonlari va s1, s2 satrlari berilgan. s1 satrning dastlabki belgisidan va s2 satrning oxirgi N2 ta belgisidan iborat yangi satr hosil qiling

#include <iostream>

using namespace std;

int main() {
    
    int N1, N2;
    string s1, s2, newsatr;
    
    
    cout << "s1 = "; getline(cin, s1);
    cout << "s2 = "; getline(cin, s2);
    
    cout << "Natural son kiriting\nN1 = "; cin >> N1;
    cout << "Natural son kiriting\nN2 = "; cin >> N2;

    newsatr = s1.assign(s1,0,N1) + s2.assign(s2, N2 + 2);
    
    cout << newsatr << endl;
    
    return 0;
}
