// #include <iostream>
// #include <string>

// using namespace std;

// void print_from_here(char *input)
// {
//     // change in main
//     *input = 'G';
//     cout << input << endl;
// }

// void print_from_here2(char input)
// {
//     // only local
//     input = 'V';
//     cout << input << endl;
// }

// void print_from_here3(char input[])
// {
//     // change in main
//     input[0] = 'D';
//     cout << input << endl;
// }

// void print_from_here4(char &input)
// {
//     // change in main
//     input = 'C';
//     cout << input << endl;
// }

// int main()
// {
//     string s1;
//     string s2 = "Hello";
//     string s3(10, 'x');

//     s1 = s3;
//     s1 = "yooooo doooood";

//     char k[] = "Hello";

//     cout << s1 << endl;
//     cout << s3 << endl;
//     print_from_here(k);
//     cout << k << endl;
//     print_from_here2(k[0]);
//     cout << k << endl;
//     print_from_here3(k);
//     cout << k << endl;
//     print_from_here4(k[0]);
//     cout << k << endl;
// }