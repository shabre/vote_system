//
//  Member.hpp
//  voteSystem
//
//  Created by Shabre on 2017. 6. 1..
//  Copyright © 2017년 Shabre. All rights reserved.
//

#ifndef Member_hpp
#define Member_hpp

#include <iostream>
#include <string>
using namespace std;

class Member{
private:
    string name;
    string regisNum;
    string address;
    string email;
    string ID;
    string PW;
public:
    int join_mem(string nam, string reg, string addr, string ema, string NewID, string NewPW);
    void withdraw_mem(string DelID);
    int check_mem(string ID, string PW);
};

#endif /* Member_hpp */
