-[TSUDatabase initReadonlyWithPath:error:]
id __cdecl -[TSUDatabase initReadonlyWithPath:error:](TSUDatabase *self, SEL a2, id a3, id *a4)
{
  return -[TSUDatabase _initWithPath:readonly:error:](self, "_initWithPath:readonly:error:", a3, 1LL, a4);
}