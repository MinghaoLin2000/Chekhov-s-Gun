-[NSError tsp_isDataCorruptionError]
bool __cdecl -[NSError tsp_isDataCorruptionError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001D1B80);
}