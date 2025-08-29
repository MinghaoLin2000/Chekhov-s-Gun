__ZN3TSP24DatabaseImageDataArchiveD2Ev
void __fastcall TSP::DatabaseImageDataArchive::~DatabaseImageDataArchive(TSP::DatabaseImageDataArchive *this)
{
  TSP::DatabaseDataArchive *v2; // x0
  __int64 v3; // x0

  if ( this != (TSP::DatabaseImageDataArchive *)&TSP::_DatabaseImageDataArchive_default_instance_ )
  {
    v2 = (TSP::DatabaseDataArchive *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      TSP::DatabaseDataArchive::~DatabaseDataArchive(v2);
      operator delete(v3, 0x10A1C40F9A64509LL);
    }
  }
  sub_100037E58((char *)this + 8);
}