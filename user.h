//
//  entity.hpp
//  vote_system
//
//  Created by Shabre on 2017. 6. 1..
//  Copyright © 2017년 Shabre. All rights reserved.
//

#include <iostream>
#include <string>
#ifndef user_h
#define user_h

using namespace std;

class User{
private:
    string id;
    int level;//0: nonMemver 1:member 2:groupmember 3:groupManager
public:
    User(){id="guset", level=0;}
    int returnLevel(){return level;}
};



#endif /* entity_hpp */
