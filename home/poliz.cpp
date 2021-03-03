#include <string>
#include <vector>
#include <stack>

std::vector<Lexem *> parseLexem(
	std::string codeline);
	
std::vector<Lexem *> buildPoliz(
	std::vector<Lexem *> infix);

int evaluatePoliz(
	std::vector<Lexem *> poliz);

int main() {
	std::string codeline;
	std::vector<Lexem *> infix;
	std::vector<Lexem *> postfix;
	int value;

	while (std::getline(std::cin, codeline)) {
		infix = parseLexem(codeline);
		postfix = buildPostfix(infix);
		value = evaluatePostfix(postfix);
		std::cout << value << std::endl;		
	}
	return 0;
}
