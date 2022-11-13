#ifndef TEST_VECTOR_HPP
#define TEST_VECTOR_HPP

#include "ft_containers.hpp"
#pragma region Vector

//test constructor
template <typename T>
std::vector<int> vector_constructor_test_std()
{
    std::vector<T> vector;
    std::vector<int> v;
    std::vector<int> tmp0(vector);
    std::vector<int> tmp1(100, 1), tmp2(100000, 0);
    tmp1 = tmp2;
    std::vector<int> tmp3 = tmp1;
    std::vector<int> tmp4(tmp.begin(), tmp.end());
    v.push_back(tmp4.size());
    v.push_back(tmp4.capacity());
    v.push_back(tmp1[2]);
    v.push_back(tmp3[2]);
    v.push_back(tmp4[2]);
    try
    {
        std::vector<int> tmp5(-1, -1);
    }
    catch(const std::exception& e)
    {
        v.push_back(1);
    }
    return v;
}
template <typename T>
std::vector<int> vector_constructor_test_ft()
{
    ft::vector<T> vector;
    ft::vector<int> v;
    ft::vector<int> tmp0(vector);
    ft::vector<int> tmp1(100, 1), tmp2(100000, 0);
    tmp1 = tmp2;
    ft::vector<int> tmp3 = tmp1;
    ft::vector<int> tmp4(tmp1.begin(), tmp1.end());
    v.push_back(tmp4.size());
    v.push_back(tmp4.capacity());
    v.push_back(tmp1[2]);
    v.push_back(tmp3[2]);
    v.push_back(tmp4[2]);
    try
    {
        ft::vector<int> tmp5(-1, -1);
    }
    catch(const std::exception& e)
    {
        v.push_back(1);
    }
    return v;
}

template <typename T>
std::vector<int> vector_constructor_it_test_std() //testing constructors with iterators
{
	std::vector<int> v;
	std::vector<T> vector(3, 3);
	std::vector<int> tmp(10000000, 4);
	std::vector<int> tmp2(tmp.begin(), tmp.end());
	v.push_back(tmp2.size());
	v.push_back(tmp2.capacity());
	for (size_t i = 0; i < tmp.size(); ++i)
		v.push_back(tmp2[i]);
	return v;
}

template <typename T>
std::vector<int> vector_constructor_it_test_ft()
{
	std::vector<int> v;
	ft::vector<T> vector(3, 3);
	std::vector<int> tmp(10000000, 4);
	ft::vector<int> tmp2(tmp.begin(), tmp.end());
	v.push_back(tmp2.size());
	v.push_back(tmp2.capacity());
	for (size_t i = 0; i < tmp.size(); ++i)
		v.push_back(tmp2[i]);
	return v;
}

// test iterator
template <typename T>
std::vector<int> vector_iterator_test_std()
{
	typename std::vector<T>::iterator it;
	std::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 10; ++i)
		vector.push_back(i);
	it = vector.begin();
	v.push_back(*(++it));
	v.push_back(*(--it));
	v.push_back(*(it + 1));
	it += 1;
	v.push_back(*(it - 1));
	it -= 1;
	v.push_back(*it);
	return v;
}

template <typename T>
std::vector<int> vector_iterator_test_ft()
{
	typename ft::vector<T>::iterator it;
	ft::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 10; ++i)
		vector.push_back(i);
	it = vector.begin();
	v.push_back(*(++it));
	v.push_back(*(--it));
	v.push_back(*(it + 1));
	it += 1;
	v.push_back(*(it - 1));
	it -= 1;
	v.push_back(*it);
	return v;
}

// test begin
template <typename T>
std::vector<int> vector_begin_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*vector.begin());
	v.push_back(*++vector.begin());
	return v;
}

template <typename T>
std::vector<int> vector_begin_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*vector.begin());
	v.push_back(*++vector.begin());
	return v;
}

// test end
template <typename T>
std::vector<int> vector_end_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*(vector.end() - 1));
	v.push_back(*(vector.end() - 2));
	return v;
}

template <typename T>
std::vector<int> vector_end_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*(vector.end() - 1));
	v.push_back(*(vector.end() - 2));
	return v;
}

// test rbegin
template <typename T>
std::vector<int> vector_rbegin_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*vector.rbegin());
	v.push_back(*(vector.rbegin() + 1));
	return v;
}

template <typename T>
std::vector<int> vector_rbegin_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*vector.rbegin());
	v.push_back(*(vector.rbegin() + 1));
	return v;
}

// test rend
template <typename T>
std::vector<int> vector_rend_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*(vector.rend() - 1));
	v.push_back(*(vector.rend() - 2));
	return v;
}

template <typename T>
std::vector<int> vector_rend_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(*(vector.rend() - 1));
	v.push_back(*(vector.rend() - 2));
	return v;
}

// test size
template <typename T>
std::vector<int> vector_size_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(12000000, 1);
	v.push_back(vector.size());
	return v;
}

template <typename T>
std::vector<int> vector_size_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(12000000, 1);
	v.push_back(vector.size());
	return v;
}

