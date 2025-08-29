-[SFUFileInputStream enableSystemCaching]
void __cdecl -[SFUFileInputStream enableSystemCaching](SFUFileInputStream *self, SEL a2)
{
  int mFd; // w0

  mFd = self->mFd;
  if ( mFd != -1 )
  {
    if ( fcntl(mFd, 48, 0LL) == -1 )
      +[NSException sfu_errnoRaise:format:](
        &OBJC_CLASS___NSException,
        "sfu_errnoRaise:format:",
        CFSTR("SFUFcntlError"),
        CFSTR("Could not unset F_NOCACHE on read stream."));
    self->mIsCachingDisabled = 0;
  }
}