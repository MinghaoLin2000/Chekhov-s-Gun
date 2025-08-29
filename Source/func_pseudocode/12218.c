__ZN6google8protobuf15UnknownFieldSet20MergeFromCodedStreamEPNS0_2io16CodedInputStreamE
__int64 __fastcall google::protobuf::UnknownFieldSet::MergeFromCodedStream(
        google::protobuf::UnknownFieldSet *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::UnknownFieldSet *a3)
{
  __int64 v5; // x19
  _BYTE *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x21
  void *__p; // [xsp+8h] [xbp-38h] BYREF
  _BYTE *v12; // [xsp+10h] [xbp-30h]
  __int64 v13; // [xsp+18h] [xbp-28h]

  __p = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (unsigned int)google::protobuf::internal::WireFormat::SkipMessage(
                       a2,
                       (google::protobuf::io::CodedInputStream *)&__p,
                       a3)
    && *((_BYTE *)a2 + 36) )
  {
    google::protobuf::UnknownFieldSet::MergeFromAndDestroy(this, (google::protobuf::UnknownFieldSet *)&__p);
    v5 = 1LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = __p;
  if ( __p != v12 )
  {
    v7 = (int)((v12 - (_BYTE *)__p) >> 4);
    v8 = v7 + 1;
    v9 = 16 * v7 - 16;
    do
    {
      google::protobuf::UnknownField::Delete((__int64)__p + v9);
      --v8;
      v9 -= 16LL;
    }
    while ( v8 > 1 );
    v6 = __p;
  }
  if ( v6 )
  {
    v12 = v6;
    operator delete(v6);
  }
  return v5;
}