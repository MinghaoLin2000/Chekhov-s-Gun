__ZN3TSP4Rect9MergeFromERKS0_
_DWORD *__fastcall TSP::Rect::MergeFrom(_DWORD *this, const TSP::Rect *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  _DWORD *v7; // x0
  _QWORD *v8; // x0
  const TSP::Point *v9; // x1
  TSP::Size *v10; // x0
  _QWORD *v11; // x0
  const TSP::Size *v12; // x1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = (__int64)this;
  v4 = this + 2;
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = (_DWORD *)sub_10003A25C(this + 2, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (v6 & 3) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v7 = *(_DWORD **)(v3 + 24);
      if ( !v7 )
      {
        v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v8 = (_QWORD *)*v8;
        v7 = (_DWORD *)google::protobuf::Arena::CreateMaybeMessage<TSP::Point>(v8);
        *(_QWORD *)(v3 + 24) = v7;
      }
      if ( *((_QWORD *)a2 + 3) )
        v9 = (const TSP::Point *)*((_QWORD *)a2 + 3);
      else
        v9 = (const TSP::Point *)&TSP::_Point_default_instance_;
      this = TSP::Point::MergeFrom(v7, v9);
    }
    if ( (v6 & 2) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 2u;
      v10 = *(TSP::Size **)(v3 + 32);
      if ( !v10 )
      {
        v11 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v11 = (_QWORD *)*v11;
        v10 = (TSP::Size *)google::protobuf::Arena::CreateMaybeMessage<TSP::Size>(v11);
        *(_QWORD *)(v3 + 32) = v10;
      }
      if ( *((_QWORD *)a2 + 4) )
        v12 = (const TSP::Size *)*((_QWORD *)a2 + 4);
      else
        v12 = (const TSP::Size *)&TSP::_Size_default_instance_;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (_DWORD *)TSP::Size::MergeFrom(v10, v12);
    }
  }
  return this;
}