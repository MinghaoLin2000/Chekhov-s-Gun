__ZN6google8protobuf15StripWhitespaceEPNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
std::string *__fastcall google::protobuf::StripWhitespace(std::string *this)
{
  std::string *v1; // x19
  std::string::size_type size; // x21
  std::string::size_type v3; // x20
  int v4; // w8
  __int64 v5; // x20
  __int64 v6; // x21
  int v7; // w8
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = this;
  if ( SHIBYTE(this->__r_.__value_.__r.__words[2]) < 0 )
    size = this->__r_.__value_.__l.__size_;
  else
    LODWORD(size) = HIBYTE(this->__r_.__value_.__r.__words[2]);
  if ( (int)size < 1 )
  {
    if ( (_DWORD)size )
      return this;
    goto LABEL_24;
  }
  v3 = 0LL;
  while ( 1 )
  {
    this = (std::string *)std::string::at(v1, v3);
    v4 = (unsigned __int8)this->__r_.__value_.__s.__data_[0];
    if ( (unsigned int)(v4 - 9) >= 5 && v4 != 32 )
      break;
    if ( (unsigned int)size == ++v3 )
      goto LABEL_24;
  }
  if ( (_DWORD)size == (_DWORD)v3 )
  {
LABEL_24:
    if ( SHIBYTE(v1->__r_.__value_.__r.__words[2]) < 0 )
    {
      *v1->__r_.__value_.__l.__data_ = 0;
      v1->__r_.__value_.__l.__size_ = 0LL;
    }
    else
    {
      v1->__r_.__value_.__s.__data_[0] = 0;
      *((_BYTE *)&v1->__r_.__value_.__s + 23) = 0;
    }
    return this;
  }
  if ( (_DWORD)v3 )
  {
    this = std::string::erase(v1, 0LL, v3);
    LODWORD(size) = size - v3;
  }
  v5 = (unsigned int)(size - 1);
  if ( (int)size >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      this = (std::string *)std::string::at(v1, v5 + v6);
      v7 = (unsigned __int8)this->__r_.__value_.__s.__data_[0];
      if ( (unsigned int)(v7 - 9) >= 5 && v7 != 32 )
        break;
      --v6;
      if ( v5 + v6 + 1 <= 0 )
        return this;
    }
    if ( (_DWORD)v6 )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return std::string::erase(v1, (unsigned int)(v5 + v6 + 1), 0xFFFFFFFFFFFFFFFFLL);
    }
  }
  return this;
}