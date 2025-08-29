__ZNK6google8protobuf7Message16ShortDebugStringEv
__int64 *__usercall google::protobuf::Message::ShortDebugString@<X0>(
        std::string *__return_ptr a1@<X8>,
        google::protobuf::Message *this@<X0>)
{
  __int64 v4; // x8
  __int64 size; // x9
  __int64 v6; // x9
  __int64 *result; // x0
  _BYTE v8[24]; // [xsp+8h] [xbp-68h] BYREF
  __int64 *v9; // [xsp+20h] [xbp-50h]
  _QWORD v10[3]; // [xsp+28h] [xbp-48h] BYREF
  _QWORD v11[4]; // [xsp+40h] [xbp-30h] BYREF

  a1->__r_.__value_.__r.__words[0] = 0LL;
  a1->__r_.__value_.__l.__size_ = 0LL;
  a1->__r_.__value_.__r.__words[2] = 0LL;
  google::protobuf::TextFormat::Printer::Printer((google::protobuf::TextFormat::Printer *)v8);
  v8[4] = 1;
  v8[9] = 1;
  google::protobuf::TextFormat::Printer::PrintToString((google::protobuf::TextFormat::Printer *)v8, this, (__int64)a1);
  v4 = HIBYTE(a1->__r_.__value_.__r.__words[2]);
  if ( SHIBYTE(a1->__r_.__value_.__r.__words[2]) < 0 )
  {
    size = a1->__r_.__value_.__l.__size_;
    if ( !size )
      goto LABEL_11;
  }
  else
  {
    if ( !*((_BYTE *)&a1->__r_.__value_.__s + 23) )
      goto LABEL_11;
    size = HIBYTE(a1->__r_.__value_.__r.__words[2]);
  }
  v6 = size - 1;
  if ( (v4 & 0x80) != 0 )
  {
    if ( *(_BYTE *)(a1->__r_.__value_.__r.__words[0] + v6) != 32 )
      goto LABEL_11;
    v4 = a1->__r_.__value_.__l.__size_;
    goto LABEL_10;
  }
  if ( a1->__r_.__value_.__s.__data_[v6] == 32 )
LABEL_10:
    std::string::resize(a1, v4 - 1, 0);
LABEL_11:
  sub_100097708(v11, v11[1]);
  sub_10009778C(v10, v10[1]);
  result = v9;
  v9 = 0LL;
  if ( result )
    return (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*result + 8))(result);
  return result;
}