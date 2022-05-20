#pragma once
#include <boost/beast/core.hpp>
#include <iostream>

class WebSocketError {

    public:
        void fail(boost::beast::error_code errorCode, char const* obj);
};