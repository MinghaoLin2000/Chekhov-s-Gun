-[NSError tsu_isFileExistsError]
bool __cdecl -[NSError tsu_isFileExistsError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DD420);
}