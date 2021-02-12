// faster vector construction

#include <iostream>
#include <vector>

struct memtest
{
    int val;
    int copies;

    memtest()
        : copies(0)
    {
        std::cout << "default construction\n";
    }

    memtest(const int val_)
        : val(val_), copies(0)
    {
        std::cout << "object " << val << " constructed\n";
    }

    memtest(const memtest &other)
        : val(other.val), copies(other.copies + 1)
    {
        std::cout << "object " << val << " copied\n";
    }

    memtest(const memtest &&other)
        : val(other.val), copies(other.copies)
    {
        std::cout << "object " << val << " moved\n";
    }

    ~memtest()
    {
        std::cout << "object " << val << " copy number " << copies << " deleted\n";
    }
};

template <typename Ret>
inline void make_n_elems_vector(typename std::vector<Ret>::size_type n)
{
    std::vector<Ret> v;
    v.reserve(n);
    for (typename std::vector<Ret>::size_type i = 0; i != n; ++i)
        v.emplace_back();
    return v;
}

template <typename Ret>
inline void make_vector_helper(std::vector<Ret> &v) {}

template <typename Ret, typename Arg1, typename... Args>
inline void make_vector_helper(std::vector<Ret> &v, Arg1 arg1, Args... args)
{
    v.emplace_back(arg1);
    make_vector_helper(v, args...);
}

template <typename Ret, typename... Args>
inline std::vector<Ret> make_vector(const Args... args)
{
    std::vector<Ret> v;
    v.reserve(sizeof...(args));
    make_vector_helper(v, args...);
    return v;
}

template <typename Ret>
inline void make_vector2args_helper(std::vector<Ret> &v) {}

template <typename Ret, typename Arg1, typename Arg2, typename... Args>
inline void make_vector2args_helper(std::vector<Ret> &v, Arg1 arg1, Arg2 arg2, Args... args)
{
    v.emplace_back(arg1, arg2);
    make_vector2args_helper(v, args...);
}

template <typename Ret, typename... Args>
inline std::vector<Ret> make_vector2args(const Args... args)
{
    std::vector<Ret> v;
    v.reserve(sizeof...(args) / 2);
    make_vector2args_helper(v, args...);
    return v;
}

//You can expand this to n args. Let me know if there is a more comfortable way to do this.

int main()
{
    std::cout << "with vector constructor:\n";
    {
        std::vector<memtest> v{1, 2, 3};
    }

    std::cout << "\nwith make_vector:\n";
    {
        auto v = make_vector<memtest>(1, 2, 3);
    }
}
