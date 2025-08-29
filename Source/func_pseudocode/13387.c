-[SFUFileInputStream p_configureWithFileDescriptor:offset:length:]
bool __cdecl -[SFUFileInputStream p_configureWithFileDescriptor:offset:length:](
        SFUFileInputStream *self,
        SEL a2,
        int a3,
        signed __int64 a4,
        signed __int64 a5)
{
  bool v5; // cc
  bool v6; // w19

  v5 = (a5 | a4) < 0 || (a5 ^ 0x7FFFFFFFFFFFFFFFLL) < a4;
  v6 = !v5;
  if ( v5 )
  {
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInvalidArgumentException,
      CFSTR("Offset and/or length invalid."));
  }
  else
  {
    self->mFd = a3;
    self->mStartOffset = a4;
    self->mCurrentOffset = a4;
    self->mEndOffset = a5 + a4;
  }
  return v6;
}