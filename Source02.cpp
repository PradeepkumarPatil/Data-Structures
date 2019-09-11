#include <iostream>
using namespace std;

void strcpyimpl(char *s1, char* s2)
{
	int i = 0;
	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i] = '\0';
}

int main() {
	char s1[] = "Pradeepkumar";
	char s2[] = "Aishwarya";
	cout << "Before: " << s1 << " " << s2 << endl;

	strcpyimpl(s1, s2);

	cout << "After: " << s1 << " " << s2 << endl;
	return 0;
}
