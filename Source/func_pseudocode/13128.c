-[TSUBacktrace isEqual:]
bool __cdecl -[TSUBacktrace isEqual:](TSUBacktrace *self, SEL a2, id a3)
{
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x9
  int frames; // w10
  int v9; // w11
  bool v10; // w8
  bool v12; // zf

  v5 = objc_opt_class(&OBJC_CLASS___TSUBacktrace);
  v6 = TSUDynamicCast(v5, a3);
  frames = self->_frames;
  LODWORD(v7) = self->_initAdjustment;
  v9 = *(_DWORD *)(v6 + 16) - *(_DWORD *)(v6 + 20);
  v10 = frames - (_DWORD)v7 == v9;
  if ( frames - (_DWORD)v7 == v9 && frames > (int)v7 )
  {
    v7 = (int)v7;
    do
    {
      v12 = self->_callstack[v7] == *(void **)(*(_QWORD *)(v6 + 8) + 8 * v7);
      v10 = v12;
      ++v7;
    }
    while ( v12 && v7 < frames );
  }
  return v10;
}