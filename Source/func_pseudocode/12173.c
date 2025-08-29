__ZNK6google8protobuf10TextFormat7Printer15PrintFieldValueERKNS0_7MessageEPKNS0_10ReflectionEPKNS0_15FieldDescriptorEiPNS2_13TextGeneratorE
void __fastcall google::protobuf::TextFormat::Printer::PrintFieldValue(
        __int64 a1,
        google::protobuf::Message *a2,
        google::protobuf::Reflection *this,
        google::protobuf::FieldDescriptor *a4,
        int a5,
        __int64 a6)
{
  _QWORD *v12; // x10
  __int64 v13; // x8
  unsigned __int64 v14; // x11
  bool v15; // cf
  _QWORD *v16; // x11
  __int64 **v17; // x8
  __int64 *v18; // x20
  std::once_flag::_State_type *v19; // x0
  __int64 RepeatedInt32; // x1
  __int64 RepeatedInt64; // x1
  __int64 RepeatedUInt32; // x1
  __int64 RepeatedUInt64; // x1
  __n128 v24; // q0
  __n128 v25; // q0
  __int64 RepeatedBool; // x1
  __int64 RepeatedEnumValue; // x0
  unsigned __int64 RepeatedStringReference; // x0
  const google::protobuf::Message *RepeatedMessage; // x1
  google::protobuf *v30; // x22
  google::protobuf::EnumDescriptor *v31; // x0
  _QWORD *ValueByNumber; // x0
  char *v33; // x2
  void **p_p; // x22
  signed __int64 v35; // x3
  unsigned __int64 v36; // x8
  void *v37; // x0
  std::string *v38; // x0
  void *v39; // x8
  char v40; // w9
  std::once_flag::_State_type *v41; // x0
  __int64 v42; // x16
  void (__fastcall **v43)(__int64 *, void **, __int64); // x10
  std::string v44; // [xsp+8h] [xbp-C8h] BYREF
  void *__p; // [xsp+20h] [xbp-B0h] BYREF
  __int128 v46; // [xsp+28h] [xbp-A8h]
  google::protobuf::FieldDescriptor *v47; // [xsp+38h] [xbp-98h] BYREF
  void (__fastcall *v48)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+40h] [xbp-90h] BYREF
  void *__src; // [xsp+48h] [xbp-88h] BYREF
  _BYTE *v50; // [xsp+50h] [xbp-80h]
  _QWORD v51[4]; // [xsp+58h] [xbp-78h] BYREF
  _BYTE v52[15]; // [xsp+78h] [xbp-58h] BYREF

  v12 = *(_QWORD **)(a1 + 40);
  if ( !v12 )
    goto LABEL_12;
  v13 = a1 + 40;
  do
  {
    v14 = v12[4];
    v15 = v14 >= (unsigned __int64)a4;
    if ( v14 >= (unsigned __int64)a4 )
      v16 = v12;
    else
      v16 = v12 + 1;
    if ( v15 )
      v13 = (__int64)v12;
    v12 = (_QWORD *)*v16;
  }
  while ( *v16 );
  if ( v13 != a1 + 40 && *(_QWORD *)(v13 + 32) <= (unsigned __int64)a4 )
    v17 = (__int64 **)(v13 + 40);
  else
