#include <fstream>
using namespace std;

int main() {
    ofstream outfile("test.txt");
    outfile << "I fear thee, ancient Mariner!\r\n";
    outfile << "I fear thy skinny hand!\r\n";
    outfile << "And thou art long, and lank, and brown,\r\n";
    outfile << "As is the ribbed sea-sand.\r\n";
    return 0;
}


