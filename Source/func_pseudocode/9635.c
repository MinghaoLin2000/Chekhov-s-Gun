__ZN3TSP9FieldInfoD2Ev
void __fastcall TSP::FieldInfo::~FieldInfo(TSP::FieldInfo *this)
{
  __int64 v2; // x20
  TSP::FieldPath *v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  void *v6; // x0
  __int64 v7; // t1
  __int64 v8; // x0
  void *v9; // x0
  __int64 v10; // t1
  __int64 v11; // x0
  void *v12; // x0
  __int64 v13; // t1

  v2 = *((_QWORD *)this + 12);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  if ( this != (TSP::FieldInfo *)&TSP::_FieldInfo_default_instance_ )
  {
    v3 = (TSP::FieldPath *)*((_QWORD *)this + 13);
    if ( v3 )
    {
      TSP::FieldPath::~FieldPath(v3);
      operator delete(v4, 0x1081C40B6D36AFBLL);
    }
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 19) >= 1 )
  {
    v5 = *((_QWORD *)this + 10);
    v7 = *(_QWORD *)(v5 - 8);
    v6 = (void *)(v5 - 8);
    if ( !v7 )
      operator delete(v6);
  }
  if ( *((int *)this + 13) >= 1 )
  {
    v8 = *((_QWORD *)this + 7);
    v10 = *(_QWORD *)(v8 - 8);
    v9 = (void *)(v8 - 8);
    if ( !v10 )
      operator delete(v9);
  }
  if ( *((int *)this + 7) >= 1 )
  {
    v11 = *((_QWORD *)this + 4);
    v13 = *(_QWORD *)(v11 - 8);
    v12 = (void *)(v11 - 8);
    if ( !v13 )
      operator delete(v12);
  }
}