// /*
//     BUILTIN support for CSQ4 provided by the utilities built through C/C++
//     ::::::::::::::::::::::::::::CORE UTILITIES::::::::::::::::::::::::::::
//     (1) DATATYPES
//     (2) INPUT OUTPUT FUNCTIONS
//     (3) AND MANY MORE UTILITIES

//     Source : @anchor https://www.github.com/CsqLang/Csq4
// */
#if !defined(builtins_h)
#define builtins_h
// /*******************************Importing C/C++ libraries & Reference counter *********************************/
#include <string>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "exceptions.h"
#include "../Memory/Reference_Counter.h"
using std::string;
using std::vector;


//Memory manager
template<typename T>
auto allocate(T val){
    return new T(val);
}
template<typename T>
auto deallocate(T* val){
    delete val;
}


//Basic Datatypes such as int, float, bytes etc..

//Providing int data types

class i32 {
public:
int val;
i32(int n){
    val = n;
}
i32(ref<i32> n){
    val = n->val;
}
i32(const i32& n){
val = n.val;
}
i32(){}
auto op_add(ref<i32> v, ref<i32> v2){
    return i32(v->val + v2->val);
}

auto op_sub(ref<i32> v, ref<i32> v2){
    return i32(v->val - v2->val);
}

auto op_div(ref<i32> v, ref<i32> v2){
    return i32(v->val / v2->val);
}

auto op_mul(ref<i32> v, ref<i32> v2){
    return i32(v->val * v2->val);
}

bool op_equal(ref<i32> v, ref<i32> v2){
    bool state = false;
    if(v->val == v2->val)
        state = true;
    return state;
}
bool op_notEqual( ref<i32> v1, ref<i32> v2){
    bool state = false;
    if(v1->val != v2->val)
        state = true;
    return state;
}

bool op_lesser( ref<i32> v1, ref<i32> v2){
    bool state = false;
    if(v1->val < v2->val)
        state = true;
    return state;
}

bool op_greater( ref<i32> v1, ref<i32> v2){
    bool state = false;
    if(v1->val > v2->val)
        state = true;
    return state;
}

bool op_greaterEqual( ref<i32> v1, ref<i32> v2){
    bool state = false;
    if(v1->val >= v2->val)
        state = true;
    return state;
}

bool op_lesserEqual( ref<i32> v1, ref<i32> v2){
    bool state = false;
    if(v1->val <= v2->val)
        state = true;
    return state;
}
};



class i64{
    public:
        long int val;
        i64(long int n){
            val = n;
        }
        i64(ref<i64> v){
            val = v->val;
        }
        i64(const i64& n){
            val = n.val;
        }
        i64(){}
        auto op_add(ref<i64> v, ref<i64> v2){
            return i64(v->val + v2->val);
        }

        auto op_sub(ref<i64> v, ref<i64> v2){
            return i64(v->val - v2->val);
        }

        auto op_div(ref<i64> v, ref<i64> v2){
            return i64(v->val / v2->val);
        }

        auto op_mul(ref<i64> v, ref<i64> v2){
            return i64(v->val * v2->val);
        }

        bool op_equal(ref<i64> v, ref<i64> v2){
            bool state = false;
            if(v->val == v2->val)
                state = true;
            return state;
        }
        bool op_notEqual( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }

        bool op_lesser( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }

        bool op_greater( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }

        bool op_greaterEqual( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }

        bool op_lesserEqual( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val <= v2->val)
                state = true;
            return state;
        }
};

class i128{
    public:
        long long int val;
        i128(long long int n){
            val = n;
        }
        i128(const i128& n){
            val = n.val;
        }
        i128(ref<i128> v){
            val = v->val;
        }
        i128(){}
        auto op_add(ref<i128> v, ref<i128> v2){
            return i128(v->val + v2->val);
        }

        auto op_sub(ref<i128> v, ref<i128> v2){
            return i128(v->val - v2->val);
        }

        auto op_div(ref<i128> v, ref<i128> v2){
            return i128(v->val / v2->val);
        }

        auto op_mul(ref<i128> v, ref<i128> v2){
            return i128(v->val * v2->val);
        }

        bool op_equal(ref<i128> v, ref<i128> v2){
            bool state = false;
            if(v->val == v2->val)
                state = true;
            return state;
        }
        bool op_notEqual( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }

        bool op_lesser( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }

        bool op_greater( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }

        bool op_greaterEqual( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }

        bool op_lesserEqual( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val <= v2->val)
                state = true;
            return state;
        }
};
//FLoat typ128

