__ZNK6google8protobuf15OneofDescriptor17GetSourceLocationEPNS0_14SourceLocationE
__int64 __fastcall google::protobuf::OneofDescriptor::GetSourceLocation(__int64 a1, __int64 a2)
{
  __int64 SourceLocation; // x19
  void *__p; // [xsp+8h] [xbp-28h] BYREF
  void *v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  __p = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  google::protobuf::OneofDescriptor::GetLocationPath(a1, &__p);
  SourceLocation = google::protobuf::FileDescriptor::GetSourceLocation(
                     *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                     (int)&__p,
                     a2);
  if ( __p )
  {
    v7 = __p;
    operator delete(__p);
  }
  return SourceLocation;
}