// test max_size
template <typename T>
std::vector<int> vector_maxsize_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1, 1);
	v.push_back(vector.max_size());
	return v;
}

template <typename T>
std::vector<int> vector_maxsize_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1, 1);
	v.push_back(vector.max_size());
	return v;
}

// test resize
template <typename T>
std::vector<int> vector_resize_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(99000000, 1);
	vector.resize(50000000);
	vector.reserve(50000000);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.resize(70000000);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.resize(153000000, T());
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	v.push_back(vector[65]);
	return v;
}

template <typename T>
std::vector<int> vector_resize_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(990000, 1);
	vector.resize(500000);
	vector.reserve(500000);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.resize(700000);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.resize(1530000, T());
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	v.push_back(vector[65]);
	end2 = timer();
	return v;
}

// test capacity
template <typename T>
std::vector<int> vector_capacity_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(12000000, 1);
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_capacity_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(12000000, 1);
	v.push_back(vector.capacity());
	return v;
}

// test empty
template <typename T>
std::vector<int> vector_empty_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(vector.empty());
	return v;
}

template <typename T>
std::vector<int> vector_empty_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	v.push_back(vector.empty());
	return v;
}

// test reserve
template <typename T>
std::vector<int> vector_reserve_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.reserve(99000000);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_reserve_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.reserve(99000000);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test operator []
template <typename T>
std::vector<int> vector_operator_assign_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(444, 1);
	v.push_back(vector[55]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_operator_assign_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(444, 1);
	v.push_back(vector[55]);
	end2 = timer();
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test at
template <typename T>
std::vector<int> vector_at_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(99000000, 1);
	v.push_back(vector.at(3540000));
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_at_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(99000000, 1);
	v.push_back(vector.at(3540000));
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test front
template <typename T>
std::vector<int> vector_front_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(44444, 1);
	v.push_back(vector.front());
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_front_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(44444, 1);
	v.push_back(vector.front());
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test back
template <typename T>
std::vector<int> vector_back_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(44444, 1);
	v.push_back(vector.back());
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_back_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(44444, 1);
	v.push_back(vector.back());
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test assign
template <typename T>
std::vector<int> vector_assign_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	std::vector<int> tmp, tmp2;
	vector.assign(3, 3);
	tmp.assign(40000000, 1);
	tmp2.assign(40000, 1);
	vector.assign(tmp.begin(), tmp.end());
	v.push_back(vector[1]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.assign(tmp2.begin(), tmp2.end());
	v.push_back(vector[444]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_assign_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	ft::vector<int> tmp, tmp2;
	vector.assign(3, 3);
	tmp.assign(40000000, 1);
	tmp2.assign(40000, 1);
	vector.assign(tmp.begin(), tmp.end());
	v.push_back(vector[1]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.assign(tmp2.begin(), tmp2.end());
	v.push_back(vector[444]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test assign with std iterator
template <typename T>
std::vector<int> vector_assign_it_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	std::vector<int> tmp;
	vector.assign(3, 3);
	tmp.assign(40000000, 1);
	vector.assign(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size(); ++i)
		v.push_back(vector[i]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_assign_it_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	std::vector<int> tmp;
	vector.assign(3, 3);
	tmp.assign(40000000, 1);
	vector.assign(tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size(); ++i)
		v.push_back(vector[i]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test push_back
template <typename T>
std::vector<int> vector_push_back_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 55000000; ++i)
		vector.push_back(i);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_push_back_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 55000000; ++i)
	{
		vector.push_back(i);
	}
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test pop_back
template <typename T>
std::vector<int> vector_pop_back_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(99000000, 1);
	vector.pop_back();
	v.push_back(vector[vector.size() - 1]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_pop_back_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(99000000, 1);
	vector.pop_back();
	v.push_back(vector[vector.size() - 1]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test insert value
template <typename T>
std::vector<int> vector_insert_value_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(26000000, 1);
	v.push_back(*(vector.insert(vector.end() - 8000000, 44)));
	v.push_back(vector.size());
	v.push_back(vector.capacity());

	return v;
}

template <typename T>
std::vector<int> vector_insert_value_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(26000000, 1);
	v.push_back(*(vector.insert(vector.end() - 8000000, 44)));
	v.push_back(vector.size());
	v.push_back(vector.capacity());

	return v;
}

// test insert fill
template <typename T>
std::vector<int> vector_insert_fill_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	vector.insert(vector.end() - 50, 42000000, 2);
	v.push_back(vector[2121]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_insert_fill_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(1000, 1);
	vector.insert(vector.end() - 50, 42000000, 2);
	v.push_back(vector[2121]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test insert range
template <typename T>
std::vector<int> vector_insert_range_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	std::vector<int> tmp;
	tmp.assign(26000000, 1);
	vector.assign(42000000, 1);
	vector.insert(vector.end() - 10000000, tmp.begin(), tmp.end());
	v.push_back(vector[3]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());

	std::unique_ptr<B> k2(new B(3));
	std::unique_ptr<B> k3(new B(4));
	std::unique_ptr<B> k4(new B(-1));
	std::vector<A> vv;
	std::vector<B *> v1;

	v1.push_back(&(*k2));
	v1.push_back(&(*k3));
	v1.push_back(&(*k4));
	try
	{
		vv.insert(vv.begin(), v1.begin(), v1.end());
	}
	catch (...)
	{
		v.push_back(vv.size());
		v.push_back(vv.capacity());
	}

	return v;
}

template <typename T>
std::vector<int> vector_insert_range_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	ft::vector<int> tmp;
	tmp.assign(26000000, 1);
	vector.assign(42000000, 1);
	vector.insert(vector.end() - 10000000, tmp.begin(), tmp.end());
	v.push_back(vector[3]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());

	std::unique_ptr<B> k2(new B(3));
	std::unique_ptr<B> k3(new B(4));
	std::unique_ptr<B> k4(new B(-1));
	ft::vector<A> vv;
	ft::vector<B *> v1;

	v1.push_back(&(*k2));
	v1.push_back(&(*k3));
	v1.push_back(&(*k4));
	try
	{
		vv.insert(vv.begin(), v1.begin(), v1.end());
	}
	catch (...)
	{
		v.push_back(vv.size());
		v.push_back(vv.capacity());
	}

	return v;
}

// test insert std iterator
template <typename T>
std::vector<int> vector_insert_it_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	std::vector<int> tmp;
	tmp.assign(26000000, 1);
	vector.assign(42000000, 7);
	vector.insert(vector.begin(), tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size(); ++i)
	{
		v.push_back(vector[i]);
	}
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_insert_it_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	std::vector<int> tmp;
	tmp.assign(26000000, 1);
	vector.assign(42000000, 7);
	vector.insert(vector.begin(), tmp.begin(), tmp.end());
	for (size_t i = 0; i < tmp.size(); ++i)
	{
		v.push_back(vector[i]);
	}
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test erase value
template <typename T>
std::vector<int> vector_erase_value_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 99000000; ++i)
		vector.push_back(i);
	v.push_back(*(vector.erase(vector.begin() + 80000)));
	v.push_back(*(vector.begin() + 820000));
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_erase_value_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 99000000; ++i)
		vector.push_back(i);
	v.push_back(*(vector.erase(vector.begin() + 80000)));
	v.push_back(*(vector.begin() + 820000));
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test erase range
template <typename T>
std::vector<int> vector_erase_range_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 99000000; ++i)
		vector.push_back(i);
	v.push_back(*(vector.erase(vector.begin() + 80000, vector.end() - 15000000)));
	v.push_back(*(vector.begin() + 820000));
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_erase_range_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	for (int i = 0; i < 99000000; ++i)
		vector.push_back(i);
	v.push_back(*(vector.erase(vector.begin() + 80000, vector.end() - 15000000)));
	v.push_back(*(vector.begin() + 820000));
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test swap
template <typename T>
std::vector<int> vector_swap_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(11000000, 11);
	std::vector<int> tmp(5000000, 5), tmp2(10000000, 10), tmp3(15000000, 15), tmp4(30000000, 30);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	long *adr1 = reinterpret_cast<long *>(&vector);
	long *adr2 = reinterpret_cast<long *>(&tmp);
	vector.swap(tmp);
	if (reinterpret_cast<long *>(&vector) == adr1 && reinterpret_cast<long *>(&tmp) == adr2)
		v.push_back(1);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.swap(tmp3);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	std::swap(vector, tmp2);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	std::swap(vector, tmp4);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

template <typename T>
std::vector<int> vector_swap_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(11000000, 11);
	ft::vector<int> tmp(5000000, 5), tmp2(10000000, 10), tmp3(15000000, 15), tmp4(30000000, 30);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	long *adr1 = reinterpret_cast<long *>(&vector);
	long *adr2 = reinterpret_cast<long *>(&tmp);
	vector.swap(tmp);
	if (reinterpret_cast<long *>(&vector) == adr1 && reinterpret_cast<long *>(&tmp) == adr2)
		v.push_back(1);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	vector.swap(tmp3);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	swap(vector, tmp2);
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	swap(vector, tmp4);
	end2 = timer();
	v.push_back(vector[2]);
	v.push_back(vector.size());
	v.push_back(vector.capacity());
	return v;
}

// test clear
template <typename T>
std::vector<int> vector_clear_test_std()
{
	std::vector<T> vector;
	std::vector<int> v;
	vector.assign(50000000, 1);
	vector.clear();
	v.push_back(vector.capacity());
	v.push_back(vector.size());
	return v;
}

template <typename T>
std::vector<int> vector_clear_test_ft()
{
	ft::vector<T> vector;
	std::vector<int> v;
	vector.assign(50000000, 1);
	vector.clear();
	v.push_back(vector.capacity());
	v.push_back(vector.size());
	return v;
}

// test operator ==
bool vector_operator_equal_test();

// test operator !=
bool vector_operator_not_equal_test();

// test operator <
bool vector_operator_less_test();

// test operator >
bool vector_operator_more_test();

// test operator <=
bool vector_operator_less_equal_test();

// test operator >=
bool vector_operator_more_equal_test();

#pragma endregion

#endif


#endif