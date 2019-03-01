

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91

#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("input.dat");

int n;

class node
{
    public :
    double my_info;
    class node *my_left;
    class node *my_right;
};

node *prim;

int read_data()
{
    fin>>n;
    fin>>prim->my_info;
}

node *new_nr;

node *make_some_tree(node *this_one,double new_one)
{
    new_nr->my_info=new_one;
    if(this_one->my_info<new_one)
    {
        if(this_one->my_right==NULL)
            this_one->my_right=new_nr;
        else
            return make_some_tree(this_one->my_right,new_one);
    }
    if(this_one->my_info>new_one)
    {
        if(this_one->my_left==NULL)
            this_one->my_left=new_nr;
        else
            return make_some_tree(this_one->my_left,new_one);
    }
}

int RSD(node *this_one)
{
    if (this_one!=NULL)
    {
        cout<<this_one->my_info<<" ";
        RSD(this_one->my_left);
        RSD(this_one->my_right);
    }
}

int SRD(node *this_one)
{
    if (this_one!=NULL)
    {
        SRD(this_one.my_left);
        cout<<this_one.my_info<<" ";
        SRD(this_one.my_right);
    }
}

int SDR(node *this_one)
{
    if (this_one!=NULL)
    {
        SDR(this_one.my_left);
        SDR(this_one.my_right);
        cout<<this_one.my_info<<" ";
    }
}

int main()
{
    read_data();
    double nr;
    for(int i=2;i<=n;i++)
    {
        fin>>nr;
        make_some_tree(prim, nr);
    }
    RSD(prim);
    cout<<endl;
    SRD(&prim);
    cout<<endl;
    SDR(&prim);
}

