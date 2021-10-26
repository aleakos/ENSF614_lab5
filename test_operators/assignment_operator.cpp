// #include <iostream>
// #include <string.h>

// class MyString
// {
// public:
//     MyString(char const *s)
//     {
//         std::cout << strlen(s) << std::endl;
//         storageM = new char[strlen(s) + 1];
//         strcpy(storageM, s);
//     };
//     MyString(const MyString &src) : lengthM(src.lengthM)
//     {
//         storageM = new char[lengthM + 1];
//         strcpy(storageM, src.storageM);
//     };
//     // ~MyString();

// private:
//     char *storageM;
//     int lengthM;
// };

// int main()
// {
//     MyString s1((char *)"ABC");
//     MyString s2 = s1;

//     MyString s3 = (char *)"ABC";

//     return 0;
// }
