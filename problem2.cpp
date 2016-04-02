//
//  main.cpp
//  Project-Euler
//
//  Created by Rainier Go on 4/2/16.
//  Copyright © 2016 Rainier. All rights reserved.
//

#include <iostream>
#include <cmath> 
using namespace std;

int main(int argc, const char * argv[]) {
    int sum = 0;
    int i = 1;
    int h = 0;
    int x;
    int evenValues = 0;
    
    while (i < 4000000)
    {
        
        x = i;
        sum = i + h;
        i = sum;
        h = x;
     
        if ((i %2) == 0)
        {
            evenValues += i;
            cout << i << endl;
        }
            

    }
    
    cout << i << endl;
    cout << evenValues;
    
    return 0;
}

