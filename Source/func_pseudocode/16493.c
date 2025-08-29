-[iAUPServer getNumberOfBytesDownloadedInCurrentSession]
id __cdecl -[iAUPServer getNumberOfBytesDownloadedInCurrentSession](iAUPServer *self, SEL a2)
{
  return +[NSNumber numberWithUnsignedInt:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedInt:",
           self->_totalBytesDownloadedInCurrentSession);
}