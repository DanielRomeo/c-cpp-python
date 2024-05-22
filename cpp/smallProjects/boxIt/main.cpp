#include <iostream>
#include <ostream>
using namespace std;

class Box{
public:
    Box(){
        // l,b,h = 0;
        this->l =0;
        this->b = 0;
        this->h =0;
    }
    Box(int l, int b, int h): l(l), b(b), h(h){};
    Box(Box &box){
        this->l = box.l;
        this->h = box.h;
        this->b = box.b;
    }

    int getLength() const { return this->l;}
    int getBreadth() const { return this->b;}
    int getHeight() const { return this->h;}

    long long CalculateVolume(){
        long long vol = l *b * h;
        return vol;
    }

    // overload smaller than operator:
    bool operator<(Box &box){
        if(this->l < box.l){
            return true;
        }
        if(this->b < box.b && this->l == box.l){
            return true;
        }
        if(this->h < box.h  && this->b == box.b && this->l == box.l){
            return true;
        }
        return false;
    }

    // overload print operator:
    friend ostream& operator << (ostream& os, const Box &box){
        os << box.l << " " << box.b << " " << box.h ;
        return os;
    }

private:
    // length, breath & height:
    int l,b,h;
};


void check2()
{
   int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main(){
    check2();
    return 0;
}