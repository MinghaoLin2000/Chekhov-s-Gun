-[TSUDatabase compactWithError:]
bool __cdecl -[TSUDatabase compactWithError:](TSUDatabase *self, SEL a2, id *a3)
{
  return -[TSUDatabase executeUpdateWithSql:error:](self, "executeUpdateWithSql:error:", "vacuum", a3);
}