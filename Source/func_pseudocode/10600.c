__ZN3TSP27LargeLazyObjectArraySegmentD2Ev
void __fastcall TSP::LargeLazyObjectArraySegment::~LargeLazyObjectArraySegment(TSP::LargeLazyObjectArraySegment *this)
{
  TSP::LargeArraySegment *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::LargeLazyObjectArraySegment *)&TSP::_LargeLazyObjectArraySegment_default_instance_ )
  {
    v2 = (TSP::LargeArraySegment *)*((_QWORD *)this + 6);
    if ( v2 )
    {
      TSP::LargeArraySegment::~LargeArraySegment(v2);
      operator delete(v3, 0x1081C4010071FB2LL);
    }
  }
  sub_100037E58((char *)this + 8);
  sub_10007729C((char *)this + 24);
}