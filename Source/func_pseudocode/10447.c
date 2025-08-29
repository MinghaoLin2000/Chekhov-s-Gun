__ZN3TSP25SparseUUIDPathArray_EntryD2Ev
void __fastcall TSP::SparseUUIDPathArray_Entry::~SparseUUIDPathArray_Entry(TSP::SparseUUIDPathArray_Entry *this)
{
  TSP::UUIDPath *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::SparseUUIDPathArray_Entry *)&TSP::_SparseUUIDPathArray_Entry_default_instance_ )
  {
    v2 = (TSP::UUIDPath *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::UUIDPath::~UUIDPath(v2);
      operator delete(v3, 0x10A1C40290C9B23LL);
    }
  }
  sub_100037E58((char *)this + 8);
}