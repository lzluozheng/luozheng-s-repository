#include <iostream>
class HanXin {
	private:
		int m_line3,m_line5,m_line7,m_sum,m_flag;
	public:
		void line3(int f_line3) {
			m_line3=f_line3;
		}
		void line5(int f_line5) {
			m_line5=f_line5;
		}
		void line7(int f_line7) {
			m_line7=f_line7;
			Key_function ();
		}
		void Key_function (){
			m_flag=0;
			for(m_sum=10;m_sum<101;m_sum++)
			{
				if(m_sum%3==m_line3 &&m_sum%5==m_line5 &&m_sum%7==m_line7)
				{
					m_flag=1;
					break;
				}
			} 
		}
		void showMany() {
			if(m_flag)
			std::cout<<m_sum<<std::endl;
			else
			std::cout<<"Impossible"<<std::endl;
		}
};
int main() {
	int n, n1, n2,n3;
	std::cin >> n;
	for(int i = 0; i < n; ++i) {
		std::cin>>n1>>n2>>n3;
		HanXin hx;  //韩信
		hx.line3(n1);  //3人一排
		hx.line5(n2);   //5人一排
		hx.line7(n3);   //7人一排
		hx.showMany();
	}
}

