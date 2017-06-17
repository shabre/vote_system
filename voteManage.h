//
//  voteManage.h
//  vote_system
//
//  Created by Shabre on 2017. 5. 29..
//  Copyright © 2017년 Shabre. All rights reserved.
//

#ifndef voteManage_h
#define voteManage_h
#include "vote.h"
#include <iostream>
class voteManage
{
public :
	Vote myVote;
	void getCurVoteDetail();//현재 진행중인 투표
	void vote();//투표할 사람을 변수로 받을 것.
	void getScdVoteDetail();//예정된 투표
	void getCmpVoteDetail();//종료된 투표
	
};
#endif /* voteManage_h */
