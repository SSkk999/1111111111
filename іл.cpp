#include <iostream>
#include <array>
#include <algorithm>
#include <functional>
#include <ctime>
#include <numeric> 
#include <random>
using namespace std;

//auto es{
//	[](int x) { return x % 2 == 0; }
//};
//auto es1{
//	[](int x) { return x % 5 == 1; }
//};
//auto es3{
//	[](int x) { return x < 0; }
//};

//void executeAction(int times, const std::function<void(int)>& action) {
//	for (int i = 0; i < times - 1; i++)
//	{
//		action(i);
//	}
//}
//void executeAction(int times,string_view name,const std::function<void(int)>& action) {
//	for (int i = 0; i < name.size(); i++)
//	{
//		if (name[i] == 'e')
//		{
//			action(i);
//		}
//		
//	}
//}
void sd(int s,int d)
{
	cout << (s * s) + (d * d) << endl;
}
double (*addnumber)(double, double) {
	[](double s, double d)
		{ 
			cout << (s * s) + (d * d) << endl;
			return (s * s) + (d * d);
		}
};
auto rand_lambda = [](int n) {
	return rand() % n;
	};
int main()
{
	///////1.1
	// 	array<int, 5>sd1 = { 1,4,4,3 };
//	auto sd = all_of(sd1.begin(), sd1.end(),es);
//	if (sd)
//	{
//		cout << "good " << endl;
//	}
//	else
//	{
//		cout << "net " << endl;
//	}
//}
	////1.2
//	array<int, 5>sd1 = { 0,4,40,3 };
//	auto sd = any_of(sd1.begin(), sd1.end(), es1);
//if (!sd)
//{
//	cout << "good " << endl;
//}
//else
//{
//	cout << "net " << endl;
//}
//
//}
	/////1.3
//	array<int, 5>sd1 = { 0,4,40,3 };
//	auto sd = any_of(sd1.begin(), sd1.end(), es3);
//if (!sd)
//{
//	cout << "good " << endl;
//}
//else
//{
//	cout << "net " << endl;
//}
//
//}
////////////////////////////2222222222222222222
	//executeAction(10, [](int i) {cout << i * i << endl; });
///////////////////////////33333333333333333333
	//array autos{
	//"aeep",
	//"Ford",
	//"Chevy",
	//"BMW",
	//"Mercedes",
	//"VW",
	//"Volvo",
	//"Subaru",
	//"Hyundai",
	//"Kia",
	//"Tesla",
	//"GM",
	//"Chrysler",
	//"Buick",
	//"Ram",
	//"Lincoln",
	//"Renault",
	//};
	//auto positiv = find_if(autos.begin(), autos.end(), [](auto& name) {return name[0] == 'a'; });
	//if (positiv != autos.end())
	//{
	//	cout << "good" << endl;
	//}
	//else
	//{
	//	cout << "not" << endl;
	//}
	/////////////////////////////4444444444444444444444444444444444444444444444444
//	array autos{
//"aeep",
//"Ford",
//"Chevy",
//"BMW",
//"Mercedes",
//"VW",
//"Volvo",
//"Subaru",
//"Hyundai",
//"Kia",
//"Tesla",
//"GM",
//"Chrysler",
//"Buick",
//"Ram",
//"Lincoln",
//"Renault",
//	};
//	auto positiv = adjacent_find(autos.begin(), autos.end(), [](auto& name,auto& name1) {return name[0] == name1[0]; });
//	if (positiv != autos.end())
//	{
//		cout << "good" << endl;
//	}
//	else
//	{
//		cout << "not" << endl;
//	}


//////////////////////55555555555555555555555555555555555
//int static count = 0;
//	array<string_view, 20> sd{
//		"aeep",
//			"Ford",
//			"Chevy",
//			"BMW",
//			"Mercedes",
//			"VW",
//			"Volvo",
//			"Subaru",
//			"Hyundai",
//			"Kia",
//			"Tesla",
//			"GM",
//			"Chrysler",
//			"Buick",
//			"Ram",
//			"Lincoln",
//			"Renault",
//
//	};
//	count_if(sd.begin(), sd.end(), [](string_view sd) {
//		for (int i = 0; i < sd.size(); i++)
//		{
//			if(sd[i] == 'e') {
//				return count++;
//			}
//		}
//		});
//
//	cout << "count:" << count << endl;
/////////////////////////////////////////////////////////////////6666666666666666666666666666
//array<int, 5>sd1 = { 1,4,4,3 };
//sort(sd1.begin(), sd1.end(), [](int one, int  to) {
//	return one < to;
//	});
//
//for_each(sd1.begin(), sd1.end(), [](int one) {
//	cout << one << endl;
//	});
///////////////////////////////////////////////////////////////////7777777777777777777777777777777777
//array<int, 5>sd1 = { 1,4,5,3 };
//auto min  = min_element(sd1.begin(), sd1.end());
//auto max = max_element(sd1.begin(), sd1.end());
//cout << "min:" << *min << endl;
//cout << "max:" << *max << endl;
/////////////////////////////////////////////////////////////////////8888888888888888888888888888888888
//array<int, 5>sd1 = { -12,-4,-5,-3 };
//transform(sd1.begin(), sd1.end(), sd1.begin(),[](int one) {
//	if (one < 0)
//	{
//		return abs(one);
//	}
//	});
//for_each(sd1.begin(), sd1.end(), [](int one) {
//	cout << one << endl;
//	});
/////////////////////////////////////////////////////////////////////////////99999999999999999999999999999
//addnumber(3, 4);
///////////////////////////////////////////////////////10101010101010101010101010101010101010101010101010101010101010101010101010101010100101010101010
array<int, 10>arr;
iota(arr.begin(), arr.end(), 1);
srand(time(nullptr));
random_device rd;
mt19937 g(rd());

shuffle(arr.begin(), arr.end(),g);
for_each(arr.begin(), arr.end(), [](int one) {
	cout << one << endl;
	});

}