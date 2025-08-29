-[ATXHeuristicJSEnv mockDataSource:block:]
void __cdecl -[ATXHeuristicJSEnv mockDataSource:block:](ATXHeuristicJSEnv *self, SEL a2, id a3, id a4)
{
  -[JSContext setObject:forKeyedSubscript:](self->_jsContext, "setObject:forKeyedSubscript:", a4, a3);
}