

#include <iostream>


using namespace std;

class List
{
public:
	struct list
	{
		int field; 
		list* ptr; 
	};
	list* init(int dlina, int nach)
	{
		list* lst = nullptr,
			* next = nullptr;
		for (unsigned i = dlina + nach - 1; i >= nach; i--)
		{
			lst = new list;
			lst->ptr = next;
			lst->field = i;
			next = lst;
		}
		return(lst);
	}
	void listprint(list* lst)
	{
		list* next = lst;
		while (next != 0) {
			cout << next->field;
			next = next->ptr;
		}
	}
	list* DelList(list* lst) {
		while (lst != NULL) {
			list* pr = lst;
			lst = lst->ptr;
			delete pr;
		}
		return lst;
	}
	list* Add(list* lst, int data, int num)
	{
		list* p = lst;
		int i = 1;
		while (i < num && p->ptr != NULL) {
			p = p->ptr;
			i++;
		}
		list* tmp = new list;
		tmp->field = data;
		tmp->ptr = p->ptr;
		p->ptr = tmp;
		return lst;

	}
	list* AddFirst(int data, list* lst) {
		list* tmp = new list;
		tmp->field = data;
		tmp->ptr = lst;
		return tmp;
	}
	list* AddLast(int data, list* lst) {
		list* tmp = new list, * cur = lst;
		tmp->field = data;
		tmp->ptr = nullptr;
		while (cur->ptr != NULL) {
			cur = cur->ptr;
		}
		cur->ptr = tmp;
		return lst;
	}
	list* Del(int n, list* lst)
	{
		list* tmp = lst, * p = NULL;
		unsigned i = 0;
		for (i; i < n - 1; i++) {
			p = tmp;
			tmp = tmp->ptr;
		}
		p->ptr = tmp->ptr;
		delete tmp;
		return lst;
	}
	list* DelLast(list* lst) {
		list* cur = lst;
		while (cur->ptr->ptr != NULL) {
			cur = cur->ptr;
		}
		delete cur->ptr;
		cur->ptr = NULL;
		return lst;
	}
	list* DelFirst(list* lst) {
		list* next = NULL;
		next = lst->ptr;
		delete lst;
		lst = next;
		return lst;
	}
	list* ChangeFirst(list* lst, int data) {
		list* tmp = lst;
		tmp->field = data;
		return tmp;
	}
	list* ChangeLast(list* lst, int data) {
		list* tmp = lst;
		while (tmp->ptr != NULL) {
			tmp = tmp->ptr;
		}
		tmp->field = data;
		return lst;
	}
	list* Change(list* lst, int data, int n) {
		list* tmp = lst, * p = NULL;
		unsigned i = 0;
		for (i; i < n - 1; i++) {
			p = tmp;
			tmp = tmp->ptr;
		}
		tmp->field = data;
		return lst;
	}
};

