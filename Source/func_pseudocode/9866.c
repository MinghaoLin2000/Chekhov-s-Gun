__ZN3TSP17ViewStateMetadataD2Ev
void __fastcall TSP::ViewStateMetadata::~ViewStateMetadata(TSP::ViewStateMetadata *this)
{
  TSP::ComponentInfo *v2; // x0
  __int64 v3; // x0
  TSP::UUID *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  void *v7; // x0
  __int64 v8; // t1
  __int64 v9; // x0
  void *v10; // x0
  __int64 v11; // t1

  if ( this != (TSP::ViewStateMetadata *)&TSP::_ViewStateMetadata_default_instance_ )
  {
    v2 = (TSP::ComponentInfo *)*((_QWORD *)this + 12);
    if ( v2 )
    {
      TSP::ComponentInfo::~ComponentInfo(v2);
      operator delete(v3, 0x10A1C402CD0F650LL);
    }
    v4 = (TSP::UUID *)*((_QWORD *)this + 13);
    if ( v4 )
    {
      TSP::UUID::~UUID(v4);
      operator delete(v5, 0x1081C40825B58B5LL);
    }
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 19) >= 1 )
  {
    v6 = *((_QWORD *)this + 10);
    v8 = *(_QWORD *)(v6 - 8);
    v7 = (void *)(v6 - 8);
    if ( !v8 )
      operator delete(v7);
  }
  sub_100054A9C((char *)this + 48);
  if ( *((int *)this + 7) >= 1 )
  {
    v9 = *((_QWORD *)this + 4);
    v11 = *(_QWORD *)(v9 - 8);
    v10 = (void *)(v9 - 8);
    if ( !v11 )
      operator delete(v10);
  }
}