#include <iostream>
#include "voteSuggest.h"

using namespace std;

	void voteSuggest :: Suggest()
	{
		
			node* newVote = new node;
			cout << "투표 주제가 무엇입니까?" << endl;
			cout << "입력 : " << endl;
			cin >> newVote->topic;
			cout << "몇 가지 항목을 넣겠습니까?(최대 100개)" << endl;
			cout << "입력 : " << endl;
			cin >> newVote->itemN;
			while (newVote->itemN > 100 || newVote->itemN < 0)
			{
				cout << "항목의 수는 0-100 사이의 수로 해주세요." << endl;
				cout << "입력 : " << endl;
				cin >> newVote->itemN;
			}
			for (int i = 0; i < newVote->itemN; i++)
			{
				cout << i+1 << "번째 항목은 무엇입니까?" << endl;
				cout << "입력 : ";
				cin >> newVote->item[i];
				newVote->result[i] = 0;
			}

			// 시작 시간 및 종료 시간 정하기
			// 제안자 설정

			newVote->tag = 0;
			//진행중/진행예정 등을 결정.
			newVote->next = myVote.end;
			myVote.insert(newVote);
			cout << "*추가되었습니다*" << endl;
			cout << "===================" << endl;

		
	}