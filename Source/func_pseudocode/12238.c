__ZN6google8protobuf8internal10WireFormat8ByteSizeERKNS0_7MessageE
__int64 __fastcall google::protobuf::internal::WireFormat::ByteSize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::Message *a2)
{
  __int64 v3; // x21
  __int64 v4; // x1
  const google::protobuf::Message *v5; // x2
  unsigned int *v6; // x20
  __int64 *v7; // x24
  __int64 v8; // x23
  __int64 v9; // x28
  __int64 v10; // x24
  unsigned __int64 v11; // x9
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 *v14; // x9
  char *v15; // x8
  char *v16; // x10
  __int64 v17; // t1
  google::protobuf::internal::WireFormat **v18; // x23
  __int64 v19; // x22
  google::protobuf::internal::WireFormat *UnknownFields; // x0
  const google::protobuf::UnknownFieldSet *v21; // x1
  __int64 v22; // x0
  google::protobuf::internal::WireFormat *v23; // x0
  const google::protobuf::UnknownFieldSet *v24; // x1
  __int64 v25; // x19
  void *__p; // [xsp+8h] [xbp-68h] BYREF
  __int64 *v28; // [xsp+10h] [xbp-60h]
  unsigned __int64 v29; // [xsp+18h] [xbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(google::protobuf::internal::WireFormat *, const google::protobuf::Message *))(*(_QWORD *)this + 152LL))(
         this,
         a2);
  (*(void (__fastcall **)(google::protobuf::internal::WireFormat *))(*(_QWORD *)this + 152LL))(this);
  v6 = (unsigned int *)v4;
  __p = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 32) + 75LL) )
  {
    if ( *(int *)(v3 + 104) < 1 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        v9 = *(_QWORD *)(v3 + 40) + 152 * v8;
        if ( (unsigned __int64)v7 >= v29 )
        {
          v10 = ((char *)v7 - (_BYTE *)__p) >> 3;
          if ( (unsigned __int64)(v10 + 1) >> 61 )
            sub_100097888(&__p);
          v11 = (__int64)(v29 - (_QWORD)__p) >> 2;
          if ( v11 <= v10 + 1 )
            v11 = v10 + 1;
          if ( v29 - (unsigned __int64)__p >= 0x7FFFFFFFFFFFFFF8LL )
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v12 = v11;
          if ( v12 )
            v13 = sub_10009A09C(&v29);
          else
            v13 = 0LL;
          v14 = (__int64 *)(v13 + 8 * v10);
          *v14 = v9;
          v7 = v14 + 1;
          v16 = (char *)__p;
          v15 = (char *)v28;
          if ( v28 != __p )
          {
            do
            {
              v17 = *((_QWORD *)v15 - 1);
              v15 -= 8;
              *--v14 = v17;
            }
            while ( v15 != v16 );
            v15 = (char *)__p;
          }
          __p = v14;
          v28 = v7;
          v29 = v13 + 8 * v12;
          if ( v15 )
            operator delete(v15);
        }
        else
        {
          *v7++ = v9;
        }
        v28 = v7;
        ++v8;
      }
      while ( v8 < *(int *)(v3 + 104) );
    }
  }
  else
  {
    google::protobuf::Reflection::ListFields(v4, this, (char **)&__p);
    v7 = v28;
  }
  v18 = (google::protobuf::internal::WireFormat **)__p;
  if ( __p == v7 )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = 0LL;
    do
      v19 += google::protobuf::internal::WireFormat::FieldByteSize(*v18++, this, v5);
    while ( v18 != (google::protobuf::internal::WireFormat **)v7 );
  }
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 32) + 72LL) )
  {
    UnknownFields = (google::protobuf::internal::WireFormat *)google::protobuf::Reflection::GetUnknownFields(
                                                                v6,
                                                                (__int64)this);
    v22 = google::protobuf::internal::WireFormat::ComputeUnknownMessageSetItemsSize(UnknownFields, v21);
  }
  else
  {
    v23 = (google::protobuf::internal::WireFormat *)google::protobuf::Reflection::GetUnknownFields(v6, (__int64)this);
    v22 = google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(v23, v24);
  }
  v25 = v22;
  if ( __p )
  {
    v28 = (__int64 *)__p;
    operator delete(__p);
  }
  return v25 + v19;
}