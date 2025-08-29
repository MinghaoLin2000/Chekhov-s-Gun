__ZN3TSP16LargeObjectArrayD2Ev
void __fastcall TSP::LargeObjectArray::~LargeObjectArray(TSP::LargeObjectArray *this)
{
  TSP::LargeArray *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::LargeObjectArray *)&TSP::_LargeObjectArray_default_instance_ )
  {
    v2 = (TSP::LargeArray *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::LargeArray::~LargeArray(v2);
      operator delete(v3, 0x10A1C40B3F725BALL);
    }
  }
  sub_100037E58((char *)this + 8);
}