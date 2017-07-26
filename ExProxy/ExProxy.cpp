// ExProxy.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "logout.h"
#include "proxy_network.h"
#include "proxy_entity.h"
#include "proxy_os.h"
#include "proxy.h"
#include <string>

using namespace std;
using namespace hukusuke;

int main(void) {
	LOG_OUTPUT("Start.");

	// proxyインスタンスを生成.
	proxy_network_get_token network_get_token;
	proxy_network_send_data network_send_data;
	proxy_entity_write_data entity_write_data;
	proxy_entity_read_data  entity_read_data;
	proxy_os_get_rtc	    os_get_rtc;

	proxy& tmp = proxy::get_instance();

	// network_get_token.
	tmp.request(network_get_token);
	LOG_OUTPUT("%s", network_get_token.get().c_str());

	// network_send_data.
	network_send_data.set("other network send_data.");
	tmp.request(network_send_data);

	// entity_write_data.
	entity_write_data.set("other entity write_data.");
	tmp.request(entity_write_data);

	// entity_read_data.
	tmp.request(entity_read_data);
	LOG_OUTPUT("%s", entity_read_data.get().c_str());

	// os_get_rtc.
	tmp.request(os_get_rtc);
	LOG_OUTPUT("%s", os_get_rtc.get().c_str());

	LOG_OUTPUT("Terminate.");
    return 0;
}

