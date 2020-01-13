#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(void)
{
	int i = 1;
	string s;
	string * sl;

	while (1)
	{
		sl = new string[3];
		getline(cin, s);
		stringstream ss(s);

		for (int i = 0; i < 3; i++)
			ss >> sl[i];

		if (!sl[1].compare(">"))
			cout << "Case " << i++ << ": " << ((stoi(sl[0]) > stoi(sl[2])) ? "true" : "false") << endl;
		else if (!sl[1].compare(">="))
			cout << "Case " << i++ << ": " << ((stoi(sl[0]) >= stoi(sl[2])) ? "true" : "false") << endl;
		else if (!sl[1].compare("<"))
			cout << "Case " << i++ << ": " << ((stoi(sl[0]) < stoi(sl[2])) ? "true" : "false") << endl;
		else if (!sl[1].compare("<="))
			cout << "Case " << i++ << ": " << ((stoi(sl[0]) <= stoi(sl[2])) ? "true" : "false") << endl;
		else if (!sl[1].compare("=="))
			cout << "Case " << i++ << ": " << ((stoi(sl[0]) == stoi(sl[2])) ? "true" : "false") << endl;
		else if (!sl[1].compare("!="))
			cout << "Case " << i++ << ": " << ((stoi(sl[0]) != stoi(sl[2])) ? "true" : "false") << endl;
		else if (!sl[1].compare("E"))
			break;
	}
	return 0;
}