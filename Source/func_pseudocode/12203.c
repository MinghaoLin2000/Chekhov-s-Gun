__ZN6google8protobuf2io9Tokenizer17ParseStringAppendERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEPS9_
void __fastcall google::protobuf::io::Tokenizer::ParseStringAppend(__int64 a1, std::string *this)
{
  __int64 v3; // x9
  char v4; // w8
  std::string::size_type size; // x10
  std::string::size_type v7; // x11
  __int64 v8; // x20
  google::protobuf::internal::LogMessage *v9; // x0
  std::string::value_type *v10; // x23
  std::string::value_type *v11; // x27
  int v12; // w8
  std::string::value_type *v13; // x22
  int v14; // w9
  std::string::value_type v15; // w8
  std::string::value_type *v16; // x27
  std::string::value_type v17; // t1
  int v18; // w10
  std::string::value_type v19; // w9
  std::string::value_type *v20; // x9
  std::string::value_type v21; // w11
  int v22; // w12
  std::string::value_type v23; // w11
  std::string::value_type v24; // w1
  std::string::value_type *v25; // x9
  int v26; // w8
  std::string::value_type *v27; // x27
  int v28; // t1
  unsigned __int8 v29; // w10
  unsigned __int8 v30; // w9
  std::string::value_type v31; // w9
  int v32; // w8
  __int64 v33; // x22
  unsigned int v34; // w1
  __int64 v35; // x23
  std::string::value_type *v36; // x26
  google::protobuf *data_low; // x22
  std::string::size_type v38; // x23
  char v39; // w10
  std::string::value_type v40; // w8
  int v41; // w10
  char v42; // w9
  char v43; // w10
  unsigned int v44; // w11
  char v45; // w12
  char v46; // [xsp+17h] [xbp-99h] BYREF
  std::string __p; // [xsp+18h] [xbp-98h] BYREF
  unsigned int v48; // [xsp+30h] [xbp-80h] BYREF
  int v49; // [xsp+34h] [xbp-7Ch] BYREF

  v3 = *(unsigned __int8 *)(a1 + 23);
  v4 = v3;
  if ( (v3 & 0x80u) != 0LL )
    v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( SHIBYTE(this->__r_.__value_.__r.__words[2]) < 0 )
    {
      size = this->__r_.__value_.__l.__size_;
      v7 = (this->__r_.__value_.__r.__words[2] & 0x7FFFFFFFFFFFFFFFLL) - 1;
    }
    else
    {
      size = HIBYTE(this->__r_.__value_.__r.__words[2]);
      v7 = 22LL;
    }
    if ( size + v3 > v7 )
    {
      std::string::reserve(this, size + v3);
      v4 = *(_BYTE *)(a1 + 23);
    }
    if ( v4 >= 0 )
      v10 = (std::string::value_type *)a1;
    else
      v10 = *(std::string::value_type **)a1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = v10;
          v13 = v10 + 1;
          v12 = (unsigned __int8)v10[1];
          if ( v12 == 92 )
            break;
          if ( !v10[1] )
            return;
LABEL_27:
          if ( *(char *)(a1 + 23) >= 0 )
            v25 = (std::string::value_type *)a1;
          else
            v25 = *(std::string::value_type **)a1;
          if ( v12 == (unsigned __int8)*v25 )
          {
            v10 = v13;
            if ( !v11[2] )
              continue;
          }
          std::string::push_back(this, v12);
          v10 = v13;
        }
        v10 += 2;
        v14 = (unsigned __int8)v11[2];
        if ( !v11[2] )
          goto LABEL_27;
        if ( ((char)v14 & 0xFFFFFFF8) == 0x30 )
        {
          v15 = v14 - 48;
          v17 = v11[3];
          v16 = v11 + 3;
          v18 = v17 & 0xF8;
          v19 = v17 + 8 * (v14 - 48) - 48;
          if ( v18 == 48 )
          {
            v15 = v19;
            v20 = v16;
          }
          else
          {
            v20 = v10;
          }
          v21 = v20[1];
          v22 = v21 & 0xF8;
          v23 = v21 + 8 * v15 - 48;
          if ( v22 == 48 )
          {
            v15 = v23;
            v10 = v20 + 1;
          }
          else
          {
            v10 = v20;
          }
          v24 = v15;
          goto LABEL_60;
        }
        if ( v14 == 85 || v14 == 117 )
          break;
        if ( v14 == 120 )
        {
          v28 = (unsigned __int8)v11[3];
          v27 = v11 + 3;
          v26 = v28;
          v29 = v28 - 48;
          v30 = v28 - 97;
          if ( (unsigned int)(v28 - 48) < 0xA || v30 < 6u )
          {
            if ( v29 <= 9u )
            {
              v31 = v26 - 48;
              goto LABEL_71;
            }
          }
          else if ( (unsigned int)(v26 - 65) > 5 )
          {
            v31 = 0;
            v27 = v10;
            goto LABEL_71;
          }
          if ( (unsigned int)(v26 - 65) >= 0x1A )
            v39 = -1;
          else
            v39 = v26 - 55;
          v40 = v26 - 87;
          if ( v30 <= 0x19u )
            v31 = v40;
          else
            v31 = v39;
LABEL_71:
          v41 = (unsigned __int8)v27[1];
          if ( (unsigned int)(v41 - 48) >= 0xA && (unsigned __int8)(v41 - 97) >= 6u )
          {
            if ( (unsigned int)(v41 - 65) > 5 )
              goto LABEL_83;
            v42 = 16 * v31;
LABEL_77:
            v44 = (unsigned __int8)(v41 - 97);
            if ( (unsigned int)(v41 - 65) >= 0x1A )
              v45 = -1;
            else
              v45 = v41 - 55;
            v43 = v41 - 87;
            if ( v44 > 0x19 )
              v43 = v45;
            goto LABEL_82;
          }
          v42 = 16 * v31;
          if ( (unsigned __int8)(v41 - 48) > 9u )
            goto LABEL_77;
          v43 = v41 - 48;
LABEL_82:
          v31 = v43 + v42;
          ++v27;
LABEL_83:
          std::string::push_back(this, v31);
          v10 = v27;
        }
        else
        {
          if ( (char)v14 > 97 )
          {
            switch ( (char)v14 )
            {
              case 'n':
                v24 = 10;
                break;
              case 'o':
              case 'p':
              case 'q':
              case 's':
              case 'u':
                goto LABEL_98;
              case 'r':
                v24 = 13;
                break;
              case 't':
                v24 = 9;
                break;
              case 'v':
                v24 = 11;
                break;
              default:
                if ( (char)v14 == 102 )
                {
                  v24 = 12;
                }
                else
                {
                  if ( (char)v14 != 98 )
                    goto LABEL_98;
                  v24 = 8;
                }
                break;
            }
          }
          else if ( (char)v14 <= 62 )
          {
            if ( (char)v14 != 34 )
            {
              if ( (char)v14 == 39 )
              {
                v24 = 39;
                goto LABEL_60;
              }
              goto LABEL_98;
            }
            v24 = 34;
          }
          else
          {
            if ( (char)v14 == 63 )
              goto LABEL_98;
            if ( (char)v14 != 92 )
            {
              if ( (char)v14 == 97 )
              {
                v24 = 7;
                goto LABEL_60;
              }
LABEL_98:
              v24 = 63;
              goto LABEL_60;
            }
            v24 = 92;
          }
LABEL_60:
          std::string::push_back(this, v24);
        }
      }
      LODWORD(__p.__r_.__value_.__l.__data_) = 0;
      v32 = (unsigned __int8)v11[2];
      if ( v32 == 117 )
        v33 = 4LL;
      else
        v33 = 8 * (unsigned int)(v32 == 85);
      if ( !(unsigned int)sub_10010550C(v11 + 3, v33, &__p) )
      {
        v24 = *v10;
        goto LABEL_60;
      }
      v35 = (unsigned int)v33 | 3;
      v36 = &v11[v35];
      data_low = (google::protobuf *)LODWORD(__p.__r_.__value_.__l.__data_);
      if ( LODWORD(__p.__r_.__value_.__l.__data_) >> 10 == 54 )
      {
        if ( *v36 == 92 && v36[1] == 117 )
        {
          v48 = 0;
          if ( (unsigned int)sub_10010550C(v36 + 2, 4LL, &v48) )
          {
            if ( v48 >> 10 == 55 )
            {
              LODWORD(data_low) = ((v48 - 56320) | (((_DWORD)data_low << 10) - 56623104)) + 0x10000;
              LODWORD(__p.__r_.__value_.__l.__data_) = (_DWORD)data_low;
              v35 += 6LL;
            }
          }
        }
        v36 = &v11[v35];
      }
      else
      {
        if ( LODWORD(__p.__r_.__value_.__l.__data_) < 0x80 )
        {
          v38 = 1LL;
          goto LABEL_90;
        }
        if ( LODWORD(__p.__r_.__value_.__l.__data_) <= 0x7FF )
        {
          data_low = (google::protobuf *)((4 * LODWORD(__p.__r_.__value_.__l.__data_)) & 0x1F00 | __p.__r_.__value_.__s.__data_[0] & 0x3F | 0xC080u);
          v38 = 2LL;
          goto LABEL_90;
        }
      }
      if ( !((unsigned int)data_low >> 16) )
      {
        data_low = (google::protobuf *)((4 * (_DWORD)data_low) & 0x3F00 | (unsigned __int8)data_low & 0x3F | ((unsigned __int16)data_low >> 12 << 16) | 0xE08080u);
        v38 = 3LL;
LABEL_90:
        v48 = google::protobuf::ghtonl(data_low, v34);
        std::string::append(this, (const std::string::value_type *)&v49 - v38, v38);
        goto LABEL_91;
      }
      if ( (unsigned int)data_low >> 16 <= 0x10 )
      {
        data_low = (google::protobuf *)((16 * (_DWORD)data_low) & 0x3F0000 | (unsigned __int8)data_low & 0x3F | ((((unsigned int)data_low >> 18) & 7) << 24) | ((((unsigned int)data_low >> 6) & 0x3F) << 8) | 0xF0808080);
        v38 = 4LL;
        goto LABEL_90;
      }
      google::protobuf::StringAppendF(this, "\\U%08x", (_DWORD)data_low);
LABEL_91:
      v10 = v36 - 1;
    }
  }
  google::protobuf::internal::LogMessage::LogMessage(
    &v48,
    2LL,
    "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkXPC"
    "/shared/persistence/google/protobuf/io/tokenizer.cc",
    1042LL);
  v8 = google::protobuf::internal::LogMessage::operator<<(
         &v48,
         " Tokenizer::ParseStringAppend() passed text that could not have been tokenized as a string: ");
  google::protobuf::CEscape(a1, &__p);
  v9 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(v8, &__p);
  google::protobuf::internal::LogFinisher::operator=((int)&v46, v9);
  if ( SHIBYTE(__p.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(__p.__r_.__value_.__l.__data_);
  google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)&v48);
}