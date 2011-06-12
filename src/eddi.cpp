//=======================================================================
// Copyright Baptiste Wicht 2011.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================

#include <iostream>
#include <iomanip>

#include "VirtualMachine.h"

using namespace std;

int main(int argc, const char* argv[]) {
	if(argc == 1){
		cout << "Not enough arguments. Provide a file to run" << endl;
	}

	VirtualMachine vm;
	
	return vm.run(argv[1]);
}
