-[NSMapTable objectAtIndexedSubscript:]
// attributes: thunk
id __cdecl -[NSMapTable objectAtIndexedSubscript:](NSMapTable *self, SEL a2, unsigned __int64 a3)
{
  return -[NSMapTable objectForKey:](self, "objectForKey:", a3);
}