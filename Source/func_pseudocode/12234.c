__ZN6google8protobuf8internal10WireFormat18_InternalSerializeERKNS0_7MessageEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::internal::WireFormat::_InternalSerialize(
        google::protobuf::internal::WireFormat *this,
        const google::protobuf::Message *a2,
        unsigned __int8 *a3,
        google::protobuf::io::EpsCopyOutputStream *a4)
{
  const google::protobuf::Message *v5; // x20
  __int64 v7; // x23
  __int64 v8; // x1
  google::protobuf::io::EpsCopyOutputStream *v9; // x4
  __int64 *v10; // x26
  __int64 v11; // x25
  __int64 v12; // x28
  __int64 v13; // x26
  unsigned __int64 v14; // x9
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 *v17; // x9
  char *v18; // x8
  char *v19; // x10
  __int64 v20; // t1
  google::protobuf::internal::WireFormat **i; // x22
  google::protobuf::internal::WireFormat *UnknownFields; // x0
  google::protobuf::io::EpsCopyOutputStream *v23; // x3
  const google::protobuf::UnknownFieldSet *v24; // x0
  google::protobuf::internal::WireFormat *v25; // x0
  google::protobuf::io::EpsCopyOutputStream *v26; // x3
  const google::protobuf::UnknownFieldSet *v27; // x19
  unsigned int *v29; // [xsp+0h] [xbp-70h]
  void *__p; // [xsp+8h] [xbp-68h] BYREF
  __int64 *v31; // [xsp+10h] [xbp-60h]
  unsigned __int64 v32; // [xsp+18h] [xbp-58h] BYREF

  v5 = a2;
  v7 = (*(__int64 (__fastcall **)(google::protobuf::internal::WireFormat *, const google::protobuf::Message *, unsigned __int8 *, google::protobuf::io::EpsCopyOutputStream *))(*(_QWORD *)this + 152LL))(
         this,
         a2,
         a3,
         a4);
  (*(void (__fastcall **)(google::protobuf::internal::WireFormat *))(*(_QWORD *)this + 152LL))(this);
  __p = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v29 = (unsigned int *)v8;
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 32) + 75LL) )
  {
    if ( *(int *)(v7 + 104) < 1 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
      do
      {
        v12 = *(_QWORD *)(v7 + 40) + 152 * v11;
        if ( (unsigned __int64)v10 >= v32 )
        {
          v13 = ((char *)v10 - (_BYTE *)__p) >> 3;
          if ( (unsigned __int64)(v13 + 1) >> 61 )
            sub_100097888(&__p);
          v14 = (__int64)(v32 - (_QWORD)__p) >> 2;
          if ( v14 <= v13 + 1 )
            v14 = v13 + 1;
          if ( v32 - (unsigned __int64)__p >= 0x7FFFFFFFFFFFFFF8LL )
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          else
            v15 = v14;
          if ( v15 )
            v16 = sub_10009A09C(&v32);
          else
            v16 = 0LL;
          v17 = (__int64 *)(v16 + 8 * v13);
          *v17 = v12;
          v10 = v17 + 1;
          v19 = (char *)__p;
          v18 = (char *)v31;
          if ( v31 != __p )
          {
            do
            {
              v20 = *((_QWORD *)v18 - 1);
              v18 -= 8;
              *--v17 = v20;
            }
            while ( v18 != v19 );
            v18 = (char *)__p;
          }
          __p = v17;
          v31 = v10;
          v32 = v16 + 8 * v15;
          if ( v18 )
            operator delete(v18);
        }
        else
        {
          *v10++ = v12;
        }
        v31 = v10;
        ++v11;
      }
      while ( v11 < *(int *)(v7 + 104) );
    }
  }
  else
  {
    google::protobuf::Reflection::ListFields(v8, this, (char **)&__p);
    v10 = v31;
  }
  for ( i = (google::protobuf::internal::WireFormat **)__p; i != (google::protobuf::internal::WireFormat **)v10; ++i )
    v5 = (const google::protobuf::Message *)google::protobuf::internal::WireFormat::InternalSerializeField(
                                              *i,
                                              this,
                                              v5,
                                              a3,
                                              v9);
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 32) + 72LL) )
  {
    UnknownFields = (google::protobuf::internal::WireFormat *)google::protobuf::Reflection::GetUnknownFields(
                                                                v29,
                                                                (__int64)this);
    v24 = google::protobuf::internal::WireFormat::InternalSerializeUnknownMessageSetItemsToArray(
            UnknownFields,
            v5,
            (google::protobuf::io::EpsCopyOutputStream *)a3,
            v23);
  }
  else
  {
    v25 = (google::protobuf::internal::WireFormat *)google::protobuf::Reflection::GetUnknownFields(v29, (__int64)this);
    v24 = google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
            v25,
            v5,
            (google::protobuf::io::EpsCopyOutputStream *)a3,
            v26);
  }
  v27 = v24;
  if ( __p )
  {
    v31 = (__int64 *)__p;
    operator delete(__p);
  }
  return v27;
}