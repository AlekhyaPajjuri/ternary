#include <iostream>
#include <string>
#include <map>
#include <iterator>

int main()
{
    std::istream_iterator<char> it(std::cin), end;
    std::string c(it, end);
    std::map<int, char> m;
    size_t p = 0, l = 1, i = 0;

    auto op = [&](char a, char b) -> bool { return c[i] == a && c[i + 1] == b; };

    for(; i < c.size(); i += 2, l = 1)
    {
        if (op('1', '2') && m[p])  while(l){ i -= 2; l += (op('1', '2')) - (op('0', '2')); }   /* ] */
        if (op('0', '2') && !m[p]) while(l){ i += 2; l -= (op('1', '2')) - (op('0', '2')); }   /* [ */
        if (op('0', '1')) ++p;                                                                 /* > */
        if (op('0', '0')) --p;                                                                 /* < */
        if (op('1', '1')) ++m[p];                                                              /* + */
        if (op('1', '0')) --m[p];                                                              /* - */
        if (op('2', '0')) std::cout << m[p];                                                   /* . */
        if (op('2', '1')) std::cin.get(m[p]);                                                  /* , */
        if (c[i] != '0' && c[i] != '1' && c[i] != '2') --i;                                    /* 0x90 */
    }

    return 0;
}

