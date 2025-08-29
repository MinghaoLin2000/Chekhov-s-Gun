__ZN6google8protobuf28GeneratedCodeInfo_AnnotationD2Ev
void __fastcall google::protobuf::GeneratedCodeInfo_Annotation::~GeneratedCodeInfo_Annotation(
        google::protobuf::GeneratedCodeInfo_Annotation *this)
{
  __int64 v2; // x20
  __int64 v3; // x0
  void *v4; // x0
  __int64 v5; // t1

  v2 = *((_QWORD *)this + 6);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 7) >= 1 )
  {
    v3 = *((_QWORD *)this + 4);
    v5 = *(_QWORD *)(v3 - 8);
    v4 = (void *)(v3 - 8);
    if ( !v5 )
      operator delete(v4);
  }
}