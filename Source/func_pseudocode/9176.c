-[NSError tsp_isPasswordInputError]
bool __cdecl -[NSError tsp_isPasswordInputError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001D1B60);
}