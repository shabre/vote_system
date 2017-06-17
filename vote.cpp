#include <iostream>
#include "vote.h"

using namespace std;


	Vote :: Vote()
	{
		first = new node;
		end = new node;
		first->next = end;
		first->tag = -1;
		first->topic = "no topic";
		first->itemN = 0;
	}
	void Vote::deleteByTime()
	{
		//시간 check후 삭제 시각이 된 Vote 삭제
		node * cur = first;
		int i = 0;
		while (cur != end)
		{
			i++;
			//if(시간 체크/tag 체크) 
			//Delete(i); 
			cur = cur->next;
		}
	}
	
	void Vote :: insert(node *v)
	{
		node * cur = first;
		while (cur->next != end) cur = cur->next;
		v->next = end;
		cur->next = v;
	}
	void Vote :: getlist(int tag)
	{
		node* cur = first->next;
		if (tag == 0) { cout << endl << "*현재 진행중인 투표*" << endl; }
		else if (tag == 1) { cout << endl << "*향후 예정된 투표*" << endl; }
		else { cout << endl << "*종료된 투표*" << endl; }
		while (cur != end)
		{
			if (cur->tag == tag)
			{
				cout << "주제 : " << cur->topic << endl;
				for (int i = 0; i < cur->itemN; i++)cout << i + 1 <<". "<< cur->item[i] << endl;
				//tag = 0 남은 시간 출력
				//tag = 1 시작시간 및 남은 시간 출력
				//tag = 2 결과 출력
			}
			cur = cur->next;
		}
		cout << endl << endl;
	}
	void Vote:: Delete(int index)
	{
		node* cur = first;
		node* temp;
		for (int i = 1; i < index; i++) cur = cur->next;//지워야할 것 직전
		temp = cur->next;
		cur->next = cur->next->next;
		delete temp;
	}

