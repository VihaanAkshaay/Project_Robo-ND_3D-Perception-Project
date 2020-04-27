// Generated by gencpp from file sensor_stick/GetFloatArrayFeatureResponse.msg
// DO NOT EDIT!


#ifndef SENSOR_STICK_MESSAGE_GETFLOATARRAYFEATURERESPONSE_H
#define SENSOR_STICK_MESSAGE_GETFLOATARRAYFEATURERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor_stick
{
template <class ContainerAllocator>
struct GetFloatArrayFeatureResponse_
{
  typedef GetFloatArrayFeatureResponse_<ContainerAllocator> Type;

  GetFloatArrayFeatureResponse_()
    : feature()  {
    }
  GetFloatArrayFeatureResponse_(const ContainerAllocator& _alloc)
    : feature(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _feature_type;
  _feature_type feature;




  typedef boost::shared_ptr< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetFloatArrayFeatureResponse_

typedef ::sensor_stick::GetFloatArrayFeatureResponse_<std::allocator<void> > GetFloatArrayFeatureResponse;

typedef boost::shared_ptr< ::sensor_stick::GetFloatArrayFeatureResponse > GetFloatArrayFeatureResponsePtr;
typedef boost::shared_ptr< ::sensor_stick::GetFloatArrayFeatureResponse const> GetFloatArrayFeatureResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_stick

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'sensor_stick': ['/home/robond/catkin_ws/src/sensor_stick/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "294d40af1af59d3ff9b78d3a0d06f00c";
  }

  static const char* value(const ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x294d40af1af59d3fULL;
  static const uint64_t static_value2 = 0xf9b78d3a0d06f00cULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_stick/GetFloatArrayFeatureResponse";
  }

  static const char* value(const ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] feature\n\
\n\
";
  }

  static const char* value(const ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feature);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetFloatArrayFeatureResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_stick::GetFloatArrayFeatureResponse_<ContainerAllocator>& v)
  {
    s << indent << "feature[]" << std::endl;
    for (size_t i = 0; i < v.feature.size(); ++i)
    {
      s << indent << "  feature[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.feature[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_STICK_MESSAGE_GETFLOATARRAYFEATURERESPONSE_H
