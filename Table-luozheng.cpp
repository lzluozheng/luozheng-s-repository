#include<iostream>
#include<cstring>
using namespace std;
class Table {
public:
  void set(int x,int y,string content);
  Table ();
  Table (int x,int y);
  ~Table()
  {
  	cout<<"game over"<<endl; 
  }
  void show()
  {
  for(int i=0;i<T_row;i++)
  	{
  		for(int j=0;j<T_col;j++){
		  cout<<Cells.con[i][j];
		  cout<<"        ";
	  }	
	  cout<<endl;
}

  }
  void addRow()
  {
  	T_row++;
  }
  void delRow(int n);
  void addColumn()
  {
  	T_col++;
  }
  void delColumn(int n);
private:
  Cell cells;
  int T_con;
  int T_row;
};
Table::Table ()
{
	T_con=5;
	T_row=5;
} 
Tabl::Table ()
{
	T_con=x;
	T_row=y;
} 
class Cell {
public:
  char con[10][10];
  Cell()
  ~Cell();
  //void show();
private:
  string content;
}
Cell::Cell()
{
  	for(int i=0;i<10;i++)
  	{
  		for(int j=0;j<10;j++){
		  con[i][j]=0;
	  }
};
int main() {
  Table tb;
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1(5,5);
  tb1.show();
  tb1.set(1,1,30);
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}


