#include "std_lib_facilities.h"

	template<typename Iter1, typename Iter2>

	Iter2 copiy(Iter1 f1, Iter1 e1, Iter2 f2){
		for (; f1 != e1; ++f1)
		{
			*f2= *f1;
			f2++;
		}
		return f2;
	}

int main(){

	int array[] ={0,1,2,3,4,5,5,6,7,8,9};
	vector<int> vec={0,1,2,3,4,5,6,7,8,9};
	list<int> l ={0,1,2,3,4,5,6,7,8,9};

	int array2[10];
	for(int i=0; i<10; ++i)
	{
		array2[i]=array[i];
	}
	vector<int>vector2(vec);
	list<int> list2(l);

	for (int i = 0; i < 10; ++i)
	{
		array[i] +=2;
		vec[i] +=3;
	}
	for(int& i:l)
		i +=5;

	copiy(array, array+10,vec.begin());
	copiy(l.begin(), l.end(), array);

	cout <<"array: ";
	for(int& i:array)
		cout << i << " ";
	cout << endl;

	cout <<"vector: ";
	for(int& i:vec)
		cout << i << " ";
		cout << endl;


	cout <<"list: ";
	for(int& i:l)
		cout << i << " ";
		cout << endl;

	if (find(vec.begin(), vec.end(), 3) != vec.end())
    {
        cout << "Position of number 3 in vec: ";
        for (int i = 0; i < vec.size(); ++i)
        {
            if (vec[i] == 3)
            {
                cout << i;
                cout << endl;
            }
        }
    }
    else{
                cout << "Number 3 was not found!" << endl;
            }

    if (find(l.begin(), l.end(), 27) != l.end())
    {
        int p = 0;
        for(int i:l){
            if (i == 27)
                {
                    cout << "Position of number 27 in vec: ";
                    cout << p << endl;
                    break;
                }
                p++;
            }
    }
    else{
                cout << "Number 27 was not found!" << endl;
            }

	
}