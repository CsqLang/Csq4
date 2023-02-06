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
// /*******************************Importing C libraries & Reference counter *********************************/
#include "exceptions.h"
#include "../Memory/Reference_Counter.h"
//Basic Datatypes such as int, float, bytes etc..

//Providing int data types

class i32{
    public:
        int val;
        i32(int n){
            val = n;
        }
        i32(const i32& n){
            val = n.val;
        }
        i32(){}
        auto op_add(ref<i32> v, ref<i32> v2){
            ref<i32> __val = new i32(v->val + v2->val);
            return __val;
        }
        auto op_sub(ref<i32> v, ref<i32> v2){
            ref<i32> __val = new i32(v->val - v2->val);
            return __val;
        }
        auto op_div(ref<i32> v, ref<i32> v2){
            ref<i32> __val = new i32(v->val / v2->val);
            return __val;
        }
        auto op_mul(ref<i32> v, ref<i32> v2){
            ref<i32> __val = new i32(v->val * v2->val);
            return __val;
        }
        auto op_equal( ref<i32> v1, ref<i32> v2){
            bool state = false;
            if(v1->val == v2->val)
                state = true;
            return state;
        }
        auto op_notEqual( ref<i32> v1, ref<i32> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }
        auto op_lesser( ref<i32> v1, ref<i32> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }
        auto op_greater( ref<i32> v1, ref<i32> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }
        auto op_greaterEqual( ref<i32> v1, ref<i32> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }
        auto op_lesserEqual( ref<i32> v1, ref<i32> v2){
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
        i64(const i64& n){
            val = n.val;
        }
        i64(){}
        auto op_add(ref<i64> v, ref<i64> v2){
            ref<i64> __val = new i64(v->val + v2->val);
            return __val;
        }
        auto op_sub(ref<i64> v, ref<i64> v2){
            ref<i64> __val = new i64(v->val - v2->val);
            return __val;
        }
        auto op_div(ref<i64> v, ref<i64> v2){
            ref<i64> __val = new i64(v->val / v2->val);
            return __val;
        }
        auto op_mul(ref<i64> v, ref<i64> v2){
            ref<i64> __val = new i64(v->val * v2->val);
            return __val;
        }
        auto op_equal( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val == v2->val)
                state = true;
            return state;
        }
        auto op_notEqual( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }
        auto op_lesser( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }
        auto op_greater( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }
        auto op_greaterEqual( ref<i64> v1, ref<i64> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }
        auto op_lesserEqual( ref<i64> v1, ref<i64> v2){
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
        i128(){}
        auto op_add(ref<i128> v, ref<i128> v2){
            ref<i128> __val = new i128(v->val + v2->val);
            return __val;
        }
        auto op_sub(ref<i128> v, ref<i128> v2){
            ref<i128> __val = new i128(v->val - v2->val);
            return __val;
        }
        auto op_div(ref<i128> v, ref<i128> v2){
            ref<i128> __val = new i128(v->val / v2->val);
            return __val;
        }
        auto op_mul(ref<i128> v, ref<i128> v2){
            ref<i128> __val = new i128(v->val * v2->val);
            return __val;
        }
        auto op_equal( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val == v2->val)
                state = true;
            return state;
        }
        auto op_notEqual( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val != v2->val)
                state = true;
            return state;
        }
        auto op_lesser( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val < v2->val)
                state = true;
            return state;
        }
        auto op_greater( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val > v2->val)
                state = true;
            return state;
        }
        auto op_greaterEqual( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val >= v2->val)
                state = true;
            return state;
        }
        auto op_lesserEqual( ref<i128> v1, ref<i128> v2){
            bool state = false;
            if(v1->val <= v2->val)
                state = true;
            return state;
        }
};


#endif
