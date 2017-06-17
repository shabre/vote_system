//
//  voteSuggest.h
//  vote_system
//
//  Created by Shabre on 2017. 5. 29..
//  Copyright © 2017??Shabre. All rights reserved.
//

#ifndef vote_h
#define vote_h
#include <iostream>
#include <string>

using namespace std;
typedef struct node
{
	string topic;
	string item[100];
	int itemN;
	//Time
	int result[100];
	int tag;
	//0:curVote 1:ScdVote 2:CmpVote
	
	//suggester
	node* next;
};

class Vote {
public : 
	Vote();
	node* first;
	node* end;
	void insert(node *v);
	void getlist(int tag);
protected :
	
	void deleteByTime();
	void Delete(int index);
};


#endif /* vote_h */
