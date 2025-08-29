-[NSURL tsu_isFileSizeTooLargeForSharing]
bool __cdecl -[NSURL tsu_isFileSizeTooLargeForSharing](NSURL *self, SEL a2)
{
  return -[NSURL tsu_isFileSizeLargerThanMaxFileSize:](self, "tsu_isFileSizeLargerThanMaxFileSize:", 0x40000000LL);
}