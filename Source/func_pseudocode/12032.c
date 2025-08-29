__ZN6google8protobuf16CEscapeAndAppendENS0_11StringPieceEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
void __fastcall google::protobuf::CEscapeAndAppend(std::string::value_type *__s, signed __int64 __n, std::string *this)
{
  std::string *v3; // x21
  __int64 v4; // x19
  std::string::value_type *v5; // x20
  __int64 v6; // x8
  std::string::value_type *v7; // x9
  signed __int64 v8; // x10
  int v9; // t1
  std::string::size_type size; // x22
  _BYTE *v11; // x8
  unsigned int v12; // w16
  int v13; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = this;
  v4 = __n;
  v5 = __s;
  if ( __n < 1 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
    v7 = __s;
    v8 = __n;
    do
    {
      v9 = (unsigned __int8)*v7++;
      v6 += byte_10018CE65[v9];
      --v8;
    }
    while ( v8 );
  }
  if ( v6 == __n )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    std::string::append(this, __s, __n);
    return;
  }
  if ( SHIBYTE(this->__r_.__value_.__r.__words[2]) < 0 )
    size = this->__r_.__value_.__l.__size_;
  else
    size = HIBYTE(this->__r_.__value_.__r.__words[2]);
  std::string::resize(this, size + v6, 0);
  if ( SHIBYTE(v3->__r_.__value_.__r.__words[2]) < 0 )
    v3 = (std::string *)v3->__r_.__value_.__r.__words[0];
  if ( v4 >= 1 )
  {
    v11 = (char *)v3 + size;
    do
    {
      v13 = (unsigned __int8)*v5++;
      v12 = v13;
      if ( v13 > 33 )
      {
        switch ( v12 )
        {
          case '"':
            *(_WORD *)v11 = 8796;
            v11 += 2;
            break;
          case '\'':
            *(_WORD *)v11 = 10076;
            v11 += 2;
            break;
          case '\\':
            *(_WORD *)v11 = 23644;
            v11 += 2;
            break;
          default:
LABEL_30:
            if ( v12 - 32 >= 0x5F )
            {
              *v11 = 92;
              v11[1] = (v12 >> 6) | 0x30;
              v11[2] = (v12 >> 3) & 7 | 0x30;
              v11[3] = v12 & 7 | 0x30;
              v11 += 4;
            }
            else
            {
              *v11++ = v12;
            }
            break;
        }
      }
      else
      {
        switch ( v12 )
        {
          case 9u:
            *(_WORD *)v11 = 29788;
            v11 += 2;
            break;
          case 0xAu:
            *(_WORD *)v11 = 28252;
            v11 += 2;
            break;
          case 0xDu:
            *(_WORD *)v11 = 29276;
            v11 += 2;
            break;
          default:
            goto LABEL_30;
        }
      }
      --v4;
    }
    while ( v4 );
  }
}