#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h;
    for(a=1;a<=8;a++)
    {
        for(b=1;b<=8;b++)
        {
            for(c=1;c<=8;c++)
            {
                for(d=1;d<=8;d++)
                {
                    for(e=1;e<=8;e++)
                    {
                        for(f=1;f<=8;f++)
                        {
                            for(g=1;g<=8;g++)
                            {
                                for(h=1;h<=8;h++)
                                {
                                    if(a!=b&&a!=c&&a!=d&&a!=e&&a!=f&&a!=g&&a!=h&&b!=c&&b!=d&&b!=e&&b!=f&&b!=g&&b!=h&&c!=d&&c!=e&&c!=f&&c!=g&&c!=h&&d!=e&&d!=f&&d!=g&&d!=h&&e!=f&&e!=g&&e!=h&&f!=g&&f!=h&&g!=h)
                                    printf("%d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}