#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
#include <iomanip>
#include <fstream>


using namespace std;
bool check[6] = { false, };
bool check1[6] = { false, };

int FP1, FP2, FP3, FP4, FP5;
int TP1, TP2, TP3, TP4, TP5;
int BP1, BP2, BP3, BP4, BP5;
int LP1, LP2, LP3, LP4, LP5;

int n, it, ic, ip, i, timeprice, h, temp;
int temp1, temp2, temp3, temp4, temp5;


string t, s, c, p, timecode;

vector<pair<string, int>> time1;
vector<pair<string, int>> time2;
vector<pair<string, int>> time3;
vector<pair<string, int>> time4;
vector<pair<string, int>> time5;
vector<string> ItemCode;


static bool cmp(tuple<string, string, int>& data1, tuple<string, string, int>& data2)
{
	return get<1>(data1) < get<1>(data2);
}


void DivCnP(int x, vector <tuple<string, string, int>>dt, int y)
{
	timecode = get<1>(dt[x]);
	timeprice = get<2>(dt[x]);



	if (y == 1 && check[1] == true)
	{
		time1.push_back(make_pair(timecode, timeprice));
	}
	if (y == 2 && check[2] == true)
	{
		time2.push_back(make_pair(timecode, timeprice));
	}
	if (y == 3 && check[3] == true)
	{
		time3.push_back(make_pair(timecode, timeprice));
	}
	if (y == 4 && check[4] == true)
	{
		time4.push_back(make_pair(timecode, timeprice));
	}
	if (y == 5 && check[5] == true)
	{
		time5.push_back(make_pair(timecode, timeprice));
	}

}

int prt2(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10, int n11, int n12, int n13, int n14, int n15, int n16, int n17, int n18, int n19, int n20, int n21, vector<string> s1)
{
	cout.setf(ios::right);
	cout << setw(10) << s1[n21];
	cout << setw(10) << "최초가";
	cout << setw(10) << "최고가";
	cout << setw(10) << "최저가";
	cout << setw(10) << "최종가\n";

	cout << setw(10) << "12:30";
	cout << setw(10) << n1;
	cout << setw(10) << n2;
	cout << setw(10) << n3;
	cout << setw(9) << n4 << "\n";


	cout << setw(10) << "13:00";
	cout << setw(10) << n5;
	cout << setw(10) << n6;
	cout << setw(10) << n7;
	cout << setw(9) << n8 << "\n";

	cout << setw(10) << "13:30";
	cout << setw(10) << n9;
	cout << setw(10) << n10;
	cout << setw(10) << n11;
	cout << setw(9) << n12 << "\n";


	cout << setw(10) << "14:00";
	cout << setw(10) << n13;
	cout << setw(10) << n14;
	cout << setw(10) << n15;
	cout << setw(9) << n16 << "\n";


	cout << setw(10) << "14:30";
	cout << setw(10) << n17;
	cout << setw(10) << n18;
	cout << setw(10) << n19;
	cout << setw(9) << n20 << "\n";

	cout << "\n";

	FP1 = 0; BP1 = 0;  TP1 = 0; LP1 = 0;
	FP2 = 0; BP2 = 0;  TP2 = 0; LP2 = 0;
	FP3 = 0; BP3 = 0;  TP3 = 0; LP3 = 0;
	FP4 = 0; BP4 = 0;  TP4 = 0; LP4 = 0;
	FP5 = 0; BP5 = 0;  TP5 = 0; LP5 = 0;

	return 0;
}



