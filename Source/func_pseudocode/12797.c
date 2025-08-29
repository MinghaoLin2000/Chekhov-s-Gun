-[NSError tsu_isCancelError]
bool __cdecl -[NSError tsu_isCancelError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DD400);
}