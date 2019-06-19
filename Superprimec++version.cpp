
#include<iostream>
using namespace std;
class SuperPrime {
	private:
		int m_max,m_count,m_sum;
	public:
		SuperPrime(int max,int count,int sum);
		int Judge(int h_num);
		int Prime(int h_num1);
		void Max (int h_max);
		void Sum (int h_sum);
		void Count(int h_count);
		void Show () {
			cout<<"最大的超级素数是："<<m_max<<endl<<"超级素数之和为："<<m_sum<<endl<<"超级素数的个数为："<<m_count<<endl;
		}
};
SuperPrime::SuperPrime(int max,int count,int sum) {
	m_max=max;
	m_count=count;
	m_sum=sum;
}
int SuperPrime::Prime(int h_num1) {
	if(h_num1==0)
		return 0;
	else {
		bool flag=true;
		int i;
		for(i=2; i<h_num1; i++) {
			if(h_num1%i==0) {
				flag=false;
				break;
			}
		}
		return flag;
	}
}
void SuperPrime::Count(int h_count) {
	m_count=m_count+1;
}
int SuperPrime::Judge(int h_num) {
	int a,b,c;
	a=h_num/100;
	b=h_num/10-a*10;
	c=h_num-a*100-b*10;
	//cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
	if(Prime(a+b+c) && Prime(a*b*c) && Prime(a*a+b*b+c*c) && Prime(h_num))
		return 1;
	else
		return 0;
}
void SuperPrime::Max(int h_max) {
	if(h_max>m_max)
		m_max=h_max;
}
void SuperPrime::Sum(int h_sum) {
	m_sum=h_sum+m_sum;
}
int main () {
	int i;
	SuperPrime Sp(0,0,0);
	for(i=100; i<1000; i++) {
		if(Sp.Judge(i)) {
			Sp.Count(i);
			Sp.Max(i);
			Sp.Sum(i);
		}
	}
	Sp.Show();
	return 0;
}
