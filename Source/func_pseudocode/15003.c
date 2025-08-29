-[ATXHeuristicJSEnv _mgQueryCaller:]
bool __cdecl -[ATXHeuristicJSEnv _mgQueryCaller:](ATXHeuristicJSEnv *self, SEL a2, int a3)
{
  unsigned __int8 *mgQueryResults; // x19
  int v4; // w8
  __int64 v5; // x20
  bool result; // w0

  if ( a3 > 5 )
    return 0;
  mgQueryResults = self->_mgQueryResults;
  v4 = self->_mgQueryResults[a3];
  if ( v4 != 255 )
    return v4 != 0;
  v5 = a3;
  result = -[ATXHeuristicJSEnv _boolForMGQuery:](self, "_boolForMGQuery:");
  mgQueryResults[v5] = result;
  return result;
}