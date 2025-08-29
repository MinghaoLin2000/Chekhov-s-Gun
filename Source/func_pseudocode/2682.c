-[AutofillNode isFolder]
bool __cdecl -[AutofillNode isFolder](AutofillNode *self, SEL a2)
{
  return (void *)-[AutofillNode kind](self, "kind") == (void *)3;
}