// Save useful functions here so all challenges can use it and for visibility.

void replace(string& str,string a,string b)		// replace (ONE WAY!!) character i of string a with character i of string b
{
	for(int i=0;i<str.length();i++)
		for(int j=0,repd=0;j<a.length()&&!repd;j++)	// a.length()==b.length()
			if(str[i]==a[j])
			{
				str[i]=b[j];
				repd=true;
			}
}

string strip(string txt,char del)		// delete all occurences of one character from string
{										// remember that string.substr(START,LENGTH).
	int werami=0,length=1;
	string ntxt;
	do
	{
		ntxt+=txt.substr(werami,txt.find(del,werami)-werami);	//substring from previous stop to del beginnning
		werami=txt.find(del,werami)+length;
	}while(txt.find(del,werami)!=string::npos);	// while char is still here
	return ntxt;
}

string stripWhitespace(string txt)		// take out [ /r/t/n/v/f]
{
	char ntxt[txt.length()];	// must init to maxsize :(
	int j=0;
	for(int i=0;i<txt.length();i++)
		if(!isspace(txt[i]))
			ntxt[j++]=txt[i];
	ntxt[j]='\0';	// end char[] here
	return ntxt;
}

string stripToAllowableAlphabet(string txt,string allowed="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789")	// c++ doesn't have regexp :(
{
	char ntxt[txt.length()];	// must init to maxsize :(
	int k=0;
	for(int i=0;i<txt.length();i++)
		for(int j=0,repd=0;j<allowed.length()&&!repd;j++)
			if(txt[i]==allowed[j])
			{
				ntxt[k++]=txt[i];
				repd=1;			// go to next letter.
			}
	ntxt[k]='\0';
	return ntxt;
}
