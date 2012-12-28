// http://rosalind.info/problems/dna/
void dna()
{
	char filename[]="DATA/rosalind_dna.txt";	// default filename (CAREFUL, we are running from ..!)

	ifstream ifs(filename);
	if(ifs.fail())
	{
		Err((char*)"Error opening file %s\n\n",filename);
		return;
	}

	int a=0,c=0,t=0,g=0;
	char bff;
	while(ifs.good())
	{
		bff=ifs.get();
		switch(bff)
		{
			case 'A':a++;break;
			case 'C':c++;break;
			case 'T':t++;break;
			case 'G':g++;break;
		}
	}

	cout<<a<<" "<<c<<" "<<g<<" "<<t;
	soln<<a<<" "<<c<<" "<<g<<" "<<t;

	ifs.close();
}
