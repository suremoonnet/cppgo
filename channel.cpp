#include "channel.h"

namespace suremoonnet{
	template<typename type>
	channel<type>::channel():mSize(0) {
	}
	template<typename type>
	channel<type>::channel(size_t _size):mSize(_size){
	}
	
	template<typename type>
	channel<type>::~channel(){
	}

}
