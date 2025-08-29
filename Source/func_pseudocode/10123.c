__ZN3TSP26SparseReferenceArray_EntryD2Ev
void __fastcall TSP::SparseReferenceArray_Entry::~SparseReferenceArray_Entry(TSP::SparseReferenceArray_Entry *this)
{
  __int64 v2; // x20

  if ( this != (TSP::SparseReferenceArray_Entry *)&TSP::_SparseReferenceArray_Entry_default_instance_ )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
    {
      sub_100037E58(v2 + 8);
      operator delete(v2, 0x1081C407D3F2757LL);
    }
  }
  sub_100037E58((char *)this + 8);
}