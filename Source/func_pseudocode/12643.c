-[NSError tsu_isCorruptedError]
bool __cdecl -[NSError tsu_isCorruptedError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DC838);
}