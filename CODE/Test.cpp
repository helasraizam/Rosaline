#include "Maziar/head.h"
#include "Lib.h"

// Serves to debug (mostly for Lib.cpp)

void testReplace()
{
	string cue="Hello, I am the quick brown dog !\nthe second farce.";
	replace(cue,"Hmleq","qxyz!");
	cout<<cue;
}

void testStrip()
{
	string cue="IHi,IISIteIvIe!III,\n\t\rHowIIIIIIAireIyou?";
	string cue1=strip(cue,'I');
	//cout<<cue1;
}

void teststripWhitespace()
{
	string test="  \tHi, T~!his\ris\nmy       text. ";
	cout<<stripWhitespace(test);
}

void teststripAllowableAlphabet()
{
	string test="My dear aunt Sally don't sell nothin.";
	string aleph="Mr Smith";
	cout<<stripToAllowableAlphabet(test,aleph);
}

int main()
{
	cout<<"\n\nDebugging:\n\nTesting replace:\n";

	testReplace();
	cout<<"\n\nTesting strip:\n";
	testStrip();
	cout<<"\n\nTesting stripWhitespace:\n";
	teststripWhitespace();
	cout<<"\n\nTesting stripAllowableAlphabet:\n";
	teststripAllowableAlphabet();
	cout<<"\n\n";
}
