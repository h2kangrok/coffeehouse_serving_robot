// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from coffee_system_interface:srv/MySrv.idl
// generated code does not contain a copyright notice

#ifndef COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__STRUCT_HPP_
#define COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__coffee_system_interface__srv__MySrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__coffee_system_interface__srv__MySrv_Request __declspec(deprecated)
#endif

namespace coffee_system_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MySrv_Request_
{
  using Type = MySrv_Request_<ContainerAllocator>;

  explicit MySrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_num = 0l;
    }
  }

  explicit MySrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->table_num = 0l;
    }
  }

  // field types and members
  using _table_num_type =
    int32_t;
  _table_num_type table_num;
  using _items_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _items_type items;

  // setters for named parameter idiom
  Type & set__table_num(
    const int32_t & _arg)
  {
    this->table_num = _arg;
    return *this;
  }
  Type & set__items(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->items = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coffee_system_interface::srv::MySrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const coffee_system_interface::srv::MySrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::srv::MySrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::srv::MySrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coffee_system_interface__srv__MySrv_Request
    std::shared_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coffee_system_interface__srv__MySrv_Request
    std::shared_ptr<coffee_system_interface::srv::MySrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MySrv_Request_ & other) const
  {
    if (this->table_num != other.table_num) {
      return false;
    }
    if (this->items != other.items) {
      return false;
    }
    return true;
  }
  bool operator!=(const MySrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MySrv_Request_

// alias to use template instance with default allocator
using MySrv_Request =
  coffee_system_interface::srv::MySrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace coffee_system_interface


#ifndef _WIN32
# define DEPRECATED__coffee_system_interface__srv__MySrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__coffee_system_interface__srv__MySrv_Response __declspec(deprecated)
#endif

namespace coffee_system_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MySrv_Response_
{
  using Type = MySrv_Response_<ContainerAllocator>;

  explicit MySrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit MySrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    coffee_system_interface::srv::MySrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const coffee_system_interface::srv::MySrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::srv::MySrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      coffee_system_interface::srv::MySrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__coffee_system_interface__srv__MySrv_Response
    std::shared_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__coffee_system_interface__srv__MySrv_Response
    std::shared_ptr<coffee_system_interface::srv::MySrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MySrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MySrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MySrv_Response_

// alias to use template instance with default allocator
using MySrv_Response =
  coffee_system_interface::srv::MySrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace coffee_system_interface

namespace coffee_system_interface
{

namespace srv
{

struct MySrv
{
  using Request = coffee_system_interface::srv::MySrv_Request;
  using Response = coffee_system_interface::srv::MySrv_Response;
};

}  // namespace srv

}  // namespace coffee_system_interface

#endif  // COFFEE_SYSTEM_INTERFACE__SRV__DETAIL__MY_SRV__STRUCT_HPP_
