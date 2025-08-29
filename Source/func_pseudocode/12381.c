__ZN6snappy15ByteArraySource4SkipEm
__int64 __fastcall snappy::ByteArraySource::Skip(__int64 this, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(this + 16) - a2;
  *(_QWORD *)(this + 8) += a2;
  *(_QWORD *)(this + 16) = v2;
  return this;
}