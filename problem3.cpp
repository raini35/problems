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
    long number = 1;
    long max = 13195;
    long largestPrime = 0;
    
    while(number <= max)
    {
        int flag = 0;

        if( (max % number) == 0)
        {
            flag = 1;
        }
        
        if (flag == 1)
        {
            
            int flag2 = 0;
            
            for (int y = 2; y <= (number/2); ++y)
            {
                if( number % y == 0)
                    flag2 = 1;
            }
            
            if(flag2 == 0)
            {
                cout << number << " is Prime." << endl;
                    if(largestPrime < number)
                        largestPrime = number;
            }
    
           
        }
        number++;
    }
    
    cout << "The largest prime is " << largestPrime << endl;
    return 0;
}

