__ZN3TSP13ComponentInfoD2Ev
void __fastcall TSP::ComponentInfo::~ComponentInfo(TSP::ComponentInfo *this)
{
  __int64 v2; // x20
  __int64 v3; // x20
  __int64 v4; // x0
  void *v5; // x0
  __int64 v6; // t1
  __int64 v7; // x0
  void *v8; // x0
  __int64 v9; // t1
  __int64 v10; // x0
  void *v11; // x0
  __int64 v12; // t1
  __int64 v13; // x0
  void *v14; // x0
  __int64 v15; // t1
  __int64 v16; // x0
  void *v17; // x0
  __int64 v18; // t1

  v2 = *((_QWORD *)this + 33);
  if ( (__int64 *)v2 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v2 + 23) < 0 )
      operator delete(*(void **)v2);
    operator delete(v2, 0x1012C40EC159624LL);
  }
  v3 = *((_QWORD *)this + 34);
  if ( (__int64 *)v3 != &google::protobuf::internal::fixed_address_empty_string )
  {
    if ( *(char *)(v3 + 23) < 0 )
      operator delete(*(void **)v3);
    operator delete(v3, 0x1012C40EC159624LL);
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 61) >= 1 )
  {
    v4 = *((_QWORD *)this + 31);
    v6 = *(_QWORD *)(v4 - 8);
    v5 = (void *)(v4 - 8);
    if ( !v6 )
      operator delete(v5);
  }
  sub_100054990((char *)this + 216);
  if ( *((int *)this + 49) >= 1 )
  {
    v7 = *((_QWORD *)this + 25);
    v9 = *(_QWORD *)(v7 - 8);
    v8 = (void *)(v7 - 8);
    if ( !v9 )
      operator delete(v8);
  }
  if ( *((int *)this + 43) >= 1 )
  {
    v10 = *((_QWORD *)this + 22);
    v12 = *(_QWORD *)(v10 - 8);
    v11 = (void *)(v10 - 8);
    if ( !v12 )
      operator delete(v11);
  }
  sub_100054B1C((char *)this + 144);
  sub_100054A9C((char *)this + 120);
  sub_100054A1C((char *)this + 96);
  sub_100054990((char *)this + 72);
  if ( *((int *)this + 13) >= 1 )
  {
    v13 = *((_QWORD *)this + 7);
    v15 = *(_QWORD *)(v13 - 8);
    v14 = (void *)(v13 - 8);
    if ( !v15 )
      operator delete(v14);
  }
  if ( *((int *)this + 7) >= 1 )
  {
    v16 = *((_QWORD *)this + 4);
    v18 = *(_QWORD *)(v16 - 8);
    v17 = (void *)(v16 - 8);
    if ( !v18 )
      operator delete(v17);
  }
}