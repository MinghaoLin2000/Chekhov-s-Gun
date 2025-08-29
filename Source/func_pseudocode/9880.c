__ZN3TSP27ObjectSerializationMetadataD2Ev
void __fastcall TSP::ObjectSerializationMetadata::~ObjectSerializationMetadata(TSP::ObjectSerializationMetadata *this)
{
  __int64 v2; // x0
  void *v3; // x0
  __int64 v4; // t1
  __int64 v5; // x0
  void *v6; // x0
  __int64 v7; // t1

  sub_10004DDC4();
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 25) >= 1 )
  {
    v2 = *((_QWORD *)this + 13);
    v4 = *(_QWORD *)(v2 - 8);
    v3 = (void *)(v2 - 8);
    if ( !v4 )
      operator delete(v3);
  }
  sub_100054A9C((char *)this + 72);
  sub_100055068((char *)this + 48);
  if ( *((int *)this + 7) >= 1 )
  {
    v5 = *((_QWORD *)this + 4);
    v7 = *(_QWORD *)(v5 - 8);
    v6 = (void *)(v5 - 8);
    if ( !v7 )
      operator delete(v6);
  }
}