__ZN3TSP25ReferenceDictionary_EntryD2Ev
void __fastcall TSP::ReferenceDictionary_Entry::~ReferenceDictionary_Entry(TSP::ReferenceDictionary_Entry *this)
{
  __int64 v2; // x20
  __int64 v3; // x20

  if ( this != (TSP::ReferenceDictionary_Entry *)&TSP::_ReferenceDictionary_Entry_default_instance_ )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
    {
      sub_100037E58(v2 + 8);
      operator delete(v2, 0x1081C407D3F2757LL);
    }
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      sub_100037E58(v3 + 8);
      operator delete(v3, 0x1081C407D3F2757LL);
    }
  }
  sub_100037E58((char *)this + 8);
}