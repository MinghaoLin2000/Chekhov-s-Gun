__ZN3TSP12SnappySource9SetOffsetEm
void __fastcall TSP::SnappySource::SetOffset(TSP::SnappySource *this, unsigned __int64 a2)
{
  void *v3; // x0
  unsigned __int64 v4; // x9
  _QWORD *v5; // x19

  *((_QWORD *)this + 3) = a2;
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 5);
    v5 = (_QWORD *)((char *)this + 40);
    if ( v4 > a2 || *((_QWORD *)this + 6) + v4 <= a2 )
    {
      *((_QWORD *)this + 4) = 0LL;
      objc_release(v3);
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
    }
  }
}