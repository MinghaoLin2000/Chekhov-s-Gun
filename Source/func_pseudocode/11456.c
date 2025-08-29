__ZN6google8protobuf25EncodedDescriptorDatabaseD2Ev
void __fastcall google::protobuf::EncodedDescriptorDatabase::~EncodedDescriptorDatabase(
        google::protobuf::EncodedDescriptorDatabase *this)
{
  void **v2; // x20
  void **v3; // x21
  void *v4; // t1
  __int64 v5; // x1

  *(_QWORD *)this = off_1001D9678;
  v2 = (void **)*((_QWORD *)this + 2);
  v3 = (void **)*((_QWORD *)this + 3);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v2++;
      operator delete(v4);
    }
    while ( v2 != v3 );
    v2 = (void **)*((_QWORD *)this + 2);
  }
  if ( v2 )
  {
    *((_QWORD *)this + 3) = v2;
    operator delete(v2);
  }
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v5 )
    sub_1000BED44();
}