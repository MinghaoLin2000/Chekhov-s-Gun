__ZN6google8protobuf17DescriptorBuilder8AddErrorERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEERKNS0_7MessageENS0_14DescriptorPool14ErrorCollector13ErrorLocationEPKc
void __fastcall google::protobuf::DescriptorBuilder::AddError(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *__s)
{
  void *__p[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10; // [xsp+1Fh] [xbp-21h]

  sub_10007A754((int)__p, __s);
  google::protobuf::DescriptorBuilder::AddError(a1, a2, a3, a4, (__int64)__p);
  if ( v10 < 0 )
    operator delete(__p[0]);
}