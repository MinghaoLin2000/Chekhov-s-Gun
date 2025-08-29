-[NSError tsu_isNoSuchFileError]
bool __cdecl -[NSError tsu_isNoSuchFileError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DD440);
}