#include "proxy_entity.h"
#include "other_entity.h"

namespace hukusuke {
	/*--------------------------------*/
	/* proxy_entity_write_data.       */
	/*--------------------------------*/
	void proxy_entity_write_data::act_request() {
		other_entity other;
		other.write_data(str_);
	}

	/*--------------------------------*/
	/* proxy_entity_read_data.        */
	/*--------------------------------*/
	void proxy_entity_read_data::act_request() {
		string str = "";
		other_entity other;
		other.read_data(str);
		str_ = str;
	}
}