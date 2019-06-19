#include<iostream>
class Number {
	private:
		int m_num,m_maxDivisor;
	public:
		Number maxDivisor(Number n){
			m_maxDivisor=n.m_num<m_num?n.m_num:m_num;
			for(;m_maxDivisor>0;m_maxDivisor--){
				if(n.m_num%m_maxDivisor==0 && m_num%m_maxDivisor==0)
				break;
			}
			return n; 
		}
		Number(int num);
	void show (){
		std::cout/*<<"the maxDivisor is:"*/<<m_maxDivisor<<std::endl;
	}
};
Number::Number(int num){
	m_num=num;
}
int main() {
    int n, n1, n2;
    std::cin >> n;
    for(int i = 0; i < n; ++i) {
        std::cin >> n1 >> n2;
        Number no1(n1), no2(n2); 
        no1.maxDivisor(no2);  //最大公约数
        Number no3 =no1;
        no3.show();
    }
    return 0;
}

