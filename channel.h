#pragma  once
#include <cstddef>
#include <mutex>
#include <atomic>
#include <vector>
namespace suremoonnet{

template<typename type>
class channel{
public:
	channel();
	explicit channel(size_t _size = 0) ;
	~channel();
private: //member
	size_t mSize;
	std::vector<type> val;
	
	channel(const channel& _) = delete; // can't copy
public://oper
	//should't support channel <<a1 <<a2 ... etc.
	//for {channel << a1 << a2;} {channel <<a3;} two thread.
	//user may assign a1 and a2 always in a raw.
	void operator <<(type v){
		val = v;
	}
	void operator >>(type& v){
		v = val;
	}
	
	size_t size(){
		return mSize;
	}
};

};
