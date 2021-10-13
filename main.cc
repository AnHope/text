#include <iostream>
#include <fstream>

int main(){
	using namespace std::literals;
	std::ifstream file;
	file.open("input.txt");
	std::string s;
	std::string s1;
	int len = 0;
	while (file >> s) {
		len=s1.length()+s.length();
		if(len <= 40){
			if (s1.length()>0) s1.append(" ");
			s1.append(s);
		}
		else {
		len=0;
		std::cout << s1 << std::endl;
		s1.clear();
		s1.append(s);
		}
	}
	std::cout << s1;
	file.close();
	return 0;
}
