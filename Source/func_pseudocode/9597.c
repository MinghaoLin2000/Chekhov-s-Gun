__ZN3TSP12SnappySource4SkipEm
__int64 __fastcall TSP::SnappySource::Skip(TSP::SnappySource *this, __int64 a2)
{
  return TSP::SnappySource::SetOffset(this, *((_QWORD *)this + 3) + a2);
}