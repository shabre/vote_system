#pragma once
#ifndef voteController_h
#define voteController_h
#include "voteManage.h"
#include "voteSuggest.h"

class voteController
{
public: Vote myVote;
		voteManage m;
		voteSuggest s;
		voteController();
		void UI_3();
		void UI_4();
};

#endif