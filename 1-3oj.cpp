#include <iostream>
class Number{
	private:
		int m_num,m_system;
	public:
		Number (int f_N_num,int f_N_system){
			m_num=f_N_num;
			m_system=f_N_system;
		}
		Number converto (int f_system){
			int f_mid_a,f_mid_b=0,f_mid_c;
			f_mid_c=1;
			while(m_num){
				f_mid_b=f_mid_b+(m_num%10)*f_mid_c;
				m_num/=10;
				f_mid_c*=m_system;
			}
			f_mid_a=1;
			while(f_mid_b){
				m_num=(f_mid_b%f_system)*f_mid_a+m_num;
				f_mid_b/=f_system;
				f_mid_a*=10;
			}
			return Number(m_num,m_system); 
		}
		void show (){
			std::cout<<m_num<<std::endl;
		}
}; 
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1, 10);     //n1是10进制正整数
        Number no3 = no1.converto(n2);  //no3是n2进制的正整数
        no3.show();     //输出结果
    }
    return 0;
}

