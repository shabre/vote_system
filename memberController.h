//
//  memberController.hpp
//  voteSystem
//
//  Created by Shabre on 2017. 6. 1..
//  Copyright © 2017년 Shabre. All rights reserved.
//

#ifndef memberController_h
#define memberController_h

#include <iostream>
#include "Member.h"
#include "user.h"

class MemberController{
private:
    Member M;
    User U;
    
public:
    //MemberController();
    //~MemberController();
    
    void UI_1();
    void join_mem_UI();
    void withdraw_mem_UI();
    void UI_2();
    void login_UI();
    void logout_UI();
    void UI_7();
    void relogin_UI();
};


#endif /* memberController_hpp */
