#include "other_entity.h"

namespace hukusuke {
	other_entity::other_entity(){}
	other_entity::~other_entity(){}

	/* write_data class. */
	void other_entity::write_data(const string str) {
		LOG_OUTPUT("%s", str.c_str());
	}

	/* read_data class. */
	void other_entity::read_data(string& str) {
		str = "other entity read_data.";
	}


}
