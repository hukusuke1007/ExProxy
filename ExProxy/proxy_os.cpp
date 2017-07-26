#include "proxy_os.h"
#include "other_os.h"

namespace hukusuke {
	/*--------------------------------*/
	/* proxy_os_get_rtc.              */
	/*--------------------------------*/
	void proxy_os_get_rtc::act_request() {
		string str = "";
		other_os other;
		other.get_rtc(str);
		str_ = str;
	}
}