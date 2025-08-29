-[ATXHeuristicJSEnv _boolForMGQuery:]
bool __cdecl -[ATXHeuristicJSEnv _boolForMGQuery:](ATXHeuristicJSEnv *self, SEL a2, int a3)
{
  if ( (unsigned int)a3 > 5 )
    return 0;
  else
    return _MGGetBoolAnswer(*(&off_100029C70 + a3), a2);
}