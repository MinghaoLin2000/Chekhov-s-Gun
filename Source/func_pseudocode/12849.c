-[TSUDatabase initWithPath:error:]
TSUDatabase *__cdecl -[TSUDatabase initWithPath:error:](TSUDatabase *self, SEL a2, id a3, id *a4)
{
  return (TSUDatabase *)-[TSUDatabase _initWithPath:readonly:error:](self, "_initWithPath:readonly:error:", a3, 0LL, a4);
}