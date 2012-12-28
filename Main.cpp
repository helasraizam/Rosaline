#include "Maziar/head.h"

fstream soln("Solution.txt",ios::out|ios::in);

#include "CODE/Lib.h"	//contains useful functions for challenges to use.
#include "files.h"	//contains file import info

// Main function acts as a switch between the challenges
int main()
{
	cout<<"\n\n\nRosalind Problem Solver\n\n";

	void (*fns[])()={dna,rna,revc,gc};	//	I know.  http://publications.gbdirect.co.uk/c_book/chapter5/function_pointers.html

	if(!soln.is_open())
		Err("Could not open Soln file.");

	int probnbr;
	cout<<"Enter problem number: ";
	cin>>probnbr;
	cout<<endl;

	fns[--probnbr]();	// The 0 index thing

	soln.close();

	cout<<"\n\n\n";
}
