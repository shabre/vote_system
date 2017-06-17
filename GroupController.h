#ifndef GROUP_CONTROLLER_H_
#define GROUP_CONTROLLER_H_

#include <iostream>
#include <string>
#include "Group.h"
using namespace std;

class GroupController {
	private:
		Group G;
		string currID;

	public:
		GroupController();
		~GroupController();

		void UI_5();
		void show_group_UI();
		void join_group_UI();
		void make_group_UI();
		void info_group_UI();
		void drop_group_UI();
};

#endif