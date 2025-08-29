__ZN6google8protobuf8internal14ArenaStringPtr7MutableENS2_12EmptyDefaultEPNS0_5ArenaE
__int64 *__fastcall google::protobuf::internal::ArenaStringPtr::Mutable(__int64 **a1, __int64 a2)
{
  __int64 *result; // x0

  result = *a1;
  if ( result == &google::protobuf::internal::fixed_address_empty_string )
  {
    result = (__int64 *)sub_10007A808(a2);
    *a1 = result;
  }
  return result;
}