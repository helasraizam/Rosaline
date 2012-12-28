// http://rosalind.info/media/problems/rna/RNA-DNA.png

void rna()
{
	char filename[]="DATA/rosalind_rna.txt";	// default filename (CAREFUL, we are running from ..!)

	ifstream ifs(filename);
	if(ifs.fail())
	{
		Err((char*)"Error opening file %s\n\n",filename);
		return;
	}

	char bff;
	while(ifs.good()&&!isspace(bff=ifs.get()))
	{
		cout<<((bff=='T')?'U':bff);
		soln<<((bff=='T')?'U':bff);
	}

	ifs.close();
}

