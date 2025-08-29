__ZN6google8protobuf8internal12ExtensionSet4SwapEPS2_
void __fastcall google::protobuf::internal::ExtensionSet::Swap(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::internal::ExtensionSet *a2)
{
  __int16 v4; // w8
  __int16 v5; // w8
  __int64 v6; // x8
  __int64 v7; // [xsp+8h] [xbp-28h] BYREF
  int v8; // [xsp+10h] [xbp-20h]
  __int64 v9; // [xsp+18h] [xbp-18h]

  if ( *(_QWORD *)this == *(_QWORD *)a2 )
  {
    v4 = *((_WORD *)this + 4);
    *((_WORD *)this + 4) = *((_WORD *)a2 + 4);
    *((_WORD *)a2 + 4) = v4;
    v5 = *((_WORD *)this + 5);
    *((_WORD *)this + 5) = *((_WORD *)a2 + 5);
    *((_WORD *)a2 + 5) = v5;
    v6 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = v6;
  }
  else
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0LL;
    google::protobuf::internal::ExtensionSet::MergeFrom((__int64)&v7, a2);
    google::protobuf::internal::ExtensionSet::Clear(a2);
    google::protobuf::internal::ExtensionSet::MergeFrom((__int64)a2, this);
    google::protobuf::internal::ExtensionSet::Clear(this);
    google::protobuf::internal::ExtensionSet::MergeFrom(
      (__int64)this,
      (const google::protobuf::internal::ExtensionSet *)&v7);
    google::protobuf::internal::ExtensionSet::~ExtensionSet((google::protobuf::internal::ExtensionSet *)&v7);
  }
}