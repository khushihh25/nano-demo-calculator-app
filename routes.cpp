#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int first = input["first"].i();
    int second = input["second"].i();
    int result = first + second;
    crow::json::wvalue responseJson;
    responseJson["result"] = result;
    return crow::response{ responseJson };
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int first = input["first"].i();
    int second = input["second"].i();
    int result = first - second;
    crow::json::wvalue responseJson;
    responseJson["result"] = result;
    return crow::response{ responseJson };
}