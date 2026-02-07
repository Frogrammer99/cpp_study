#include <iostream>
#include <string>

class Histogram {
private:
	std::string words;
public:
	Histogram(std::string writing);
	Histogram& operator<< (std::string writing);
	Histogram& operator<< (char c);
	void operator! ();
};
Histogram::Histogram(std::string writing) {
	this->words = writing;
}
Histogram& Histogram::operator<< (std::string writing) {
	this->words += writing;
	return *this;
}
Histogram& Histogram::operator<< (char c) {
	this->words += c;
	return *this;
}
void Histogram::operator! () {
	int wordCount = 0;
	int alphaCount = 0;
	char alpha = 97;

	std::cout << words << std::endl << std::endl;

	for (int i = 0; i < words.length(); i++) {
		if (isalpha(words[i])) {
			this->words[i] = tolower(words[i]);
			wordCount++;
		}
	}
	std::cout << "ÃÑ ¾ËÆÄºª ¼ö: " << wordCount << std::endl;

	for (int i = 0; i < 26; i++) {
		alphaCount = 0;
		for (int j = 0; j < words.length(); j++)
			if (alpha == words[j])
				alphaCount++;
		std::cout << alpha << ": ";
		for (int j = 0; j < alphaCount; j++)
			std::cout << '*';
		std::cout << std::endl;
		alpha++;
	}
}

int main() {
	Histogram song("Wise men say, \nonly fools rush in But I can't help, \n");
	song << "falling" << " in love with you." << "- by ";
	song << 'k' << 'i' << 't';
	!song;
}