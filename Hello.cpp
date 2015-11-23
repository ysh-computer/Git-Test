#include <iostream>
#include <string>

namespace Hello
{
	class hello
    {
	private:
		std::string str;
	public:
		hello() : str("Hello"){}

		hello(std::string str)
        {
            this->str = str;
        }

		void Print()
        {
			std::cout << str << "\n";
		}
	};
}

int main()
{
    std::ios::sync_with_stdio();
    std::cin.tie(0);
	Hello::hello hellodefault;
	hellodefault.Print();
	Hello::hello test("ファンタジスタドール");
	test.Print();
	return 0;
}