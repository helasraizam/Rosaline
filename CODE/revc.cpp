// http://rosalind.info/problems/revc/

void revc()	// we're going to read into a string this time!
{
	char filename[]="DATA/rosalind_revc.txt";	// default filename (CAREFUL, we are running from ..!)

	ifstream ifs(filename,ifstream::ate);		// start at the end of the file
	if(ifs.fail())
	{
		Err((char*)"Error opening file %s\n\n",filename);
		return;
	}

	int length=ifs.tellg();
	ifs.seekg(0,ios::beg);

	char bff[length];
	ifs.read(bff,length-1);

	string str=&bff[0];
	str=stripToAllowableAlphabet(str,"ACTG");	// strip to only four letters shown.
	str=string(str.rbegin(),str.rend());		// Reverse it
	replace(str,"GTCA","CAGT");					// Complement
	cout<<str;
	soln<<str;

	ifs.close();
}
