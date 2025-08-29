__ZN3TSP23LargeNumberArraySegmentD2Ev
void __fastcall TSP::LargeNumberArraySegment::~LargeNumberArraySegment(TSP::LargeNumberArraySegment *this)
{
  TSP::LargeArraySegment *v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  void *v5; // x0
  __int64 v6; // t1

  if ( this != (TSP::LargeNumberArraySegment *)&TSP::_LargeNumberArraySegment_default_instance_ )
  {
    v2 = (TSP::LargeArraySegment *)*((_QWORD *)this + 5);
    if ( v2 )
    {
      TSP::LargeArraySegment::~LargeArraySegment(v2);
      operator delete(v3, 0x1081C4010071FB2LL);
    }
  }
  sub_100037E58((char *)this + 8);
  if ( *((int *)this + 7) >= 1 )
  {
    v4 = *((_QWORD *)this + 4);
    v6 = *(_QWORD *)(v4 - 8);
    v5 = (void *)(v4 - 8);
    if ( !v6 )
      operator delete(v5);
  }
}