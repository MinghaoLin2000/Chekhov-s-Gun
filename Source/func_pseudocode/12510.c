-[NSURL tsu_isFileSizeLargerThanMaxFileSize:]
bool __cdecl -[NSURL tsu_isFileSizeLargerThanMaxFileSize:](NSURL *self, SEL a2, unsigned __int64 a3)
{
  return -[NSURL tsu_fileSize](self, "tsu_fileSize") > a3;
}