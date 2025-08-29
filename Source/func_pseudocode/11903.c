__ZNK6google8protobuf7Message11GetTypeNameEv
__int64 __usercall google::protobuf::Message::GetTypeName@<X0>(google::protobuf::Message *this@<X0>, _QWORD *a2@<X8>)
{
  __int64 result; // x0
  __int128 *v4; // x8
  __int128 v5; // q0
  void *v6; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  result = (*(__int64 (__fastcall **)(google::protobuf::Message *))(*(_QWORD *)this + 152LL))(this);
  v4 = *(__int128 **)(result + 8);
  if ( *((char *)v4 + 23) < 0 )
  {
    v6 = *(void **)v4;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_10007A474(a2, v6);
  }
  else
  {
    v5 = *v4;
    a2[2] = *((_QWORD *)v4 + 2);
    *(_OWORD *)a2 = v5;
  }
  return result;
}