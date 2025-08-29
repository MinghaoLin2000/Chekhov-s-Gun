-[NSURL tsu_isFileSizeTooLargeForBookPublishing]
bool __cdecl -[NSURL tsu_isFileSizeTooLargeForBookPublishing](NSURL *self, SEL a2)
{
  return -[NSURL tsu_isFileSizeLargerThanMaxFileSize:](self, "tsu_isFileSizeLargerThanMaxFileSize:", 0x80000000LL);
}