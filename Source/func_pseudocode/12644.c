-[NSError tsu_isWriteError]
bool __cdecl -[NSError tsu_isWriteError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DC858);
}