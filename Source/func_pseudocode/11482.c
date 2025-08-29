__ZN6google8protobuf8internal12ExtensionSetD2Ev
void __fastcall google::protobuf::internal::ExtensionSet::~ExtensionSet(google::protobuf::internal::ExtensionSet *this)
{
  _QWORD *v2; // x1
  __int64 v3; // x21
  google::protobuf::internal::ExtensionSet::Extension *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x20

  if ( !*(_QWORD *)this )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 2);
    if ( *((unsigned __int16 *)this + 4) >= 0x101u )
    {
      sub_1000C7D78(*v2, v2 + 1);
    }
    else if ( *((_WORD *)this + 5) )
    {
      v3 = 32LL * *((unsigned __int16 *)this + 5);
      v4 = (google::protobuf::internal::ExtensionSet::Extension *)(v2 + 1);
      do
      {
        google::protobuf::internal::ExtensionSet::Extension::Free(v4);
        v4 = (google::protobuf::internal::ExtensionSet::Extension *)((char *)v4 + 32);
        v3 -= 32LL;
      }
      while ( v3 );
    }
    v5 = *((_QWORD *)this + 2);
    if ( *((unsigned __int16 *)this + 4) >= 0x101u )
    {
      if ( v5 )
      {
        v6 = *((_QWORD *)this + 2);
        sub_10002AC6C(v5, *(_QWORD *)(v5 + 8));
        operator delete(v6, 0x1020C4062D53EE8LL);
      }
    }
    else if ( v5 )
    {
      operator delete[](v5, 0x1062C802AB6010CLL);
    }
  }
}