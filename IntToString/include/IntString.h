#ifndef INTSTRING_H
#define INTSTRING_H


class IntString{

private:
    int _integrer;
    std::string _string;
public:
    void setString(std::string);
    void setComposeString(std::string);
    std::string getString();
    std::string ReturnString(int);
};

#endif // INTSTRING_H
