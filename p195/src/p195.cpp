#include <iostream>
#include <string>
using namespace std;

int main() {
	//adfadfaw
	//문자열 치환
	string a = "Java", b = "C++";
	a=b;
	cout << a << "\n" << b << endl;

	//문자열 비교
	string name = "Kitae";
	string alias = "Kito";
	int res = name.compare(alias);
	if(res == 0 ) cout << "두 문자열이 같다.";
	else if(res < 0) cout << name << " < " << alias << endl;
	else cout << alias << " < " << name << endl;

	//문자열 연결
	string q("I");
	q.append(" love ");
	cout << q << endl;

	string w("I love C++");
	string e(".");
	string r;
	r=w+e;
	r+=e;
	cout << r <<endl;

	//문자열 삽입
	string s("I love C++");
	s.insert(2, "really ");
	cout << s << endl;

	s.replace(2, 11, "study");
	cout << s << endl;

	//문자열 길이
	int length = s.length();
	int size = s.size();
	int capacity = s.capacity();
	cout << length << endl;
	cout << size << endl;
	cout << capacity << endl;

	//문자열 삭제
	s.erase(0,7);
	s.clear();
	cout << s << endl;

	//서브스트링
	string z = "I love C++";
	string c = z.substr(2,4);
	string x = z.substr(2);
	cout << c << endl;
	cout << x << endl;

	//문자열 검색
	string y = "I love love C++";
	int index = y.find("love");
	cout << index << endl;
	index = y.find("love",index+1);
	cout << index << endl;
	index = y.find("C#");
	cout << index << endl;
	index = y.find('v',7);
	cout << index << endl;

	//문자열의 각 문자 다루기
	string g("I love C++");
	char ch1 = g.at(7);
	cout << ch1 << endl;
	char ch2 = g[7];
	cout << ch2 << endl;
	g[7] = 'D';
	cout << g << endl;
	char ch3 = g.at(g.length()-1);
	cout << ch3 << endl;

	//문자열의 숫자 변환, stoi()
	string year = "2014";
	int n = stoi(year);
	cout << n << endl;

	//문자 다루기
	string m = "hello";
	for(int i = 0; i< m.length(); i++){
		m[i] = toupper(m[i]);
	}
	cout << m ;
	if(isdigit(m[0])) cout << "숫자";
	else if(isalpha(m.at(0))) cout << "문자";
	return 0;
}
