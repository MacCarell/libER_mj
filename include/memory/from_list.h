#pragma once

#include <list>
#include <memory/from_allocator.h>

namespace from {
    template <typename T, typename AllocatorTag = void>
    using list = std::list<T, from::allocator<T, AllocatorTag>>;
}