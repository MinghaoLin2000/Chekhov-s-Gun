-[SFUFileInputStream disableSystemCaching]
void __cdecl -[SFUFileInputStream disableSystemCaching](SFUFileInputStream *self, SEL a2)
{
  int mFd; // w0

  mFd = self->mFd;
  if ( mFd != -1 )
  {
    if ( fcntl(mFd, 48, 1LL) == -1 )
      +[NSException sfu_errnoRaise:format:](
        &OBJC_CLASS___NSException,
        "sfu_errnoRaise:format:",
        CFSTR("SFUFcntlError"),
        CFSTR("Could not set F_NOCACHE on read stream."));
    self->mIsCachingDisabled = 1;
  }
}