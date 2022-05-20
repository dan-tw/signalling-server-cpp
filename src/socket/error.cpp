#include "error.h"

void WebSocketError::fail(boost::beast::error_code errorCode, char const* obj) {
    std::cerr << obj << ": " << errorCode.message() << "\n";
}