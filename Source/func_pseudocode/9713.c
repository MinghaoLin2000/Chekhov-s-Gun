__ZN3TSP18ObjectUUIDMapEntryD2Ev
void __fastcall TSP::ObjectUUIDMapEntry::~ObjectUUIDMapEntry(TSP::ObjectUUIDMapEntry *this)
{
  TSP::UUID *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::ObjectUUIDMapEntry *)&TSP::_ObjectUUIDMapEntry_default_instance_ )
  {
    v2 = (TSP::UUID *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::UUID::~UUID(v2);
      operator delete(v3, 0x1081C40825B58B5LL);
    }
  }
  sub_100037E58((char *)this + 8);
}