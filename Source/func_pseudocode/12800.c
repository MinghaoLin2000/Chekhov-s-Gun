-[NSError tsu_isNoPermissionError]
bool __cdecl -[NSError tsu_isNoPermissionError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DD460);
}