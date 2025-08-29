-[NSError tsp_isRecoverable]
bool __cdecl -[NSError tsp_isRecoverable](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001D1AB0);
}