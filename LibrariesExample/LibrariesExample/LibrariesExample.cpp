// LibrariesExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Helper.h"
#include <iostream>
#include <sstream>
#include <string>
#include <armadillo>

using namespace std;
using namespace arma;

int main(int argc, char * argv[])
{
	if (argc > 1){
		if (!std::string(argv[1]).compare("--version")){
			cout << "Armadillo version: " << arma_version::as_string() << endl;
		}

		if (!std::string(argv[1]).compare("--help")){
			cout << AppHelp << endl;
		}

		if (!std::string(argv[1]).compare("--default-size")){
			mat A(4, 4);  // directly specify the matrix size (elements are uninitialised)

			cout << "Matrix has " << A.n_rows << " rows";  // .n_rows and .n_cols are read only
			cout << " and " << A.n_cols << " colums" << endl;
		}

		if (!std::string(argv[1]).compare("--matrix-size")){
			if (argv[2] && argv[3]){
				istringstream ssx(argv[2]);
				int x;
				if (!(ssx >> x))
					cerr << "Invalid number " << argv[2] << '\n';

				istringstream ssy(argv[3]);
				int y;
				if (!(ssy >> y))
					cerr << "Invalid number " << argv[3] << '\n';

				mat A(x, y);  // directly specify the matrix size (elements are uninitialised)

				cout << "Matrix has " << A.n_rows << " rows";  // .n_rows and .n_cols are read only
				cout << " and " << A.n_cols << " colums" << endl;
			}
			else
			{
				cerr << "Provide the size of the matrix as a second and third argument"<< endl;
			}
		}
	}
	else {
		cerr << "*Error: Please provide some arguments" << endl;
		return 1;
	}

	return 0;
}

