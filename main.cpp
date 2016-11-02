#include <boost/algorithm/string.hpp>
#include <string>
#include <iostream>

int main() {
    const std::string mensagem = "Viva o Linux";
    std::cout << boost::algorithm::to_upper_copy(mensagem) << '\n';
    return 0;
}
