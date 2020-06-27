/*
 * Chapter1.cpp
 *
 *  Created on: 27-Jun-2020
 *      Author: manik
 */


#include <array>
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
using namespace std;

class S {
public:
	int i;
	char c;

	void init(int in , char ch){
		i =in;
		c= ch;
	}

};


/*
 *
vector::begin() and vector::end()
vector::rbegin() and vector::rend()
vector::cbegin() and vector::cend()
vector::crend() and vector::crbegin()


vector::capacity()
vector::size()
vector::empty()
vector::max_size()

vector::clear()
vector::resize()
vector::reserve()
vector::shrink_to_fit()

vector::operator[]
vector::at()
vector::back()
vector::front()
vector::data()

vector::operator=
vector::push_back()
vector::pop_back()
vector::insert()
vector::erase()
vector::swap()
vector::assign()
vector::emplace_back()
vector::emplace()
 */

class myclass{
public:
	int a;
	char b;
	double c;
	void my();
};

void myclass::my(){

	a=10;
	b='k';
	c=10.0;
}

int main()
{

	array<S,10> arr;

	for (int i =0;i<10;i++){
		arr[i].init(i+1,'a'+i);
	}

	for (int i =0;i<10;i++){
		cout<<arr[i].i<<arr[i].c;
	}

	try{
		cout<<arr[12].i<<arr[11].c;

	}catch(out_of_range& e){
		cout<<"0Out Of Range";
	}

	cout<<"For any Data Structure, there are broadly 4 operations";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout<<"\n"<<"1.Capacity";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout<<"\n"<<"2.Element Access";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout<<"\n"<<"3.Iteration";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	cout<<"\n"<<"4.Modification";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	cout<<"\n\n"<<"Lets Start with Vector , which is a one dimensional re-sizable Array";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));


	cout<<"\n"<<"Capacity includes size(),capacity(),max_size(),empty() which don't modify the vector.";
	cout<<"\n"<<"resize(n),shrink to fit,reserve() modify the vector.";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	cout<<"\n"<<"Element Access includes [] ,at(),front(),back().";
	cout<<"\n"<<"data() returns direct pointer to the memory array.";

	std::this_thread::sleep_for(std::chrono::milliseconds(1000));

	cout<<"\n"<<"Major Iterator operations in C++ STL are begin(), end()";
	cout<<"\n"<<"Other operations are reverse (rbegin(),rend()) and constant versions of these 4";
	cout<<"\n"<<"Modifiers are push_back(),pop_back(),insert(pos),erase(),clear(),swap(),assign(),emplace(),emplace_back()";
	cout<<"\n for emplace check http://candcplusplus.com/c-difference-between-emplace_back-and-push_back-function";
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));


	vector<int> v;


	for (int i=0;i<10;i++)
		v.push_back(i);
	for (int i=0;i<10;i++)
		cout<<"\nv.at()"<<v.at(i);
	cout<<"\nv.front()"<<v.front();
	cout<<"\nv.back()"<<v.back();

	vector<int> v1;
	vector<int>::iterator itr;
	v1.swap(v);

	for (int i=0;i<10;i++)
		cout<<"\nv1.at()"<<v1.at(i);

	cout<<"\n After swap size of v is :"<<v.size();

    v.assign(1, 100);
	cout<<"\nAfter assign size of v is "<<v.size();


	for (itr = v1.begin();itr<v1.end();itr++){
		cout<<"\n"<<*itr;
	}


	cout<<"\nAfter erase size of v is "<<v.size();

	vector<myclass> classvector;

	myclass m;
	m.my();
	classvector.push_back(m);

	for(auto i =classvector.begin();i<classvector.end();i++){
		cout<<"\n"<<i->a<<i->b<<i->c;
		cout<<"\n using at()"<<classvector.at(0).a;
	}



	return 0;
}



