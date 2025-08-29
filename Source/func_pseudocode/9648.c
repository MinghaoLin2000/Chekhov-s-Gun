__ZN3TSP9FieldPathD2Ev
void __fastcall TSP::FieldPath::~FieldPath(TSP::FieldPath *this)
{
  __int64 v2; // x0
  void *v3; // x0
  __int64 v4; // t1

  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 5) >= 1 )
  {
    v2 = *((_QWORD *)this + 3);
    v4 = *(_QWORD *)(v2 - 8);
    v3 = (void *)(v2 - 8);
    if ( !v4 )
      operator delete(v3);
  }
}