#pragma once
#include "logout.h"
using namespace std;
namespace hukusuke {
	class proxy_request
	{
	public:
		proxy_request() {};
		~proxy_request(){};
	protected:
		void request_other(proxy_request& request){ request.act_request(); };	// requestクラスを呼び直す.
	private:
		virtual void act_request() {};
	};
}

