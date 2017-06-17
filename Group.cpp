#include "Group.h"

Group::Group() {}
Group::~Group() {}

void Group::show_Group() {
	string nm, in, id;
	fstream fs;
	fs.open("group.txt", fstream::in);

	while (fs >> nm >> in >> id) {
		cout << nm << " " << in << " " << id << endl;
	}

	fs.close();
}

void Group::join_Group() {

}

void Group::make_Group(string nm, string in, string id) {
	fstream fs;
	fs.open("group.txt", fstream::out | fstream::app);

	fs << nm << " " << in << " " << id << endl;

	fs.close();
}

void Group::info_Group(string curr) {
	string nm, in, id;
	bool info = false;
	fstream fs;
	fs.open("group.txt", fstream::in);

	while (fs >> nm >> in >> id) {
		if (curr == id) {
			cout << nm << " " << in << " " << id << endl;
			info = true;
		}
	}

	if (info == false)
		cout << "가입한 그룹이 없습니다." << endl << endl;

	fs.close();
}

void Group::drop_Group() {

}