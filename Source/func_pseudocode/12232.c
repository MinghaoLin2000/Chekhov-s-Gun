__ZN6google8protobuf8internal10WireFormat27_InternalParseAndMergeFieldEPNS0_7MessageEPKcPNS1_12ParseContextEyPKNS0_10ReflectionEPKNS0_15FieldDescriptorE
char *__fastcall google::protobuf::internal::WireFormat::_InternalParseAndMergeField(
        google::protobuf::Message *a1,
        google::protobuf::internal *a2,
        __int64 a3,
        __int64 a4,
        google::protobuf::Reflection *this,
        google::protobuf::FieldDescriptor *a6)
{
  int v11; // w24
  std::once_flag::_State_type *v12; // x0
  __int64 v13; // x8
  std::once_flag::_State_type *v14; // x0
  _BOOL4 v15; // w25
  int v16; // w24
  double v17; // d0
  unsigned __int64 v19; // x1
  std::once_flag::_State_type *v21; // x0
  std::once_flag::_State_type *v22; // x0
  google::protobuf::internal::LogMessage *v23; // x0
  unsigned __int64 v24; // x0
  google::protobuf::internal *v26; // x19
  float v27; // s0
  int v28; // w8
  __int64 v29; // x3
  int v30; // w8
  std::string::size_type v31; // x3
  int v32; // w8
  int data; // w3
  unsigned int v34; // w3
  int v35; // w8
  int v36; // w2
  std::string::value_type *v37; // x8
  google::protobuf::MessageFactory *v38; // x3
  __int64 v39; // x0
  google::protobuf::MessageFactory *v40; // x3
  __int64 v41; // x0
  int v42; // w0
  __int64 v43; // x0
  char *SizeFallback; // x0
  int v45; // w1
  std::string *v46; // x0
  int v47; // w0
  int v48; // w0
  int v49; // w0
  int v50; // w0
  int v51; // w0
  int v52; // w0
  int v53; // w0
  int v54; // w0
  int v55; // w0
  atomic_uint *v56; // x0
  int v57; // w0
  int v58; // w0
  int v59; // w0
  int v60; // w0
  std::string *p_dst; // x8
  std::string v62; // [xsp+0h] [xbp-F0h] BYREF
  std::string __dst; // [xsp+20h] [xbp-D0h] BYREF
  std::string __p[2]; // [xsp+40h] [xbp-B0h] BYREF
  atomic_uint *v65; // [xsp+70h] [xbp-80h]
  google::protobuf::FieldDescriptor *v66; // [xsp+78h] [xbp-78h]
  google::protobuf::Reflection *v67; // [xsp+80h] [xbp-70h]
  google::protobuf::Message *v68; // [xsp+88h] [xbp-68h]
  google::protobuf::internal *v69; // [xsp+90h] [xbp-60h] BYREF
  google::protobuf::FieldDescriptor *v70; // [xsp+98h] [xbp-58h] BYREF
  void (__fastcall *v71)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+A0h] [xbp-50h] BYREF
  std::string *v72; // [xsp+A8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+F8h] [xbp+8h]

  v69 = a2;
  if ( a6 )
  {
    v11 = a4 & 7;
    v12 = (std::once_flag::_State_type *)*((_QWORD *)a6 + 6);
    if ( v12 )
    {
      v70 = a6;
      v71 = google::protobuf::FieldDescriptor::TypeOnceInit;
      if ( atomic_load_explicit((atomic_ullong *volatile)v12, memory_order_acquire) != -1LL )
      {
        __p[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v71;
        __p[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v70;
        v72 = __p;
        std::__call_once(v12, &v72, (void (__cdecl *)(void *))sub_10007A460);
      }
    }
    v13 = *((unsigned int *)a6 + 14);
    if ( v11 == google::protobuf::internal::WireFormatLite::kWireTypeForFieldType[v13] )
    {
LABEL_6:
      v14 = (std::once_flag::_State_type *)*((_QWORD *)a6 + 6);
      if ( v14 )
      {
        v70 = a6;
        v71 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v14, memory_order_acquire) != -1LL )
        {
          __p[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v71;
          __p[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v70;
          v72 = __p;
          std::__call_once(v14, &v72, (void (__cdecl *)(void *))sub_10007A460);
        }
        LODWORD(v13) = *((_DWORD *)a6 + 14);
      }
      v15 = 0;
      v16 = 1;
      switch ( (int)v13 )
      {
        case 1:
          v17 = *(double *)v69;
          v69 = (google::protobuf::internal *)((char *)v69 + 8);
          if ( *((_DWORD *)a6 + 15) == 3 )
            google::protobuf::Reflection::AddDouble(this, a1, a6, v17);
          else
            google::protobuf::Reflection::SetDouble(this, a1, a6, v17);
          return (char *)v69;
        case 2:
          v27 = *(float *)v69;
          v69 = (google::protobuf::internal *)((char *)v69 + 4);
          if ( *((_DWORD *)a6 + 15) == 3 )
            google::protobuf::Reflection::AddFloat(this, a1, a6, v27);
          else
            google::protobuf::Reflection::SetFloat(this, a1, a6, v27);
          return (char *)v69;
        case 3:
          __p[0].__r_.__value_.__r.__words[0] = 0LL;
          v69 = (google::protobuf::internal *)sub_1000EAFB4(v69, __p);
          if ( !v69 )
            return 0LL;
          v28 = *((_DWORD *)a6 + 15);
          v29 = __p[0].__r_.__value_.__r.__words[0];
          goto LABEL_71;
        case 4:
          __p[0].__r_.__value_.__r.__words[0] = 0LL;
          v69 = (google::protobuf::internal *)sub_1000EAFB4(v69, __p);
          if ( !v69 )
            return 0LL;
          v30 = *((_DWORD *)a6 + 15);
          v31 = __p[0].__r_.__value_.__r.__words[0];
          goto LABEL_40;
        case 5:
          LODWORD(__p[0].__r_.__value_.__l.__data_) = 0;
          v69 = (google::protobuf::internal *)sub_100108544(v69, __p);
          if ( !v69 )
            return 0LL;
          v32 = *((_DWORD *)a6 + 15);
          data = (int)__p[0].__r_.__value_.__l.__data_;
          goto LABEL_65;
        case 6:
          v31 = *(_QWORD *)v69;
          v69 = (google::protobuf::internal *)((char *)v69 + 8);
          v30 = *((_DWORD *)a6 + 15);
LABEL_40:
          if ( v30 == 3 )
            google::protobuf::Reflection::AddUInt64(this, a1, a6, v31);
          else
            google::protobuf::Reflection::SetUInt64(this, a1, a6, v31);
          return (char *)v69;
        case 7:
          v34 = *(_DWORD *)v69;
          v69 = (google::protobuf::internal *)((char *)v69 + 4);
          v35 = *((_DWORD *)a6 + 15);
          goto LABEL_55;
        case 8:
          __p[0].__r_.__value_.__r.__words[0] = 0LL;
          v69 = (google::protobuf::internal *)sub_1000EAFB4(v69, __p);
          if ( !v69 )
            return 0LL;
          if ( *((_DWORD *)a6 + 15) == 3 )
            google::protobuf::Reflection::AddBool(this, a1, a6, __p[0].__r_.__value_.__r.__words[0] != 0);
          else
            google::protobuf::Reflection::SetBool(this, a1, a6, __p[0].__r_.__value_.__r.__words[0] != 0);
          return (char *)v69;
        case 9:
          v16 = 0;
          v15 = *(_DWORD *)(*((_QWORD *)a6 + 5) + 60LL) == 3;
          goto LABEL_47;
        case 10:
          v38 = *(google::protobuf::MessageFactory **)(a3 + 104);
          if ( *((_DWORD *)a6 + 15) == 3 )
            v39 = google::protobuf::Reflection::AddMessage(
                    (std::once_flag::_State_type **)this,
                    a1,
                    (std::once_flag::_State_type **)a6,
                    v38);
          else
            v39 = google::protobuf::Reflection::MutableMessage(
                    (std::once_flag::_State_type **)this,
                    a1,
                    (std::once_flag::_State_type **)a6,
                    v38);
          return (char *)sub_1000C8A6C(a3, v39, v69, a4);
        case 11:
          v40 = *(google::protobuf::MessageFactory **)(a3 + 104);
          if ( *((_DWORD *)a6 + 15) == 3 )
            v41 = google::protobuf::Reflection::AddMessage(
                    (std::once_flag::_State_type **)this,
                    a1,
                    (std::once_flag::_State_type **)a6,
                    v40);
          else
            v41 = google::protobuf::Reflection::MutableMessage(
                    (std::once_flag::_State_type **)this,
                    a1,
                    (std::once_flag::_State_type **)a6,
                    v40);
          return google::protobuf::internal::ParseContext::ParseMessage(a3, v41, v69);
        case 12:
LABEL_47:
          v36 = *(unsigned __int8 *)v69;
          if ( *(char *)v69 < 0 )
          {
            SizeFallback = google::protobuf::internal::ReadSizeFallback(v69, (const char *)*(unsigned __int8 *)v69);
            v69 = (google::protobuf::internal *)SizeFallback;
            if ( !SizeFallback )
              return 0LL;
            v37 = SizeFallback;
            v36 = v45;
          }
          else
          {
            v37 = (char *)v69 + 1;
            v69 = (google::protobuf::internal *)((char *)v69 + 1);
          }
          memset(__p, 0, 24);
          v69 = (google::protobuf::internal *)sub_1000C8A00(a3, v37, v36, __p);
          if ( !v69
            || ((v16 | !v15) & 1) == 0
            && ((__p[0].__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL
              ? (v46 = __p)
              : (v46 = (std::string *)__p[0].__r_.__value_.__r.__words[0]),
                !(unsigned int)google::protobuf::internal::WireFormatLite::VerifyUtf8String(v46)) )
          {
            v26 = 0LL;
            goto LABEL_124;
          }
          if ( *((_DWORD *)a6 + 15) == 3 )
          {
            if ( SHIBYTE(__p[0].__r_.__value_.__r.__words[2]) < 0 )
              sub_10007A474(&__dst, __p[0].__r_.__value_.__l.__data_);
            else
              __dst = __p[0];
            google::protobuf::Reflection::AddString(this, (__int64)a1, a6, (__int64 *)&__dst);
            if ( SHIBYTE(__dst.__r_.__value_.__r.__words[2]) < 0 )
            {
              p_dst = &__dst;
LABEL_122:
              operator delete(p_dst->__r_.__value_.__l.__data_);
            }
          }
          else
          {
            if ( SHIBYTE(__p[0].__r_.__value_.__r.__words[2]) < 0 )
              sub_10007A474(&v62, __p[0].__r_.__value_.__l.__data_);
            else
              v62 = __p[0];
            google::protobuf::Reflection::SetString((unsigned int *)this, a1, a6, (__int64 *)&v62);
            if ( SHIBYTE(v62.__r_.__value_.__r.__words[2]) < 0 )
            {
              p_dst = &v62;
              goto LABEL_122;
            }
          }
          v26 = v69;
LABEL_124:
          if ( SHIBYTE(__p[0].__r_.__value_.__r.__words[2]) < 0 )
            operator delete(__p[0].__r_.__value_.__l.__data_);
          break;
        case 13:
          LODWORD(__p[0].__r_.__value_.__l.__data_) = 0;
          v69 = (google::protobuf::internal *)sub_100108544(v69, __p);
          if ( !v69 )
            return 0LL;
          v35 = *((_DWORD *)a6 + 15);
          v34 = (unsigned int)__p[0].__r_.__value_.__l.__data_;
LABEL_55:
          if ( v35 == 3 )
            google::protobuf::Reflection::AddUInt32(this, a1, a6, v34);
          else
            google::protobuf::Reflection::SetUInt32(this, a1, a6, v34);
          return (char *)v69;
        case 14:
          LODWORD(__p[0].__r_.__value_.__l.__data_) = 0;
          v69 = (google::protobuf::internal *)sub_100108544(v69, __p);
          if ( !v69 )
            return 0LL;
          if ( *((_DWORD *)a6 + 15) == 3 )
            google::protobuf::Reflection::AddEnumValue(this, a1, a6, (signed int)__p[0].__r_.__value_.__l.__data_);
          else
            google::protobuf::Reflection::SetEnumValue(this, a1, a6, (signed int)__p[0].__r_.__value_.__l.__data_);
          return (char *)v69;
        case 15:
          data = *(_DWORD *)v69;
          v69 = (google::protobuf::internal *)((char *)v69 + 4);
          goto LABEL_64;
        case 16:
          v29 = *(_QWORD *)v69;
          v69 = (google::protobuf::internal *)((char *)v69 + 8);
          goto LABEL_70;
        case 17:
          v42 = sub_1001085A4(&v69);
          if ( !v69 )
            return 0LL;
          data = v42;
LABEL_64:
          v32 = *((_DWORD *)a6 + 15);
LABEL_65:
          if ( v32 == 3 )
            google::protobuf::Reflection::AddInt32(this, a1, a6, data);
          else
            google::protobuf::Reflection::SetInt32(this, a1, a6, data);
          return (char *)v69;
        case 18:
          v43 = sub_10010860C(&v69);
          if ( !v69 )
            return 0LL;
          v29 = v43;
LABEL_70:
          v28 = *((_DWORD *)a6 + 15);
LABEL_71:
          if ( v28 == 3 )
            google::protobuf::Reflection::AddInt64(this, a1, a6, v29);
          else
            google::protobuf::Reflection::SetInt64(this, a1, a6, v29);
          return (char *)v69;
        default:
          return 0LL;
      }
    }
    else
    {
      if ( *((_DWORD *)a6 + 15) == 3 )
      {
        v21 = (std::once_flag::_State_type *)*((_QWORD *)a6 + 6);
        if ( v21 )
        {
          v70 = a6;
          v71 = google::protobuf::FieldDescriptor::TypeOnceInit;
          if ( atomic_load_explicit((atomic_ullong *volatile)v21, memory_order_acquire) != -1LL )
          {
            __p[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v71;
            __p[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v70;
            v72 = __p;
            std::__call_once(v21, &v72, (void (__cdecl *)(void *))sub_10007A460);
          }
          LODWORD(v13) = *((_DWORD *)a6 + 14);
        }
        if ( v11 == 2 && (unsigned int)(v13 - 13) <= 0xFFFFFFFB )
        {
          v22 = (std::once_flag::_State_type *)*((_QWORD *)a6 + 6);
          if ( v22 )
          {
            v70 = a6;
            v71 = google::protobuf::FieldDescriptor::TypeOnceInit;
            if ( atomic_load_explicit((atomic_ullong *volatile)v22, memory_order_acquire) != -1LL )
            {
              __p[0].__r_.__value_.__r.__words[0] = (std::string::size_type)&v71;
              __p[0].__r_.__value_.__l.__size_ = (std::string::size_type)&v70;
              v72 = __p;
              std::__call_once(v22, &v72, (void (__cdecl *)(void *))sub_10007A460);
            }
            LODWORD(v13) = *((_DWORD *)a6 + 14);
          }
          switch ( (int)v13 )
          {
            case 1:
              v47 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<double>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedDoubleParser(v47, v69);
            case 2:
              v48 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<float>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedFloatParser(v48, v69);
            case 3:
              v49 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<long long>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedInt64Parser(v49, v69, a3);
            case 4:
              v50 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<unsigned long long>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedUInt64Parser(v50, v69, a3);
            case 5:
              v51 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<int>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedInt32Parser(v51, v69, a3);
            case 6:
              v52 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<unsigned long long>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedFixed64Parser(v52, v69);
            case 7:
              v53 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<unsigned int>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedFixed32Parser(v53, v69);
            case 8:
              v54 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<bool>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedBoolParser(v54, v69, a3);
            case 9:
            case 10:
            case 11:
            case 12:
              google::protobuf::internal::LogMessage::LogMessage(
                __p,
                3LL,
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/google/protobuf/wire_format.cc",
                884LL);
              v23 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                                __p,
                                                                "Can't reach");
              google::protobuf::internal::LogFinisher::operator=((int)&v72, v23);
              google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
              return 0LL;
            case 13:
              v55 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<unsigned int>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedUInt32Parser(v55, v69, a3);
            case 14:
              v56 = google::protobuf::Reflection::MutableRepeatedFieldInternal<int>(
                      this,
                      (__int64)a1,
                      a6,
                      a4,
                      (__int64)this);
              if ( *(_DWORD *)(*((_QWORD *)a6 + 5) + 60LL) == 3 )
                return (char *)google::protobuf::internal::PackedEnumParser((int)v56, v69, a3);
              v65 = v56;
              v66 = a6;
              v67 = this;
              v68 = a1;
              return (char *)sub_1001083DC(a3, v69);
            case 15:
              v57 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<int>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedSFixed32Parser(v57, v69);
            case 16:
              v58 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<long long>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedSFixed64Parser(v58, v69);
            case 17:
              v59 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<int>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedSInt32Parser(v59, v69, a3);
            case 18:
              v60 = (unsigned int)google::protobuf::Reflection::MutableRepeatedFieldInternal<long long>(
                                    this,
                                    (__int64)a1,
                                    a6,
                                    a4,
                                    (__int64)this);
              return (char *)google::protobuf::internal::PackedSInt64Parser(v60, v69, a3);
            default:
              goto LABEL_6;
          }
        }
      }
      v24 = google::protobuf::Reflection::MutableUnknownFields(this, a1);
      return (char *)google::protobuf::internal::UnknownFieldParse(a4, v24, v69);
    }
    return (char *)v26;
  }
  else
  {
    v19 = google::protobuf::Reflection::MutableUnknownFields(this, a1);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (char *)google::protobuf::internal::UnknownFieldParse(a4, v19, a2);
  }
}