LABEL_12:
    v17 = (__int64 **)(a1 + 24);
  v18 = *v17;
  v19 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
  if ( v19 )
  {
    v44.__r_.__value_.__r.__words[0] = (std::string::size_type)google::protobuf::FieldDescriptor::TypeOnceInit;
    *(_QWORD *)v52 = a4;
    if ( atomic_load_explicit((atomic_ullong *volatile)v19, memory_order_acquire) != -1LL )
    {
      __src = &v44;
      v50 = v52;
      __p = &__src;
      std::__call_once(v19, &__p, (void (__cdecl *)(void *))sub_10007A460);
    }
  }
  switch ( *((_DWORD *)a4 + 14) )
  {
    case 1:
      if ( *((_DWORD *)a4 + 15) == 3 )
        v24.n128_f64[0] = google::protobuf::Reflection::GetRepeatedDouble(this, a2, a4, a5);
      else
        v24.n128_f64[0] = google::protobuf::Reflection::GetDouble(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __n128))(*v18 + 64))(v18, a6, v24);
      break;
    case 2:
      if ( *((_DWORD *)a4 + 15) == 3 )
        v25.n128_f32[0] = google::protobuf::Reflection::GetRepeatedFloat(this, a2, a4, a5);
      else
        v25.n128_f32[0] = google::protobuf::Reflection::GetFloat(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __n128))(*v18 + 56))(v18, a6, v25);
      break;
    case 3:
    case 0x10:
    case 0x12:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedInt64 = google::protobuf::Reflection::GetRepeatedInt64(this, a2, a4, a5);
      else
        RepeatedInt64 = google::protobuf::Reflection::GetInt64(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v18 + 40))(v18, RepeatedInt64, a6);
      break;
    case 4:
    case 6:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedUInt64 = google::protobuf::Reflection::GetRepeatedUInt64(this, a2, a4, a5);
      else
        RepeatedUInt64 = google::protobuf::Reflection::GetUInt64(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v18 + 48))(v18, RepeatedUInt64, a6);
      break;
    case 5:
    case 0xF:
    case 0x11:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedInt32 = google::protobuf::Reflection::GetRepeatedInt32(this, a2, a4, a5);
      else
        RepeatedInt32 = google::protobuf::Reflection::GetInt32(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v18 + 24))(v18, RepeatedInt32, a6);
      break;
    case 7:
    case 0xD:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedUInt32 = google::protobuf::Reflection::GetRepeatedUInt32(this, a2, a4, a5);
      else
        RepeatedUInt32 = google::protobuf::Reflection::GetUInt32(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v18 + 32))(v18, RepeatedUInt32, a6);
      break;
    case 8:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedBool = google::protobuf::Reflection::GetRepeatedBool(this, a2, a4, a5);
      else
        RepeatedBool = google::protobuf::Reflection::GetBool(this, a2, a4);
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v18 + 16))(v18, RepeatedBool, a6);
      break;
    case 9:
    case 0xC:
      __src = 0LL;
      v50 = 0LL;
      v51[0] = 0LL;
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedStringReference = google::protobuf::Reflection::GetRepeatedStringReference(
                                    this,
                                    (__int64)a2,
                                    (__int64)a4,
                                    a5);
      else
        RepeatedStringReference = google::protobuf::Reflection::GetStringReference(this, (__int64)a2, (__int64)a4);
      p_p = (void **)RepeatedStringReference;
      __p = 0LL;
      v46 = 0uLL;
      v35 = *(_QWORD *)(a1 + 16);
      if ( v35 >= 1 )
      {
        v36 = *(char *)(RepeatedStringReference + 23) < 0
            ? *(_QWORD *)(RepeatedStringReference + 8)
            : *(unsigned __int8 *)(RepeatedStringReference + 23);
        if ( v35 < v36 )
        {
          std::string::basic_string(
            &v44,
            (const std::string *)RepeatedStringReference,
            0LL,
            v35,
            (std::allocator<char> *)&v48);
          v38 = std::string::append(&v44, "...<truncated>...");
          v39 = (void *)v38->__r_.__value_.__r.__words[0];
          *(_QWORD *)v52 = v38->__r_.__value_.__l.__size_;
          *(_QWORD *)&v52[7] = *(std::string::size_type *)((char *)&v38->__r_.__value_.__r.__words[1] + 7);
          v40 = HIBYTE(v38->__r_.__value_.__r.__words[2]);
          v38->__r_.__value_.__l.__size_ = 0LL;
          v38->__r_.__value_.__r.__words[2] = 0LL;
          v38->__r_.__value_.__r.__words[0] = 0LL;
          *(_QWORD *)((char *)&v46 + 7) = *(_QWORD *)&v52[7];
          __p = v39;
          *(_QWORD *)&v46 = *(_QWORD *)v52;
          HIBYTE(v46) = v40;
          if ( SHIBYTE(v44.__r_.__value_.__r.__words[2]) < 0 )
            operator delete(v44.__r_.__value_.__l.__data_);
          p_p = &__p;
        }
      }
      v41 = (std::once_flag::_State_type *)*((_QWORD *)a4 + 6);
      if ( v41 )
      {
        v47 = a4;
        v48 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v41, memory_order_acquire) != -1LL )
        {
          v44.__r_.__value_.__r.__words[0] = (std::string::size_type)&v48;
          v44.__r_.__value_.__l.__size_ = (std::string::size_type)&v47;
          *(_QWORD *)v52 = &v44;
          std::__call_once(v41, v52, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      v42 = *v18;
      if ( *((_DWORD *)a4 + 14) == 9 )
        v43 = (void (__fastcall **)(__int64 *, void **, __int64))(v42 + 72);
      else
        v43 = (void (__fastcall **)(__int64 *, void **, __int64))(v42 + 80);
      (*v43)(v18, p_p, a6);
      if ( SHIBYTE(v46) < 0 )
        operator delete(__p);
      if ( SHIBYTE(v51[0]) < 0 )
      {
        v37 = __src;
        goto LABEL_78;
      }
      break;
    case 0xA:
    case 0xB:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedMessage = (const google::protobuf::Message *)google::protobuf::Reflection::GetRepeatedMessage(
                                                               this,
                                                               a2,
                                                               a4,
                                                               a5);
      else
        RepeatedMessage = (const google::protobuf::Message *)google::protobuf::Reflection::GetMessage(this, a2, a4, 0LL);
      google::protobuf::TextFormat::Printer::Print(a1, RepeatedMessage, a6);
      break;
    case 0xE:
      if ( *((_DWORD *)a4 + 15) == 3 )
        RepeatedEnumValue = google::protobuf::Reflection::GetRepeatedEnumValue(this, a2, a4, a5);
      else
        RepeatedEnumValue = google::protobuf::Reflection::GetEnumValue(this, a2, a4);
      v30 = (google::protobuf *)RepeatedEnumValue;
      v31 = (google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type(a4);
      ValueByNumber = (_QWORD *)google::protobuf::EnumDescriptor::FindValueByNumber(v31, (unsigned int)v30);
      if ( ValueByNumber )
      {
        (*(void (__fastcall **)(__int64 *, google::protobuf *, _QWORD, __int64))(*v18 + 88))(
          v18,
          v30,
          *ValueByNumber,
          a6);
      }
      else
      {
        __src = v51;
        v50 = (_BYTE *)(google::protobuf::FastInt32ToBufferLeft(v30, v51, v33) - (_BYTE *)v51);
        sub_10007A6A8(&__p, __src, (size_t)v50);
        (*(void (__fastcall **)(__int64 *, google::protobuf *, void **, __int64))(*v18 + 88))(v18, v30, &__p, a6);
        if ( SHIBYTE(v46) < 0 )
        {
          v37 = __p;
LABEL_78:
          operator delete(v37);
        }
      }
      break;
    default:
      return;
  }
}