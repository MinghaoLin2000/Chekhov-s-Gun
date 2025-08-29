-[SFUOffsetInputStream initWithInputStream:initialOffset:]
SFUOffsetInputStream *__cdecl -[SFUOffsetInputStream initWithInputStream:initialOffset:](
        SFUOffsetInputStream *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  SFUOffsetInputStream *v6; // x20
  SFUInputStream *v7; // x0

  v6 = -[SFUOffsetInputStream init](self, "init");
  if ( v6 )
  {
    v7 = (SFUInputStream *)objc_retain(a3);
    v6->mInputStream = v7;
    v6->mInitialOffset = a4;
    -[SFUInputStream seekToOffset:](v7, "seekToOffset:", a4);
  }
  return v6;
}