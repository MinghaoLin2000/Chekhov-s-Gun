-[NSError tsu_isOutOfSpaceError]
bool __cdecl -[NSError tsu_isOutOfSpaceError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DD3E0);
}