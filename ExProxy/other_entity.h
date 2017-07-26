#pragma once
#include "logout.h"
#include <string>

using namespace std;
namespace hukusuke {
	class other_entity
	{
	public:
		other_entity();
		~other_entity();

		/* Public method.*/
		void write_data( const string  str );
		void read_data (       string& str );
	};
}
