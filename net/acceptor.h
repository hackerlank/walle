/*
 * Author: HongXiaoqiang  - cool.hxq@gmail.com
 *
 * Last modified: 2014-11-26 02:10 +0800
 *
 * Description: 
 */

#ifndef WALLE_NET_ACCEPTOR_H
#define WALLE_NET_ACCEPTOR_H

#include "socket.h"

namespace walle{
namespace net{

class Poller;

class Acceptor
{
public:
    Acceptor();

    bool init(Poller* poller, uint16_t port);

    void accept();

private:
    Socket m_socket;

    Poller* m_poller = nullptr;
};

}}

#endif //#define WALLE_NET_ACCEPTOR_H
