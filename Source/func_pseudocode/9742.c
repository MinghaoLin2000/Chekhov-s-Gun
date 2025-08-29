__ZN3TSP15PackageMetadataD2Ev
void __fastcall TSP::PackageMetadata::~PackageMetadata(TSP::PackageMetadata *this)
{
  TSP::DocumentRevision *v2; // x0
  __int64 v3; // x0
  TSP::Reference *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  void *v7; // x0
  __int64 v8; // t1
  __int64 v9; // x0
  void *v10; // x0
  __int64 v11; // t1
  __int64 v12; // x0
  void *v13; // x0
  __int64 v14; // t1

  if ( this != (TSP::PackageMetadata *)&TSP::_PackageMetadata_default_instance_ )
  {
    v2 = (TSP::DocumentRevision *)*((_QWORD *)this + 21);
    if ( v2 )
    {
      TSP::DocumentRevision::~DocumentRevision(v2);
      operator delete(v3, 0x1081C407BE7EBECLL);
    }
    v4 = (TSP::Reference *)*((_QWORD *)this + 22);
    if ( v4 )
    {
      TSP::Reference::~Reference(v4);
      operator delete(v5, 0x1081C407D3F2757LL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_100054FE8((char *)this + 144);
  if ( *((int *)this + 31) >= 1 )
  {
    v6 = *((_QWORD *)this + 16);
    v8 = *(_QWORD *)(v6 - 8);
    v7 = (void *)(v6 - 8);
    if ( !v8 )
      operator delete(v7);
  }
  if ( *((int *)this + 25) >= 1 )
  {
    v9 = *((_QWORD *)this + 13);
    v11 = *(_QWORD *)(v9 - 8);
    v10 = (void *)(v9 - 8);
    if ( !v11 )
      operator delete(v10);
  }
  if ( *((int *)this + 19) >= 1 )
  {
    v12 = *((_QWORD *)this + 10);
    v14 = *(_QWORD *)(v12 - 8);
    v13 = (void *)(v12 - 8);
    if ( !v14 )
      operator delete(v13);
  }
  sub_100055068((char *)this + 48);
  sub_100054FE8((char *)this + 24);
}