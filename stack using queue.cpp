#include<iostream>
using namespace std;

class stack
{
	//private:
	int N;
	int q1;
	int q2;
	
	public:
		stack()
		{
			N=0;
		}
		
		void push(int val)
		{
			push(val);
			N++;
			while(!empty())
			{
				q2.push(q1.front());
				q1.pop();
			}
			
			queue<int> temp=q1;
			q1=q2;
			q2=temp;
		}
		
		void pop()
		{
			q1.pop();
			N--;
		}
		
		int top()
		{
			return q1.front();
		}
		
		int size()
		{
			return N;
		}
		
	
	
};

int main()
{
	stack st;
	
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	st.pop();
	
	cout<<st.size();
	return 0;
}
