__ZNK6google8protobuf6Struct18_InternalSerializeEPhPNS0_2io19EpsCopyOutputStreamE
const google::protobuf::UnknownFieldSet *__fastcall google::protobuf::Struct::_InternalSerialize(
        google::protobuf::Struct *this,
        unsigned __int8 *a2,
        google::protobuf::io::EpsCopyOutputStream *a3)
{
  google::protobuf::internal::MapFieldBase *v6; // x22
  google::protobuf::io::EpsCopyOutputStream *v7; // x3
  _QWORD *v8; // x25
  __int64 v9; // x0
  __int64 v10; // x23
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x10
  __int64 v13; // x11
  __int64 *v14; // x9
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x9
  __int64 v17; // x10
  __int64 *v18; // x24
  __int64 *v19; // x0
  unsigned __int64 v20; // x26
  _QWORD *v21; // x24
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x3
  __int64 i; // x24
  __int64 **v25; // x0
  __int64 v26; // x8
  __int64 *v28; // [xsp+8h] [xbp-58h] BYREF
  char *v29; // [xsp+10h] [xbp-50h]
  unsigned __int64 v30; // [xsp+18h] [xbp-48h]

  v6 = (google::protobuf::Struct *)((char *)this + 16);
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField((google::protobuf::Struct *)((char *)this + 16));
  v8 = (_QWORD *)((char *)this + 112);
  if ( *((_QWORD *)this + 14) )
  {
    if ( *((_BYTE *)a3 + 58) && (google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6), *v8 >= 2uLL) )
    {
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6);
      if ( *v8 >> 61 )
        v9 = -1LL;
      else
        v9 = 8LL * *v8;
      v10 = operator new[](v9, 0x60C8044C4A2DFLL);
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6);
      v11 = *((_QWORD *)this + 17);
      v12 = *((_QWORD *)this + 15);
      if ( v12 <= v11 )
      {
        v14 = 0LL;
      }
      else
      {
        v13 = *((_QWORD *)this + 18);
        while ( 1 )
        {
          v14 = *(__int64 **)(v13 + 8 * v11);
          if ( v14 )
            break;
          if ( v12 == ++v11 )
          {
            v14 = 0LL;
            v11 = *((_QWORD *)this + 15);
            goto LABEL_28;
          }
        }
        if ( v14 == *(__int64 **)(v13 + 8 * (v11 ^ 1)) )
          v14 = *(__int64 **)(*v14 + 40);
      }
LABEL_28:
      v20 = 0LL;
      v28 = v14;
      v29 = (char *)this + 112;
      v21 = (_QWORD *)v10;
      v30 = v11;
      while ( 1 )
      {
        google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6);
        if ( !v28 )
          break;
        *v21 = v28;
        sub_1001149F4(&v28);
        ++v20;
        ++v21;
      }
      v22 = 126 - 2 * __clz(v20);
      if ( v20 )
        v23 = v22;
      else
        v23 = 0LL;
      sub_10011546C(v10, v21, &v28, v23, 1LL);
      if ( v20 )
      {
        for ( i = 0LL; i != v20; ++i )
        {
          a2 = (unsigned __int8 *)sub_1001107DC(
                                    1,
                                    *(_QWORD *)(v10 + 8 * i),
                                    (unsigned int)*(_QWORD *)(v10 + 8 * i) + 24,
                                    a2,
                                    (int)a3);
          v25 = *(__int64 ***)(v10 + 8 * i);
          if ( *((char *)v25 + 23) < 0 )
            v25 = (__int64 **)*v25;
          google::protobuf::internal::WireFormatLite::VerifyUtf8String(v25);
        }
      }
      operator delete[](v10, 0x60C8044C4A2DFLL);
    }
    else
    {
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6);
      v15 = *((_QWORD *)this + 17);
      v16 = *((_QWORD *)this + 15);
      if ( v16 <= v15 )
      {
        v18 = 0LL;
      }
      else
      {
        v17 = *((_QWORD *)this + 18);
        while ( 1 )
        {
          v18 = *(__int64 **)(v17 + 8 * v15);
          if ( v18 )
            break;
          if ( v16 == ++v15 )
          {
            v18 = 0LL;
            v15 = *((_QWORD *)this + 15);
            goto LABEL_20;
          }
        }
        if ( v18 == *(__int64 **)(v17 + 8 * (v15 ^ 1)) )
          v18 = *(__int64 **)(*v18 + 40);
      }
LABEL_20:
      v28 = v18;
      v29 = (char *)this + 112;
      v30 = v15;
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6);
      if ( v18 )
      {
        do
        {
          a2 = (unsigned __int8 *)sub_1001107DC(1, (int)v18, (int)v18 + 24, a2, (int)a3);
          v19 = v28;
          if ( *((char *)v28 + 23) < 0 )
            v19 = (__int64 *)*v28;
          google::protobuf::internal::WireFormatLite::VerifyUtf8String(v19);
          sub_1001149F4(&v28);
          google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v6);
          LODWORD(v18) = (_DWORD)v28;
        }
        while ( v28 );
      }
    }
  }
  v26 = *((_QWORD *)this + 1);
  if ( (v26 & 1) != 0 )
    return google::protobuf::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
             (google::protobuf::internal::WireFormat *)((v26 & 0xFFFFFFFFFFFFFFFELL) + 8),
             (const google::protobuf::UnknownFieldSet *)a2,
             a3,
             v7);
  return (const google::protobuf::UnknownFieldSet *)a2;
}