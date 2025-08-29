__ZN3TSP4RectD2Ev
void __fastcall TSP::Rect::~Rect(TSP::Rect *this)
{
  __int64 v2; // x20
  __int64 v3; // x20

  if ( this != (TSP::Rect *)&TSP::_Rect_default_instance_ )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
    {
      sub_100037E58(v2 + 8);
      operator delete(v2, 0x1081C404FE48876LL);
    }
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      sub_100037E58(v3 + 8);
      operator delete(v3, 0x1081C404FE48876LL);
    }
  }
  sub_100037E58((char *)this + 8);
}