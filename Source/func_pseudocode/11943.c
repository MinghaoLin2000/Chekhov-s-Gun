__ZN6google8protobuf8internal18GenericTypeHandlerINSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEE5MergeERKS9_PS9_
std::string *__fastcall google::protobuf::internal::GenericTypeHandler<std::string>::Merge(
        std::string *__str,
        std::string *this)
{
  return std::string::operator=(this, __str);
}