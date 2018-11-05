#ifndef _HEAD1_H_
#define _HEAD1_H_

class head1 {
public:
    head1() {}
    ~head1() {}

    inline const char *getText() {
#ifdef DEF_RET_YES
        return "Yes, DEF_RET_YES defined!";
#elif
        return "No, DEF_RET_YES not defined!";
#endif
    }
};


#endif // _HEAD1_H_