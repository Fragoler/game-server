#include <server/view/hello.hpp>
#include <server/view/greeting.hpp>


namespace game_server {

std::string
Hello::HandleRequestThrow(const userver::server::http::HttpRequest& request, userver::server::request::RequestContext&)
    const {
    return SayHelloTo(request.GetArg("name"), UserType::kFirstTime);
}

}  // namespace game_server