__ZN3TSP21SparseUUIDArray_EntryD2Ev
void __fastcall TSP::SparseUUIDArray_Entry::~SparseUUIDArray_Entry(TSP::SparseUUIDArray_Entry *this)
{
  __int64 v2; // x20

  if ( this != (TSP::SparseUUIDArray_Entry *)&TSP::_SparseUUIDArray_Entry_default_instance_ )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
    {
      sub_100037E58(v2 + 8);
      operator delete(v2, 0x1081C40825B58B5LL);
    }
  }
  sub_100037E58((char *)this + 8);
}