int main()
{
	string find_str = ":";
	string replace_str = "";
	string find_str1 = "-";

	vector <tuple<string, string, int>> data;


	ifstream file("data.txt");

	//파일 입력
	while (getline(file, s))
	{
		// :, - 삭제
		n = 0;
		while (n < 2)
		{
			s.replace(s.find(find_str), find_str.length(), replace_str);
			n++;
		}
		s.replace(s.find(find_str1), find_str1.length(), replace_str);

		//시간, 코드, 가격만 추출
		t = s.substr(0, 12);
		c = s.substr(12, 6);
		p = s.substr(23, 9);
		
		//코드값만 따로 저장 => 코드별 가격 추출때 사용
		ItemCode.push_back(c);

		ip = stoi(p);
		data.push_back(make_tuple(t, c, ip));
	}
	//코드값만 추출한 값 오름차순 정렬
	sort(ItemCode.begin(), ItemCode.end());
	
	//코드 중복값 삭제
	ItemCode.erase(unique(ItemCode.begin(), ItemCode.end()), ItemCode.end());

	//data값 코드별 오름차순 정렬
	sort(data.begin(), data.end(), cmp);

	i = 0;




	//
	while (i < data.size())
	{
		if ("123000000000" < get<0>(data[i]) && get<0>(data[i]) < "125959999999")
		{
			check[1] = true;
			DivCnP(i, data, 1);
			i++;
		}
		else if ("130000000000" < get<0>(data[i]) && get<0>(data[i]) < "132959999999")
		{
			check[2] = true;
			DivCnP(i, data, 2);
			i++;
		}
		else if ("132959999999" < get<0>(data[i]) && get<0>(data[i]) < "135959999999")
		{
			check[3] = true;
			DivCnP(i, data, 3);
			i++;
		}
		else if ("140000000000" < get<0>(data[i]) && get<0>(data[i]) < "142959999999")
		{
			check[4] = true;
			DivCnP(i, data, 4);
			i++;
		}
		else if ("143000000000" < get<0>(data[i]) && get<0>(data[i]) < "145959999999")
		{
			check[5] = true;
			DivCnP(i, data, 5);
			i++;
		}
		if (i == data.size())
		{
			if (time1.size() == 0)
			{
				time1.push_back(make_pair(timecode, 0));
			}
			if (time2.size() == 0)
			{
				time2.push_back(make_pair(timecode, 0));
			}
			if (time3.size() == 0)
			{
				time3.push_back(make_pair(timecode, 0));
			}
			if (time4.size() == 0)
			{
				time4.push_back(make_pair(timecode, 0));
			}
			if (time5.size() == 0)
			{
				time5.push_back(make_pair(timecode, 0));
			}
		}
	}


	sort(time1.begin(), time1.end());
	sort(time2.begin(), time2.end());
	sort(time3.begin(), time3.end());
	sort(time4.begin(), time4.end());
	sort(time5.begin(), time5.end());




	for (int i = 0; i < ItemCode.size(); i++)
	{


		for (int j = temp1; j < time1.size(); j++)
		{
			//첫번째 시간
			if (ItemCode[i] == time1[temp1].first)
			{
				if (FP1 == 0)
				{
					FP1 = time1[j].second;
					BP1 = time1[j].second;
				}
				LP1 = time1[j].second;
				if (time1[j].second > TP1)
				{
					TP1 = time1[j].second;
				}
				if (time1[j].second < BP1)
				{
					BP1 = time1[j].second;
				}
				temp1++;
			}
			else
			{
				break;
			}
		}
		for (int k = temp2; k < time2.size(); k++)
		{
			if (ItemCode[i] == time2[temp2].first)
			{
				if (FP2 == 0)
				{
					FP2 = time2[temp2].second;
					BP2 = time2[temp2].second;
				}
				LP2 = time2[temp2].second;
				if (time2[temp2].second > TP2)
				{
					TP2 = time2[temp2].second;
				}
				if (time2[temp2].second < BP2)
				{
					BP2 = time2[temp2].second;
				}
				temp2++;
			}
			else
			{
				break;
			}
		}
		for (int z = temp3; z < time3.size(); z++)
		{

			if (ItemCode[i] == time3[temp3].first)
			{
				if (FP3 == 0)
				{
					FP3 = time3[temp3].second;
					BP3 = time3[temp3].second;
				}
				LP3 = time3[temp3].second;
				if (time3[temp3].second > TP3)
				{
					TP3 = time3[temp3].second;
				}
				if (time3[temp3].second < BP3)
				{
					BP3 = time3[temp3].second;
				}
				temp3++;
			}
			else
			{
				break;
			}
		}
		for (int g = temp4; g < time4.size(); g++)
		{

			if (ItemCode[i] == time4[temp4].first)
			{
				if (FP4 == 0)
				{
					FP4 = time4[temp4].second;
					BP4 = time4[temp4].second;
				}
				LP4 = time4[temp4].second;
				if (time4[temp4].second > TP4)
				{
					TP4 = time4[temp4].second;
				}
				if (time4[temp4].second < BP4)
				{
					BP4 = time4[temp4].second;
				}
				temp4++;
			}
			else
			{
				break;
			}
		}
		for (int y = temp5; y < time5.size(); y++)
		{

			if (ItemCode[i] == time5[temp5].first)
			{
				if (FP5 == 0)
				{
					FP5 = time5[temp5].second;
					BP5 = time5[temp5].second;
				}
				LP5 = time5[temp5].second;
				if (time5[temp5].second > TP5)
				{
					TP5 = time5[temp5].second;
				}
				if (time5[temp5].second < BP5)
				{
					BP5 = time5[temp5].second;
				}
				temp5++;
			}
			else
			{
				break;
			}
		}
		prt2(FP1, TP1, BP1, LP1, FP2, TP2, BP2, LP2, FP3, TP3, BP3, LP3, FP4, TP4, BP4, LP4, FP5, TP5, BP5, LP5, i, ItemCode);
	}

	return 0;
}


