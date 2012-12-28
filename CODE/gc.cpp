// http://rosalind.info/problems/gc/

void gc()	// we're going to read into a string this time!
{
	char filename[]="DATA/rosalind_revc.txt";	// default filename (CAREFUL, we are running from ..!)

	FILE *data(filename,"r");
	if(data==NULL)
	{
		Err((char*)"Error opening file %s\n\n",filename);
		return;
	}

	char bufferName[13],dnaStrand[1000];
	double maxGCpct;
	int maxGCnm,tmpGCnm;

	while(ifs.good())
	{
		fscanf(data,"Rosalind_%4i\n",&tmpGCnm);
		fscanf(data,">%s\n",dnaStrand);
		cout<<"Strand number "<<tmpGCnum<<" reads "<<dnaStrand<<Endl;
	}

	cout<<str;
	soln<<str;

	ifs.close();
}

