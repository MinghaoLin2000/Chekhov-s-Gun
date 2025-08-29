__ZN6google8protobuf7strings19SubstituteAndAppendEPNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEEPKcRKNS1_8internal13SubstituteArgESF_SF_SF_SF_SF_SF_SF_SF_SF_
void __fastcall google::protobuf::strings::SubstituteAndAppend(
        std::string *this,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int128 a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // w11
  __int64 v12; // x20
  std::string *v14; // x21
  int v15; // w8
  __int64 v16; // x10
  int v17; // w11
  __int64 v18; // x22
  int v19; // w11
  std::string::size_type size; // x20
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x0
  google::protobuf::internal::LogMessage *v28; // x0
  int v29; // w8
  _BYTE *v30; // x20
  int v31; // w9
  __int64 v32; // x21
  int v33; // w9
  __int64 v34; // x24
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x0
  google::protobuf::internal::LogMessage *v38; // x0
  char v39; // [xsp+Fh] [xbp-101h] BYREF
  void *v40[2]; // [xsp+10h] [xbp-100h] BYREF
  char v41; // [xsp+27h] [xbp-E9h]
  std::string __p; // [xsp+28h] [xbp-E8h] BYREF
  _BYTE v43[48]; // [xsp+40h] [xbp-D0h] BYREF
  __int64 v44; // [xsp+70h] [xbp-A0h]
  _QWORD v45[5]; // [xsp+78h] [xbp-98h]
  __int128 v46; // [xsp+A0h] [xbp-70h]
  __int64 v47; // [xsp+B0h] [xbp-60h]
  __int64 v48; // [xsp+B8h] [xbp-58h]
  __int64 v49; // [xsp+C0h] [xbp-50h]

  v44 = a3;
  v45[0] = a4;
  v45[1] = a5;
  v45[2] = a6;
  v45[3] = a7;
  v45[4] = a8;
  v46 = a9;
  v47 = a10;
  v48 = a11;
  v49 = 0LL;
  v11 = (unsigned __int8)*a2;
  if ( !*a2 )
    return;
  v12 = a3;
  v14 = this;
  v15 = 0;
  LODWORD(v16) = 0;
  do
  {
    if ( v11 == 36 )
    {
      v16 = (int)v16 + 1LL;
      v17 = (unsigned __int8)a2[v16];
      v18 = (unsigned int)(v17 - 48);
      if ( (unsigned int)v18 <= 9 )
      {
        v19 = *(_DWORD *)(v45[(unsigned int)v18 - 1] + 8);
        if ( v19 != -1 )
        {
          v15 += v19;
          goto LABEL_9;
        }
        google::protobuf::internal::LogMessage::LogMessage(
          v43,
          2LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/stubs/substitute.cc",
          84LL);
        v21 = google::protobuf::internal::LogMessage::operator<<(
                v43,
                "strings::Substitute format string invalid: asked for \"$");
        v22 = google::protobuf::internal::LogMessage::operator<<(v21, v18);
        v23 = google::protobuf::internal::LogMessage::operator<<(v22, "\", but only ");
        v24 = 0LL;
        while ( *(_DWORD *)(v12 + 8) != -1 )
        {
          v25 = v24 + 1;
          v12 = v45[v24++];
          if ( !v12 )
            goto LABEL_36;
        }
        v25 = v24;
LABEL_36:
        v35 = google::protobuf::internal::LogMessage::operator<<(v23, v25);
        v36 = google::protobuf::internal::LogMessage::operator<<(v35, " args were given.  Full format string was: \"");
        sub_10007A754((int)v40, a2);
        google::protobuf::CEscape((__int64)v40, &__p);
        v37 = google::protobuf::internal::LogMessage::operator<<(v36, &__p);
        v38 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v37, "\".");
        google::protobuf::internal::LogFinisher::operator=((int)&v39, v38);
LABEL_37:
        if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
          operator delete(__p.__r_.__value_.__l.__data_);
        if ( v41 < 0 )
          operator delete(v40[0]);
        google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v43);
        return;
      }
      if ( v17 != 36 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          v43,
          2LL,
          "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iW"
          "orkXPC/shared/persistence/google/protobuf/stubs/substitute.cc",
          97LL);
        v26 = google::protobuf::internal::LogMessage::operator<<(v43, "Invalid strings::Substitute() format string: \"");
        sub_10007A754((int)v40, a2);
        google::protobuf::CEscape((__int64)v40, &__p);
        v27 = google::protobuf::internal::LogMessage::operator<<(v26, &__p);
        v28 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v27, "\".");
        google::protobuf::internal::LogFinisher::operator=((int)&v39, v28);
        goto LABEL_37;
      }
    }
    ++v15;
LABEL_9:
    v16 = (int)v16 + 1LL;
    v11 = (unsigned __int8)a2[v16];
  }
  while ( a2[v16] );
  if ( v15 )
  {
    if ( SHIBYTE(this->__r_.__value_.__r.__words[2]) < 0 )
      size = this->__r_.__value_.__l.__size_;
    else
      LODWORD(size) = HIBYTE(this->__r_.__value_.__r.__words[2]);
    std::string::resize(this, v15 + (int)size, 0);
    if ( SHIBYTE(v14->__r_.__value_.__r.__words[2]) < 0 )
    {
      if ( !v14->__r_.__value_.__l.__size_ )
        goto LABEL_24;
      v14 = (std::string *)v14->__r_.__value_.__r.__words[0];
    }
    else if ( !*((_BYTE *)&v14->__r_.__value_.__s + 23) )
    {
LABEL_24:
      v14 = 0LL;
    }
    v29 = 0;
    v30 = (char *)v14 + (int)size;
    while ( 2 )
    {
      v31 = (unsigned __int8)a2[v29];
      if ( v31 == 36 )
      {
        v32 = v29 + 1LL;
        v33 = (unsigned __int8)a2[v32];
        if ( (unsigned int)(v33 - 48) > 9 )
        {
          if ( v33 != 36 )
            goto LABEL_29;
          *v30++ = 36;
        }
        else
        {
          v34 = v45[(unsigned int)(v33 - 48) - 1];
          memcpy(v30, *(const void **)v34, *(int *)(v34 + 8));
          v30 += *(int *)(v34 + 8);
        }
      }
      else
      {
        if ( !a2[v29] )
          return;
        *v30++ = v31;
LABEL_29:
        LODWORD(v32) = v29;
      }
      v29 = v32 + 1;
      continue;
    }
  }
}