__ZN3TSP11MessageInfoD2Ev
void __fastcall TSP::MessageInfo::~MessageInfo(TSP::MessageInfo *this)
{
  TSP::FieldPath *v2; // x0
  __int64 v3; // x0
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

  if ( this != (TSP::MessageInfo *)&TSP::_MessageInfo_default_instance_ )
  {
    v2 = (TSP::FieldPath *)*((_QWORD *)this + 24);
    if ( v2 )
    {
      TSP::FieldPath::~FieldPath(v2);
      operator delete(v3, 0x1081C40B6D36AFBLL);
    }
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 43) >= 1 )
  {
    v4 = *((_QWORD *)this + 22);
    v6 = *(_QWORD *)(v4 - 8);
    v5 = (void *)(v4 - 8);
    if ( !v6 )
      operator delete(v5);
  }
  sub_1000544D4((char *)this + 144);
  if ( *((int *)this + 31) >= 1 )
  {
    v7 = *((_QWORD *)this + 16);
    v9 = *(_QWORD *)(v7 - 8);
    v8 = (void *)(v7 - 8);
    if ( !v9 )
      operator delete(v8);
  }
  if ( *((int *)this + 25) >= 1 )
  {
    v10 = *((_QWORD *)this + 13);
    v12 = *(_QWORD *)(v10 - 8);
    v11 = (void *)(v10 - 8);
    if ( !v12 )
      operator delete(v11);
  }
  if ( *((int *)this + 19) >= 1 )
  {
    v13 = *((_QWORD *)this + 10);
    v15 = *(_QWORD *)(v13 - 8);
    v14 = (void *)(v13 - 8);
    if ( !v15 )
      operator delete(v14);
  }
  sub_100054454((char *)this + 48);
  if ( *((int *)this + 7) >= 1 )
  {
    v16 = *((_QWORD *)this + 4);
    v18 = *(_QWORD *)(v16 - 8);
    v17 = (void *)(v16 - 8);
    if ( !v18 )
      operator delete(v17);
  }
}