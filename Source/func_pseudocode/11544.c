__ZNK6google8protobuf8internal12ExtensionSet18_InternalSerializeEiiPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::internal::ExtensionSet::_InternalSerialize(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        int a3,
        unsigned __int8 *a4,
        google::protobuf::io::EpsCopyOutputStream *a5)
{
  int *v7; // x21
  unsigned __int64 v8; // x8
  int *v9; // x22
  unsigned __int64 v10; // x10
  int *v11; // x11
  int *v12; // x11
  int v13; // t1
  __int64 v15; // x8
  int *v16; // x21
  __int64 v17; // t1
  int *v18; // x22
  int v19; // w9
  bool v20; // cc
  __int64 *v21; // x9
  int v22; // w1
  int *v23; // x9
  int *v24; // x8
  bool v25; // zf

  v7 = (int *)*((_QWORD *)this + 2);
  if ( *((unsigned __int16 *)this + 4) >= 0x101u )
  {
    v17 = *((_QWORD *)v7 + 1);
    v16 = v7 + 2;
    v15 = v17;
    if ( v17 )
    {
      v18 = v16;
      do
      {
        v19 = *(_DWORD *)(v15 + 32);
        v20 = v19 < a2;
        if ( v19 >= a2 )
          v21 = (__int64 *)v15;
        else
          v21 = (__int64 *)(v15 + 8);
        if ( !v20 )
          v18 = (int *)v15;
        v15 = *v21;
      }
      while ( *v21 );
      if ( v18 != v16 )
      {
        do
        {
          v22 = v18[8];
          if ( v22 >= a3 )
            break;
          a4 = (unsigned __int8 *)google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
                                    (google::protobuf::internal::ExtensionSet::Extension *)(v18 + 10),
                                    v22,
                                    a4,
                                    a5);
          v23 = (int *)*((_QWORD *)v18 + 1);
          if ( v23 )
          {
            do
            {
              v24 = v23;
              v23 = *(int **)v23;
            }
            while ( v23 );
          }
          else
          {
            do
            {
              v24 = (int *)*((_QWORD *)v18 + 2);
              v25 = *(_QWORD *)v24 == (_QWORD)v18;
              v18 = v24;
            }
            while ( !v25 );
          }
          v18 = v24;
        }
        while ( v24 != v16 );
      }
    }
  }
  else
  {
    v8 = *((unsigned __int16 *)this + 5);
    if ( *((_WORD *)this + 5) )
    {
      v9 = &v7[8 * v8];
      do
      {
        v10 = v8 >> 1;
        v11 = &v7[8 * (v8 >> 1)];
        v13 = *v11;
        v12 = v11 + 8;
        v8 += ~(v8 >> 1);
        if ( v13 < a2 )
          v7 = v12;
        else
          v8 = v10;
      }
      while ( v8 );
      while ( v7 != v9 && *v7 < a3 )
      {
        a4 = (unsigned __int8 *)google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
                                  (google::protobuf::internal::ExtensionSet::Extension *)(v7 + 2),
                                  *v7,
                                  a4,
                                  a5);
        v7 += 8;
      }
    }
  }
  return a4;
}