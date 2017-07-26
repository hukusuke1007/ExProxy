#include "proxy.h"

namespace hukusuke {

	proxy*	proxy::instance_ = NULL;
	mutex			proxy::mtx_;

	/* Get singleton instance. */
	proxy& proxy::get_instance() 
	{
		if (!instance_) {
			lock_guard<std::mutex> grd(mtx_); // Double-Checked Locking
			if (!instance_) {
				proxy*	obj = new proxy();
				instance_ = obj;
			}
			else {}
		}
		else {}

		return *instance_;
	}

	/* request method. */
	void proxy::request(proxy_request& request){
		request_other(request);
	}
}
