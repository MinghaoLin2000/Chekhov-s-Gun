-[NSError tsu_isFeatureUnsupportedError]
bool __cdecl -[NSError tsu_isFeatureUnsupportedError](NSError *self, SEL a2)
{
  return -[NSError tsu_isErrorPassingTest:](self, "tsu_isErrorPassingTest:", &stru_1001DD480);
}