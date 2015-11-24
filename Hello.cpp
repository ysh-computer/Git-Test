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
        void Add(std::string str2)
        {
            str.append(str2);
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
    test.Add("に文字列を付け加える");
    test.Print();
	return 0;
}