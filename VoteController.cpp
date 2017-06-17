#include "voteController.h"

voteController::voteController()
{
	s.myVote = myVote;
	m.myVote = myVote;
}
void voteController::UI_3()
{
	int inputTag;
	cout << "3.1 : 투표 제안" << endl;
	cout << "3.2 : 되돌아가기" << endl;
	cout << "입력 : " << endl;
	cin >> inputTag;
	while (inputTag != 1 && inputTag != 2) {
		cout << "1이나 2를 입력하여주세요." << endl;
		cin >> inputTag;
	}
	if (inputTag == 1)
	{
		s.Suggest();
		UI_3();
	}
	else {
		//되돌아가기
		UI_4();
	}
}


void voteController::UI_4()
{
	int inputN;
	cout << "4.1 현재 진행 중인 리스트" << endl;
	cout << "4.2 투표" << endl;
	cout << "4.3 향후 진행 예정인 투표 리스트" << endl;
	cout << "4.4 종료된 투표 리스트" << endl;
	cout << "4.5 되돌아가기" << endl;
	cout << "입력 : ";
	cin >> inputN;
	switch (inputN)
	{
	case 1:
		m.getCurVoteDetail();
		UI_4();
		break;
	case 2:
		m.vote();
		UI_4();
		break;
	case 3:
		m.getScdVoteDetail();
		UI_4();
		break;
	case 4:
		m.getCmpVoteDetail();
		UI_4();
		break;
	case 5:
		UI_3();
		break;
	default:
		cout << "잘못된 번호를 입력하셨습니다. 다시 입력해주세요." << endl;
		cout << "====================================" << endl;
		UI_4();
		break;
	}
}