//#include <iostream>
//#include <string>
//#include <vector>
//
//int main() {
//	int num;
//	std::cin >> num;
//	std::vector<std::string> stringVector;
//	std::string temp;
//
//	for (int i = 0; i < num; ++i) {
//		std::cin >> temp;
//		stringVector.push_back(temp);
//	}
//
//	// 중복 요소 삭제
//	std::vector<std::string>::iterator it;
//	std::vector<std::string>::iterator it2;
//	for (it = stringVector.begin(); it != stringVector.end(); ++it) {
//		if (it + 1 == stringVector.end())
//			break;
//
//		for (it2 = it + 1; it2 != stringVector.end();) {
//			if (*it == *it2) {
//				it2 = stringVector.erase(it2);
//			}
//			else
//				++it2;
//		}
//	}
//
//	// 글자수 오름차순 정렬
//	for (int i = 0; i < stringVector.size() - 1; ++i) {
//		for (int j = i + 1; j < stringVector.size(); ++j) {
//			if (stringVector[i].length() > stringVector[j].length()) {
//				temp = stringVector[i];
//				stringVector[i] = stringVector[j];
//				stringVector[j] = temp;
//			}
//		 }
//	}
//
//	// 같은 글자 수인 원소들 간 사전순 정렬
//	int group = 0;
//	int length = 0;
//	for (int i = 0; i < stringVector.size() - 1;) {
//		group = i;
//		length = stringVector[i].length();
//		for (int j = i + 1; j < stringVector.size(); ++j) {
//			if (length == stringVector[j].length())
//				++group;
//			else
//				break;
//		} 
//
//		if (group == i) {
//			++i;
//			continue;
//		}
//		else {
//			for (int j = i; j < group; ++j) {
//				for (int k = j + 1; k <= group; ++k) {
//					if (stringVector[j] > stringVector[k]) {
//						temp = stringVector[j];
//						stringVector[j] = stringVector[k];
//						stringVector[k] = temp;
//					}
//				 }
//			}
//		}
//		i = group + 1;
//	}
//
//	// 정렬된 데이터 출력
//	for (int i = 0; i < stringVector.size(); ++i)
//		std::cout << stringVector[i] << std::endl;
//
//}
/////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int num;
    std::cin >> num;
    std::vector<std::string> vec(num);

    for (int i = 0; i < num; ++i) std::cin >> vec[i];

    // 1. 정렬: 길이순 -> 사전순 (한 번에 처리)
    std::sort(vec.begin(), vec.end(), [](const std::string& a, const std::string& b) {
        if (a.length() != b.length())
            return a.length() < b.length(); // 길이 오름차순
        return a < b; // 길이가 같으면 사전순
        });

    // 2. 중복 제거: 정렬되어 있으므로 인접한 중복들만 밀어내면 됨
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    // 3. 출력
    for (const auto& s : vec) std::cout << s << "\n";
}