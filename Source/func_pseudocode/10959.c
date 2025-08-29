__ZN6google8protobuf17DescriptorBuilder17OptionInterpreter20ExamineIfOptionIsSetENSt3__111__wrap_iterIPKPKNS0_15FieldDescriptorEEESA_S7_RKNS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEERKNS0_15UnknownFieldSetE
bool __fastcall google::protobuf::DescriptorBuilder::OptionInterpreter::ExamineIfOptionIsSet(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v9; // x25
  __int64 v10; // x10
  unsigned __int64 v11; // x8
  __int64 v15; // x27
  __int64 v16; // x28
  __int64 v17; // x26
  std::once_flag::_State_type *v18; // x0
  __int64 v19; // x26
  __int64 v20; // x8
  char v21; // w9
  int v22; // w2
  const void *v23; // x1
  void *v24; // x0
  int v25; // w8
  _BOOL8 v26; // x21
  __int64 v28; // x9
  __int64 v29; // x11
  int *v30; // x12
  __int64 v31; // x10
  int v32; // t1
  std::string *v33; // x0
  __int128 v34; // q0
  __int64 v35; // x0
  google::protobuf::internal::LogMessage *v36; // x0
  void *v37; // x0
  __int64 *v38; // [xsp+8h] [xbp-B8h]
  void *__p[2]; // [xsp+10h] [xbp-B0h] BYREF
  std::string::size_type v40; // [xsp+20h] [xbp-A0h]
  std::string v41; // [xsp+48h] [xbp-78h] BYREF
  __int64 v42; // [xsp+60h] [xbp-60h] BYREF
  __int64 (__fastcall *v43)(google::protobuf::FieldDescriptor *__hidden, const google::protobuf::FieldDescriptor *); // [xsp+68h] [xbp-58h] BYREF

  v9 = *(_DWORD **)a6;
  v10 = *(_QWORD *)(a6 + 8) - *(_QWORD *)a6;
  v11 = (unsigned __int64)v10 >> 4;
  if ( a2 != a3 )
  {
    if ( (int)v11 >= 1 )
    {
      v15 = 0LL;
      v16 = 0LL;
      v38 = a2 + 1;
      do
      {
        v17 = *a2;
        if ( v9[v15] == *(_DWORD *)(*a2 + 68) )
        {
          v18 = *(std::once_flag::_State_type **)(v17 + 48);
          if ( v18 )
          {
            v43 = google::protobuf::FieldDescriptor::TypeOnceInit;
            v42 = v17;
            if ( atomic_load_explicit((atomic_ullong *volatile)v18, memory_order_acquire) != -1LL )
            {
              __p[0] = &v43;
              __p[1] = &v42;
              v41.__r_.__value_.__r.__words[0] = (std::string::size_type)__p;
              std::__call_once(v18, &v41, (void (__cdecl *)(void *))sub_10007A460);
            }
          }
          v19 = *(unsigned int *)(v17 + 56);
          if ( (_DWORD)v19 == 10 )
          {
            if ( v9[v15 + 1] == 4
              && (google::protobuf::DescriptorBuilder::OptionInterpreter::ExamineIfOptionIsSet(
                    a1,
                    v38,
                    a3,
                    a4,
                    a5,
                    *(_QWORD *)&v9[v15 + 2]) & 1) == 0 )
            {
              return 0LL;
            }
          }
          else
          {
            if ( (_DWORD)v19 != 11 )
            {
              google::protobuf::internal::LogMessage::LogMessage(
                __p,
                3LL,
                "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sour"
                "ces/iWorkXPC/shared/persistence/google/protobuf/descriptor.cc",
                6833LL);
              v35 = google::protobuf::internal::LogMessage::operator<<(__p, "Invalid wire type for CPPTYPE_MESSAGE: ");
              v36 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                                v35,
                                                                v19);
              google::protobuf::internal::LogFinisher::operator=((int)&v41, v36);
              google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)__p);
              return 0LL;
            }
            if ( v9[v15 + 1] == 3 )
            {
              __p[0] = 0LL;
              __p[1] = 0LL;
              v40 = 0LL;
              v20 = *(_QWORD *)&v9[v15 + 2];
              v21 = *(_BYTE *)(v20 + 23);
              if ( v21 >= 0 )
                v22 = *(unsigned __int8 *)(v20 + 23);
              else
                v22 = *(_DWORD *)(v20 + 8);
              if ( v21 >= 0 )
                v23 = *(const void **)&v9[v15 + 2];
              else
                v23 = *(const void **)v20;
              if ( (unsigned int)google::protobuf::UnknownFieldSet::ParseFromArray(
                                   (google::protobuf::UnknownFieldSet *)__p,
                                   v23,
                                   v22)
                && (google::protobuf::DescriptorBuilder::OptionInterpreter::ExamineIfOptionIsSet(
                      a1,
                      v38,
                      a3,
                      a4,
                      a5,
                      __p) & 1) == 0 )
              {
                v37 = __p[0];
                if ( __p[0] != __p[1] )
                {
                  google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *)__p);
                  v37 = __p[0];
                }
                if ( v37 )
                {
                  __p[1] = v37;
                  operator delete(v37);
                }
                return 0LL;
              }
              v24 = __p[0];
              if ( __p[0] != __p[1] )
              {
                google::protobuf::UnknownFieldSet::ClearFallback((google::protobuf::UnknownFieldSet *)__p);
                v24 = __p[0];
              }
              if ( v24 )
              {
                __p[1] = v24;
                operator delete(v24);
              }
            }
          }
        }
        ++v16;
        v9 = *(_DWORD **)a6;
        v15 += 4LL;
      }
      while ( v16 < (int)((*(_QWORD *)(a6 + 8) - *(_QWORD *)a6) >> 4) );
    }
    return 1LL;
  }
  if ( (int)v11 < 1 )
    return 1LL;
  v25 = *(_DWORD *)(a4 + 68);
  if ( *v9 == v25 )
  {
    v26 = 0LL;
  }
  else
  {
    v28 = (int)(v10 >> 4);
    v29 = (unsigned int)((unsigned __int64)v10 >> 4);
    v30 = v9 + 4;
    v31 = 1LL;
    do
    {
      if ( v29 == v31 )
        return v31 >= v28;
      v32 = *v30;
      v30 += 4;
      ++v31;
    }
    while ( v32 != v25 );
    v26 = v31 - 1 >= v28;
  }
  std::operator+<char>("Option \"", a5);
  v33 = std::string::append(&v41, "\" was already set.");
  v34 = *(_OWORD *)&v33->__r_.__value_.__l.__data_;
  v40 = v33->__r_.__value_.__r.__words[2];
  *(_OWORD *)__p = v34;
  v33->__r_.__value_.__l.__size_ = 0LL;
  v33->__r_.__value_.__r.__words[2] = 0LL;
  v33->__r_.__value_.__r.__words[0] = 0LL;
  google::protobuf::DescriptorBuilder::AddError(*a1, a1[1] + 24, a1[2], 7LL, (__int64)__p);
  if ( SHIBYTE(v40) < 0 )
    operator delete(__p[0]);
  if ( SHIBYTE(v41.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v41.__r_.__value_.__l.__data_);
  return v26;
}