class f32{
    public:
        float val;
        f32(float n){
            val = n;
        }
        f32(const f32& n){
            val = n.val;
        }
        f32(ref<f32> v){
            val = v->val;
        }
        f32(){}
       
        auto op_add(ref<f32> v, ref<f32> v2){
            return f32(v->val + v2->val);
        }

        auto op_sub(ref<f32> v, ref<f32> v2){
            return f32(v->val - v2->val);
        }

        auto op_div(ref<f32> v, ref<f32> v2){
            return f32(v->val / v2->val);
        }

        auto op_mul(ref<f32> v, ref<f32> v2){
            return f32(v->val * v2->val);
        }

        bool op_equal(ref<f32> v, ref<f32> v2){
            bool state = false;
            if(v->val == v2->val)
                state = true;
            return state;
        }
        bool op_notEqual( ref<f32> v1, ref<f32> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }

        bool op_lesser( ref<f32> v1, ref<f32> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }

        bool op_greater( ref<f32> v1, ref<f32> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }

        bool op_greaterEqual( ref<f32> v1, ref<f32> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }

        bool op_lesserEqual( ref<f32> v1, ref<f32> v2){
            bool state = false;
            if(v1->val <= v2->val)
                state = true;
            return state;
        }
};

class f64{
    public:
        double val;
        f64(double n){
            val = n;
        }
        f64(const f64& n){
            val = n.val;
        }
        f64(){}
        f64(ref<f64> v){
            val = v->val;
        }
        auto op_add(ref<f64> v, ref<f64> v2){
            return f64(v->val + v2->val);
        }

        auto op_sub(ref<f64> v, ref<f64> v2){
            return f64(v->val - v2->val);
        }

        auto op_div(ref<f64> v, ref<f64> v2){
            return f64(v->val / v2->val);
        }

        auto op_mul(ref<f64> v, ref<f64> v2){
            return f64(v->val * v2->val);
        }

        bool op_equal(ref<f64> v, ref<f64> v2){
            bool state = false;
            if(v->val == v2->val)
                state = true;
            return state;
        }
        bool op_notEqual( ref<f64> v1, ref<f64> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }

        bool op_lesser( ref<f64> v1, ref<f64> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }

        bool op_greater( ref<f64> v1, ref<f64> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }

        bool op_greaterEqual( ref<f64> v1, ref<f64> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }

        bool op_lesserEqual( ref<f64> v1, ref<f64> v2){
            bool state = false;
            if(v1->val <= v2->val)
                state = true;
            return state;
        }
};
//Defination for [] operator
template<typename T>
auto ref<T>::operator[](int index){
   return ((this->get()->op_brac(*this->get(),i32(index))));
}

class str{
    public:
        string __str__;
        str(){}
        str(const char* __str){
            __str__ = __str;
        }
        str(string __str){
            __str__ = __str;
        }
        str(ref<str> __str){
            __str__ = __str->__str__;
        }
        str(const str& _str){
            __str__ = _str.__str__;
        }
        const char* cstr(){return __str__.c_str();}
        ref<str> upper() {
            string upper_str = __str__;
            for (auto& c : upper_str) {
                if (islower(c)) {
                    c = toupper(c);
                }
            }
            return ref<str>(new str(upper_str));
        }

        auto lower() const {
            string st = __str__;
            for (auto& c : st) {
                if (c >= 'A' && c <= 'Z') {
                    c = tolower(c);
                }
            }
            return ref<str>(new str(st));
        }
        auto op_add(ref<str> lhs, ref<str> rhs){
            return str(lhs->__str__ + rhs->__str__);
        }
        ref<i32> toi32(){
            return ref<i32>(i32(atoi(__str__.c_str())));
        }
        ref<i64> toi64(){
            return ref<i64>(i64(atol(__str__.c_str())));
        }
};

template<typename T>
class list{
    public:
        vector<T> data;
        list(){}
        list(vector<T> data){this->data = data;}
        list(const list<T>& data){this->data = data.data;}
        list(ref<list<T>> data){this->data = data->data;}
        void pop(){
            data.pop_back();
        }
        void add(ref<T> elem){
            data.push_back(*elem);
        }
        auto op_brac(ref<list<T>> ls, ref<i32> index){
            return ref<T>(T(ls->data[index->val]));
        }
        T* begin() { return &this->data[0];}
        const T* begin() const { return &this->data[0];}
        T* end() { return &this->data[this->data.size()]; }
        const T* end() const { return &this->data[this->data.size()];}
};



#endif
