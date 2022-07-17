#ifndef ROMAN_H
#define ROMAN_H
#define MAX_LEN 10



class Roman{
    public:
    Roman();
    char* get_roman_string();
    void set_equivalent(int equi);
    void get_equivalent();

    private:
    char roman_string[MAX_LEN];
    int equivalent;
};

#endif