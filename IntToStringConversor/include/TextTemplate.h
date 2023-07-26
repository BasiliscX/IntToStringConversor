#ifndef TEXTTEMPLATE_H
#define TEXTTEMPLATE_H


class TextTemplate{
private:
    string _text;
    int _tipe;
public:
string Evaluation(int);

// One to nine:
string One();
string Two();
string Three();
string Four();
string Five();
string Six();
string Seven();
string Eight();
string Nine();
};

#endif // TEXTTEMPLATE_H
