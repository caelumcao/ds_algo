#include <string>

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int needlelen = needle.size();
        if (needlelen == 0)
            return 0;
        int maxlen = haystack.size() - needlelen;
        for (int i = 0; i <= maxlen; ++i)
        {
            for (int j = 0; j < needlelen; ++j)
            {
                if (haystack[i + j] != needle[j])
                    break;
                if (j == needlelen - 1)
                    return i;
            }
        }
        return -1;
    }
};