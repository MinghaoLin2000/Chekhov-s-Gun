__ZN3TSP12DatabaseDataD2Ev
void __fastcall TSP::DatabaseData::~DatabaseData(TSP::DatabaseData *this)
{
  TSP::DataReference *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::DatabaseData *)&TSP::_DatabaseData_default_instance_ )
  {
    v2 = (TSP::DataReference *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::DataReference::~DataReference(v2);
      operator delete(v3, 0x1081C404FE48876LL);
    }
  }
  sub_100037E58((char *)this + 8);
}