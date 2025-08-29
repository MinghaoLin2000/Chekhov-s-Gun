__ZN6google8protobuf8internal13ReflectionOps24FindInitializationErrorsERKNS0_7MessageERKNSt3__112basic_stringIcNS6_11char_traitsIcEENS6_9allocatorIcEEEEPNS6_6vectorISC_NSA_ISC_EEEE
void __fastcall google::protobuf::internal::ReflectionOps::FindInitializationErrors(
        const google::protobuf::Message *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // x23
  __int64 v7; // x1
  google::protobuf::Reflection *v8; // x22
  int v9; // w8
  __int64 v10; // x25
  __int64 v11; // x27
  const google::protobuf::FieldDescriptor *v12; // x2
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x9
  __int128 v15; // q0
  unsigned __int64 v16; // x28
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x8
  __int64 v19; // x1
  char *v20; // x0
  char *v21; // x8
  __int128 v22; // q0
  __int64 v23; // x28
  int v24; // w8
  char *v25; // x23
  char *v26; // x28
  unsigned int *v27; // x24
  std::once_flag::_State_type *v28; // x0
  int v29; // w25
  __int64 v30; // x26
  __int64 RepeatedMessage; // x27
  __int64 Message; // x25
  void *__p[2]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v34; // [xsp+18h] [xbp-98h]
  char *v35; // [xsp+20h] [xbp-90h] BYREF
  char *v36; // [xsp+28h] [xbp-88h]
  char *v37; // [xsp+30h] [xbp-80h]
  char *v38; // [xsp+38h] [xbp-78h]
  _QWORD *v39; // [xsp+40h] [xbp-70h]
  unsigned int *v40; // [xsp+48h] [xbp-68h] BYREF
  void (__fastcall *v41)(google::protobuf::FieldDescriptor *, const google::protobuf::FieldDescriptor *); // [xsp+50h] [xbp-60h] BYREF
  void **v42; // [xsp+58h] [xbp-58h] BYREF

  v6 = (*(__int64 (__fastcall **)(const google::protobuf::Message *))(*(_QWORD *)a1 + 152LL))(a1);
  v8 = (google::protobuf::Reflection *)sub_1000ED454(a1, v7);
  v9 = *(_DWORD *)(v6 + 104);
  if ( v9 >= 1 )
  {
    v10 = 0LL;
    v11 = 152LL * (unsigned int)v9;
    do
    {
      v12 = (const google::protobuf::FieldDescriptor *)(*(_QWORD *)(v6 + 40) + v10);
      if ( *((_DWORD *)v12 + 15) == 2 && (google::protobuf::Reflection::HasField(v8, a1, v12) & 1) == 0 )
      {
        sub_1000BCA50(__p, a2, *(_QWORD *)(*(_QWORD *)(v6 + 40) + v10));
        v14 = a3[1];
        v13 = a3[2];
        if ( v14 >= v13 )
        {
          v16 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - *a3) >> 3);
          v17 = v16 + 1;
          if ( v16 + 1 > 0xAAAAAAAAAAAAAAALL )
            sub_100097888(a3);
          v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v13 - *a3) >> 3);
          if ( 2 * v18 > v17 )
            v17 = 2 * v18;
          if ( v18 >= 0x555555555555555LL )
            v19 = 0xAAAAAAAAAAAAAAALL;
          else
            v19 = v17;
          v39 = a3 + 2;
          if ( v19 )
            v20 = (char *)sub_1000978A0(a3 + 2);
          else
            v20 = 0LL;
          v21 = &v20[24 * v16];
          v35 = v20;
          v36 = v21;
          v38 = &v20[24 * v19];
          v22 = *(_OWORD *)__p;
          *((_QWORD *)v21 + 2) = v34;
          *(_OWORD *)v21 = v22;
          __p[1] = 0LL;
          v34 = 0LL;
          __p[0] = 0LL;
          v37 = v21 + 24;
          sub_100097810(a3, &v35);
          v23 = a3[1];
          sub_100097A08(&v35);
          v24 = SHIBYTE(v34);
          a3[1] = v23;
          if ( v24 < 0 )
            operator delete(__p[0]);
        }
        else
        {
          v15 = *(_OWORD *)__p;
          *(_QWORD *)(v14 + 16) = v34;
          *(_OWORD *)v14 = v15;
          a3[1] = v14 + 24;
        }
      }
      v10 += 152LL;
    }
    while ( v11 != v10 );
  }
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  google::protobuf::Reflection::ListFieldsOmitStripped((__int64)v8, a1, &v35);
  v25 = v35;
  v26 = v36;
  if ( v35 != v36 )
  {
    do
    {
      v27 = *(unsigned int **)v25;
      v28 = *(std::once_flag::_State_type **)(*(_QWORD *)v25 + 48LL);
      if ( v28 )
      {
        v40 = *(unsigned int **)v25;
        v41 = google::protobuf::FieldDescriptor::TypeOnceInit;
        if ( atomic_load_explicit((atomic_ullong *volatile)v28, memory_order_acquire) != -1LL )
        {
          __p[0] = &v41;
          __p[1] = &v40;
          v42 = __p;
          std::__call_once(v28, &v42, (void (__cdecl *)(void *))sub_10007A460);
        }
      }
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[v27[14]] == 10 )
      {
        if ( v27[15] == 3 )
        {
          v29 = google::protobuf::Reflection::FieldSize(v8, a1, (const google::protobuf::FieldDescriptor *)v27);
          if ( v29 >= 1 )
          {
            v30 = 0LL;
            do
            {
              RepeatedMessage = google::protobuf::Reflection::GetRepeatedMessage(
                                  v8,
                                  a1,
                                  (const google::protobuf::FieldDescriptor *)v27,
                                  v30);
              sub_1000EE378(__p, a2, v27, v30);
              google::protobuf::internal::ReflectionOps::FindInitializationErrors(RepeatedMessage, __p, a3);
              if ( SHIBYTE(v34) < 0 )
                operator delete(__p[0]);
              v30 = (unsigned int)(v30 + 1);
            }
            while ( v29 != (_DWORD)v30 );
          }
        }
        else
        {
          Message = google::protobuf::Reflection::GetMessage(
                      v8,
                      a1,
                      (const google::protobuf::FieldDescriptor *)v27,
                      0LL);
          sub_1000EE378(__p, a2, v27, 0xFFFFFFFFLL);
          google::protobuf::internal::ReflectionOps::FindInitializationErrors(Message, __p, a3);
          if ( SHIBYTE(v34) < 0 )
            operator delete(__p[0]);
        }
      }
      v25 += 8;
    }
    while ( v25 != v26 );
    v25 = v35;
  }
  if ( v25 )
  {
    v36 = v25;
    operator delete(v25);
  }
}