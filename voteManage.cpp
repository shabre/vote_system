#include <iostream>
#include "voteManage.h"

using namespace std;


void voteManage::getCurVoteDetail()
{
	myVote.getlist(0);
	
}
void voteManage :: vote()//투표할 사람을 변수로 받을 듯
{
	//현재 진행중인 투표 보여주기
	node* cur = myVote.first->next;
	 cout << endl << "*현재 진행중인 투표*" << endl; 
	 int nvote = 1;
	while (cur != myVote.end)
	{
		if (cur->tag == 0)
		{
			cout <<nvote<< ". 주제 : " << cur->topic << endl;
			for (int i = 0; i < cur->itemN; i++)cout << i + 1 << ". " << cur->item[i] <<"("<<cur->result[i]<<")"<< endl;
			nvote++;
			//tag = 0 남은 시간 출력
		}
		
		cur = cur->next;
	}
	cout << endl << endl;
	//////////////////////////////////////////////////
	//투표
	cout << "어느 투표에 참여하시겠습니까? 입력 : ";
	int whatVote;
	cin >> whatVote;
	//이미 투표한 투표는 또 할 수 없음.
	//if(already vote)
	//{cout<<"이미 투표를 마친 투표입니다."<<endl;
	//cout<< "===============================" << endl << endl;
	//vote();}
	//////////////

	//현재 진행중인 투표 번호를 선택하지 않음
	int i;
	cur = myVote.first;
	for (i = 0; i < whatVote; i++)cur = cur->next;
	if (cur->tag != 0)
	{
		cout << "해당 투표는 현재 진행 중인 투표가 아닙니다. 다시 선택해주세요" << endl;
		cout << "===============================" << endl << endl;
		vote();
	}

	////////////////////투표하기///////////////////////
	cout << "*투표 가능 항목*" << endl;
	for (i = 0; i < cur->itemN; i++)
	{
		cout << i+1 << ". " << cur->item[i] << endl;
	}
	cout << "어느 항목을 선택하시겠습니까? 입력 : ";
	int selected;
	cin >> selected;
	//투표 항목 번호를 잘못 기입함.
	while (selected <1 || selected >cur->itemN)
	{
		cout << "1 ~ " << cur->itemN << "사이의 수를 선택해 주세요. 입력 :";
		cin >> selected;
	}

	cur->result[selected - 1]++;
	cout << "투표에 참여해주셔서 감사합니다." << endl;
	cout << "=====================================" << endl << endl;
	
}
void voteManage:: getScdVoteDetail()
{
	myVote.getlist(1);
}
void voteManage:: getCmpVoteDetail() {
	myVote.getlist(2);
}