-[NSError tsu_isReadError]
bool __cdecl -[NSError tsu_isReadError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DC818);
}