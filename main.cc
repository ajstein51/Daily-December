/**
 * AJ Stein 
 * adventofcode.com Day 1 Problem
 * This is in no way optimized it was just getting the answer.
 * 
 */

// My standard copy & paste
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cctype>
#include <string>
using namespace std;

int main(int argc, char** argv){
    string file = argv[1];             // Grabs command line arguments (for text file)
    ifstream ins;                      // Used to input from file

    // Opens file and checking for error, if error found output an error and end program
    ins.open(file);
    if(!ins){
        cout << "Something went wrong, the file didn't open!" << endl;
        exit(1);
    }

    // v1 is the vec with all the input, v2 is a vec for output, load is for grabbing 
    vector<int> v1;
    vector<int> v2;

    if(ins){
        int load;

        while(ins >> load)
            v1.push_back(load);
    }
    // Part 2: Finding 3 numbers that add to 2020 from the given input then take the product.
    // Part 1: Finding 2 number that add to 2020 from the given input then take the product
    for(size_t i = 0; i < v1.size(); i++){
        for(size_t j = 0; j < v1.size(); j++){
            for(size_t k = 0; k < v1.size(); k++){
                int sum2 = v1[i] + v1[j] + v1[k];
                if(sum2 == 2020){
                    int mul = v1[i] * v1[j] * v1[k];
                    v2.push_back(mul);
                }
            } 
        }
        
    }
    cout << "The answer is: " << v2[0];
    cout << endl;
    return 0;
}