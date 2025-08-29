__ZNK6google8protobuf14FatalException4whatEv
__int64 __fastcall google::protobuf::FatalException::what(google::protobuf::FatalException *this)
{
  __int64 result; // x0

  result = (__int64)this + 24;
  if ( *((char *)this + 47) < 0 )
    return *(_QWORD *)result;
  return result;
}