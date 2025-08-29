-[ATXHeuristicJSEnv _localizedFormatStringForKey:]
id __cdecl -[ATXHeuristicJSEnv _localizedFormatStringForKey:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  return -[NSBundle localizedStringForKey:value:table:](
           self->_heuristicsBundle,
           "localizedStringForKey:value:table:",
           a3,
           0LL,
           0LL);
}