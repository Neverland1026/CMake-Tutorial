#ifndef _DLL1_H_
#define _DLL1_H_

#ifdef WIN32
#define FNDT_DLL_EXPORT __declspec (dllexport)
#else
#define FNDT_DLL_EXPORT __declspec (dllimport)
#endif

class FNDT_DLL_EXPORT dll1 {
public:
    dll1();
    ~dll1();

    const char *getText();
};

#endif // _DLL1_H_

