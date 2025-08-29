__ZN6google8protobuf12UnknownField6DeleteEv
__int64 __fastcall google::protobuf::UnknownField::Delete(__int64 this)
{
  int v1; // w8
  __int64 v2; // x19
  google::protobuf::UnknownFieldSet *v3; // x0
  __int64 v4; // x1
  google::protobuf::UnknownFieldSet *v5; // x19
  void *v6; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = *(_DWORD *)(this + 4);
  if ( v1 == 4 )
  {
    v5 = *(google::protobuf::UnknownFieldSet **)(this + 8);
    if ( !v5 )
      return this;
    v6 = *(void **)v5;
    if ( *(_QWORD *)v5 != *((_QWORD *)v5 + 1) )
    {
      google::protobuf::UnknownFieldSet::ClearFallback(v5);
      v6 = *(void **)v5;
    }
    if ( v6 )
    {
      *((_QWORD *)v5 + 1) = v6;
      operator delete(v6);
    }
    v3 = v5;
    v4 = 0x20C40960023A9LL;
  }
  else
  {
    if ( v1 != 3 )
      return this;
    v2 = *(_QWORD *)(this + 8);
    if ( !v2 )
      return this;
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    v3 = (google::protobuf::UnknownFieldSet *)v2;
    v4 = 0x1012C40EC159624LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return operator delete(v3, v4);
}