#include "gdescent.h"
using namespace std;

LinearReg::LinearReg() {
	info1=info2=" ";
	t1=t2=0;
	m=0;
	alpha=1;
	d=nullptr;
}

LinearReg::LinearReg(string info1, string info2) : info1{info1}, info2{info2} {
	t1=t2=0;
        m=0;
        alpha=0.001;
        d=nullptr;
}

void LinearReg::add(int x, int y) {
	d=new Data{x,y,d};
	m++;
	eval();
}

void LinearReg::print() {
	Data *curr=d;
	while(curr) {
		cout<<"("<<curr->x<<","<<curr->y<<")"<<endl;
		curr=curr->next;
	}
}

void LinearReg::eval() {
	double h,p1=0,p2=0,temp1,temp2;
	Data *curr=d;
	while(curr) {
		cout<<t2<<" ";
		h=t1+t2*curr->x;
		p1+=(h-(curr->y));
		p2+=(h-(curr->y))*curr->x;
		curr=curr->next;
	}
	// alpha=abs(1/(100*p2));
	cout<<t1<<" ";
	p1=p1/m*alpha;
	p2=p2/m*alpha;
	temp1 = t1 - p1;
	temp2 = t2 - p2;
	if((temp1!=t1)&&(temp2!=t2)) {
		t1=temp1;
		t2=temp2;
		eval();
	}
}

void LinearReg::predict(int x) {
	double y=(t1+t2*x);
	cout<<"The prediction for "<<info2<<" on "<<info1<<" "<<x<<" is "<<y<<endl;
}

void LinearReg::remove(int x) {
	Data *curr = d;
	if(curr && curr->x==x) {
		d=d->next;
		delete curr;
	} else {
		while(curr->next && curr->next->x!=x) {
			curr=curr->next;
		}
		if(curr->next->x==x) {
			Data *temp = curr->next;
			curr=curr->next->next;
			delete temp;
		}
	}
}

LinearReg::~LinearReg() {
	Data *curr=d;
	while(curr) {
		Data *temp = curr;
		curr=curr->next;
		delete temp;
	}
	d=nullptr;
}

std::istream & operator>>(std::istream & in, LinearReg &l) {
	string i1,i2,t;
	int x,y;
	getline(in,t);
	i1=t.substr(0,t.find(","));
	i2=t.substr(t.find(",")+1,t.length());
	l=LinearReg(i1,i2);
	return in;
}

int main() {
	LinearReg l;
	cin>>l;
	int x,y;
	char ch;
	while(ch!='q') {	
		cin>>ch;
		switch(ch) {
			case '+': cin>>x>>y;
			  	  l.add(x,y);
			  	  break;
			case 'p': cin>>x;
			  	  l.predict(x);
			  	  break;
			case 'r': cin>>x;
			  	  l.remove(x);
			  	  break;
			case 's': l.print();
			          break;
			default: cout<<"Invalid input";
		}
	}
	return 0;
}
